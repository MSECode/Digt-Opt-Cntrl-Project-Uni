clc
close all;
clear all;
%% Task 6.4 - Observer Part

Sampl_frequency = 160; % Hertz
fSamplingPeriod = round(1/Sampl_frequency,3); 

% % Do not modify these variables
iNumberOfEncoderSteps	= 720;
fGyroConversionFactor	= -1/131;
fWheelRadius			= 0.0216; % [m]
load('GyroBias.mat');

%% Continuous SS system

A    = [0                  1                0              0;
        0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
        0                  0                0              1;
        0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2];
    
B    = [0; 
        0.3659795684e2; 
        0; 
        -0.1567072230e3];

C = [ 1   0   0   0  ;
      0   0   1   0  ];
  
D = [ 0 ];


%% Discrete SS system

ss_cont  = ss(A, B, C, D);
ss_discr = c2d(ss_cont, fSamplingPeriod, 'foh');

[Ad, Bd, Cd, Dd] = ssdata(ss_discr);

%% Full and reduced state oberserver

C_acc  = Cd(1,1:4); % accurate C
C_nacc = Cd(2,1:4); % non-accurate C
  
T = inv([ C_acc          ; % accurate part of C
          C_nacc         ; % V ...
          0   1   0   0  ;
          0   0   0   1  ]);
    
A_t  = T^(-1)*Ad*T; 
B_t  = T^(-1)*Bd; 
C_tacc  = C_acc*T;
C_tnacc = C_nacc*T;

Ayy = A_t(1);
Ayx = A_t(1,2:4);
Axy = A_t(2:4,1);
Axx = A_t(2:4,2:4);

By = B_t(1);
Bx = B_t(2:4);

Cy = C_tnacc(1);
Cx = C_tnacc(1,2:4);

% we now have all the ingredients to design both the full and the reduced
% order Luenberger estimator. 

%% Pole mapping

h = fSamplingPeriod;

poles_cont = [-843.40 -5 -5.679 -5.6422];
poles_red_c  = [-843.40 -5.679 -5.6422];
poles_discr = exp(4*h*poles_cont);

poles_red_d = exp(4*h*poles_red_c);
afPoles = poles_discr; 

%% Luenberger DESIGN

% Full-order Luenberger
% Poles that we decide for the observer
poles_4_obs_fd = poles_discr;
Ld = ( place( Ad', Cd', poles_4_obs_fd ) )';

% Reduced-order Luenberger

AA = Axx;
CC = [Ayx; Cx];


poles_4_obs_rd = poles_red_d;
L_red = ( place( AA', CC', poles_4_obs_rd ) )'; 

L_acc  = L_red(1:3,1);
L_nacc = L_red(1:3,2); 

Md1 = Axx - L_acc*Ayx - L_nacc*Cx;
Md2 = Bx - L_acc*By;
Md3 = Axy - L_acc*Ayy - L_nacc*Cy;
Md4 = L_nacc;
Md5 = L_acc;
Md6 = T(1:4,1);
Md7 = T(1:4,2:4);

%% Kd

C_bar = [5 1 10 2];
rho = 0.1;

Qd = C_bar'*C_bar;

Kd = dlqr(Ad, Bd, Qd, rho);

%% N: servo problem

CC = [1 0 0 0];

Nud = 1/(CC*inv(eye(4)-Ad + Bd*Kd)*Bd);
Nxd = 0;

%% Plots
% 
% %Reference
% reference_values = reference.signals.values(:,1);
% reference_times = reference.time(:,1);
% 
% subplot(4,1,1)
% plot(reference_times, reference_values, 'Color', '#0072BD')
% grid on
% title('r(t)'); xlabel('time [sec]'); ylabel('meters [m]');
% xlim([0 reference_times(end)])
% ylim([-0.5 1.5])
% 
% % Input
% voltage_values = zeros(length(v_m.signals.values),1);
% voltage_times = v_m.time(:,1);
% for i = 1:length(v_m.signals.values)
%     voltage_values(i,1) = voltage_values(i,1) + v_m.signals.values(:,:,i);
% end
% 
% subplot(4,1,2)
% stairs( voltage_times, voltage_values, 'Color', '#0072BD');
% grid on
% title('u'); xlabel('time [sec]'); ylabel('Volt [V]');
% xlim([0 reference_times(end)])
% ylim([-10 10])
% 
% % Angle
% theta_values = zeros(length(measured_theta_b.signals.values),1);
% theta_times = measured_theta_b.time(:,1);
% for i = 1:length(measured_theta_b.signals.values)
%     theta_values(i,1) = theta_values(i,1) + measured_theta_b.signals.values(:,:,i);
% end
% 
% subplot(4,1,3)
% stairs( theta_times, theta_values, 'Color', '#0072BD');
% grid on
% title('\theta_b'); xlabel('time [sec]'); ylabel('radiant [rad]');
% xlim([0 reference_times(end)])
% 
% % Position
% wheel_values = zeros(length(measured_x_w.signals.values),1);
% wheel_times = measured_x_w.time(:,1);
% for i = 1:length(measured_x_w.signals.values)
%     wheel_values(i,1) = wheel_values(i,1) + measured_x_w.signals.values(:,:,i);
% end
% 
% subplot(4,1,4)
% stairs( wheel_times, wheel_values, 'Color', '#0072BD');
% grid on
% title('x_w'); xlabel('time (sec)'); ylabel('meters [m]');
% xlim([0 reference_times(end)])

%% Variable to save for Themis
% 
% % % Test 1
% % group_14_experiments_1_times = reference_times;
% % group_14_experiments_1_encoder = wheel_values;
% % group_14_experiments_1_angle = theta_values;
% % group_14_experiments_1_actuation = voltage_values;
% 
% % Test 2
% group_14_experiments_2_times = reference_times;
% group_14_experiments_2_encoder = wheel_values;
% group_14_experiments_2_angle = theta_values;
% group_14_experiments_2_actuation = voltage_values;
% 
% % Max distance
% group_14_r_max = 0.23;