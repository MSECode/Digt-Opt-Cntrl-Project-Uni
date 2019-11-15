%% Luenberger Observer MATLAB implementation
%
% ref. p 27, LabBook
%

clc
clear
close all

%syms xw xw_dot thb thb_dot

%x = [ xw; xw_dot; thb; thb_dot ];
%y_acc = thb;
%y_nacc = xw;
%y = [y_acc ; y_nacc]; 


A    = [0                  1                0              0;
        0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
        0                  0                0              1;
        0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
B    = [0; 
        0.3659795684e2; 
        0; 
        -0.1567072230e3];

C = [ 1   0   0   0  ;  % extended C
      0   0   1   0  ];
  
D = [ 0 ];

C_acc  = [ 0   0   1   0  ]; % accurate C

C_nacc = [ 1   0   0   0  ]; % non-accurate C
  
T = inv([ 0   0   1   0 ; % accurate part of C
          1   0   0   0 ; % V ...
          0   1   0   0 ;
          0   0   0   1  ]);
  
  
A_t  = T^(-1)*A*T; 
B_t  = T^(-1)*B; 
C_tacc  = C_acc*T;
C_tnacc = C_nacc*T;

%z = T^(-1)*x;
%chi = z(2:4);

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

%% Luenberger DESIGN

% Poles
s1 = tf('s');
TF_closed = (0.7368846007e4 * s1 + 0.4129875744e5 + 0.8679012356e1 * s1 ^ 2) / ...
            (s1 ^ 3 + s1 ^ 2 * 0.852042392947857479e3 + s1 * 0.730577406500885081e4 + 0.142742428567446332e5);
poles = pole(TF_closed);
afPoles = [poles; -5]; 

% Full-order Luenberger

L = ( place( A', C', afPoles ) )'; %what other pole should we introduce??

% Reduced-order Luenberger

AA = Axx;
CC = [Ayx; Cx];

L_red = ( place( AA', CC', poles ) )'; 

L_acc  = L_red(1:3,1);
L_nacc = L_red(1:3,2); 

M1 = Axx - L_acc*Ayx - L_nacc*Cx;
M2 = Bx - L_acc*By;
M3 = Axy - L_acc*Ayy - L_nacc*Cy;
M4 = L_nacc;
M5 = L_acc;
M6 = T(1:4,1);
M7 = T(1:4,2:4);

% PID values
p_1 = -843.40;
p_2 = -5.64;
p_3 = 5.68;
pp_3 = -3;
gain_G_s = -156.71;

kP = (p_1*pp_3 + p_2*pp_3 - p_1*p_3- p_2*p_3)/gain_G_s;
kI = (p_1*p_2*p_3 - p_1*p_2*pp_3)/gain_G_s;
kD = (p_3 - pp_3)/gain_G_s;

%% Error computation

% Error wrt theta_full and reduced
theta_norm = theta_b.signals.values(:,1);
theta_full = theta_b.signals.values(:,2);
theta_red  = theta_b.signals.values(:,3);
err_full_theta = max(abs(theta_norm - theta_full));
err_red_theta  = max(abs(theta_norm - theta_red));

% Error wrt position full and reduced
x_w_norm = x_w.signals.values(:,1);
x_w_full = x_w.signals.values(:,2);
x_w_red  = x_w.signals.values(:,3);
err_full_pos = max(abs(x_w_norm - x_w_full));
err_red_pos  = max(abs(x_w_norm - x_w_red));

%% Discretization of the system

fSamplingPeriod = 0.01;
cont_sys = ss(A, B, C, D);
discr_sys = c2d(cont_sys, fSamplingPeriod, 'tustin');






