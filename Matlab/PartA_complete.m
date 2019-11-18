%% Lab A
clc;
close all;
clear all;
%% Task 4.2. SS system in numeric form

% State Space Matrices without disturbance
A_in = [0                  1                0              0;
        0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
        0                  0                0              1;
        0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
B_in = [0; 
        0.3659795684e2; 
        0; 
        -0.1567072230e3];
C_in = [0 0 1 0];
D_in = 0;

% Transfer function G(s)
s1 = tf('s');
G_s_in = -0.1567072230e3 * s1 / (s1 + 0.843400171542131261e3) / (s1 + 0.564222967725124569e1) / (s1 - 0.567902075180506838e1);

figure(1)
pzmap(G_s_in)
grid on
xlabel('Real axis')
ylabel('Imaginary axis')
title('Pole-Zero map of the Plant')
%% Task 4.3. Poles placement
p_1 = -843.40;
p_2 = -5.64;
p_3 = 5.68;
pp_3 = -3;
gain_G_s = -156.71;

K_P = (p_1*pp_3 + p_2*pp_3 - p_1*p_3- p_2*p_3)/gain_G_s;
K_I = (p_1*p_2*p_3 - p_1*p_2*pp_3)/gain_G_s;
K_D = (p_3 - pp_3)/gain_G_s;

Cntr_tf = K_P + K_I/s1 + K_D*s1;
%% Task 4.4. Effect of disturbances
A_dst = [0                  1                0              0;
         0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
         0                  0                0              1;
         0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
 
B_dst = [0              0;
         0.3659795684e2 0.1764000724e2;
         0              0;
        -0.1567072230e3 -0.6640438947e2;];

C_dst = [0 0 1 0];

D_dst = [0 0];

%% Task 4.5 Equation for simulink
A_sim = [0                  1                0              0;
         0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
         0                  0                0              1;
         0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
 
B_sim = [0              0;
         0.3659795684e2 0.1764000724e2;
         0              0;
        -0.1567072230e3 -0.6640438947e2;];

C_sim = eye(4);

D_sim = zeros(4,2);

s1 = tf('s');

TF_open = (-0.1567072230e3 * s1 / (s1 + 0.843400171542131261e3) / (s1 + 0.564222967725124569e1) / (s1 - 0.567902075180506838e1));

figure(2)
bode(TF_open)
title('Bode plot open-loop transfer function')

TF_cntr = pid(K_P, K_I, K_D);
TF_closed = (0.7368846007e4 * s1 + 0.4129875744e5 + 0.8679012356e1 * s1 ^ 2) / ...
            (s1 ^ 3 + s1 ^ 2 * 0.852042392947857479e3 + s1 * 0.730577406500885081e4 + 0.142742428567446332e5);

figure(3)
bode(TF_closed)
title('Bode plot closed-loop transfer function')
grid on
figure (4)
pzmap(TF_closed)
title('Poles-Zero maps controlled system')
grid on

%% Task 4.6 Controller discretization with ZOH

% The calculation for the bandwidth has to be done
% by clculating the closed-loop transfer function in Matlab
% although the Maple computation gives a sampling period 
% too high

% Closed loop tf with Matlab
TF_open_mat = ss(A_in, B_in, C_in, D_in);

TF_closed_mat = feedback(TF_cntr*TF_open_mat, 1);

figure(13)
bode(TF_closed_mat)
title('Bode plot closed-loop transfer function')
grid on

dbdrop = -3;
% cut-off frequency in rad/s
cut_off_freq = bandwidth(TF_closed_mat,dbdrop);

% Cut-off frequency in Hertz
cut_off_hertz = cut_off_freq/(2*pi);

% Sampling frequency
sampl_freq = 25*cut_off_hertz;

% Samplimg period
T_sampl = 1/sampl_freq;

%% Plots
figure(5)
plot( out.x_w_d.time, out.x_w_d.signals.values, 'Color', '#D95319' );
title('x_w')
xlabel('time [s]')
ylabel('meters [m]')

figure(6)
plot( out.theta_b_d.time, out.theta_b_d.signals.values, 'Color', '#D95319' );
title('\theta_b')
xlabel('time [s]')
ylabel('degrees [deg]')

figure(7)
plot( out.d_d.time, out.d_d.signals.values, 'Color', '#D95319' );
title('d')
xlabel('time [s]')
ylabel('Newtons [N]')

figure(8)
plot( out.v_m_d.time, out.v_m_d.signals.values, 'Color', '#D95319' );
title('v_m')
xlabel('time [s]')
ylabel('Volts [V]')

%% Plots fall 
figure(11)
plot(out.theta_b_fall_d.time, out.theta_b_fall_d.signals.values(:,1), 'Color', '#0072BD' );
hold on
plot(out.theta_b_fall_d.time, out.theta_b_fall_d.signals.values(:,2), 'Color', '#D95319' );
title('\theta_b')
xlabel('time [s]')
ylabel('meters [m]')
legend('simulated', 'linearized')

figure(12)
plot(out.v_m_fall_d.time, out.v_m_fall_d.signals.values(:,1), 'Color', '#0072BD' );
hold on
plot(out.v_m_fall_d.time, out.v_m_fall_d.signals.values(:,2), 'Color', '#D95319' );
title('v_m')
xlabel('time [s]')
ylabel('Voltage [V]')
legend('simulated', 'linearized', 'Location', 'southeast')

