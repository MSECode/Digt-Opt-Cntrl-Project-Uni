clc;
close all;

%% Task 6.3

Sampl_frequency = 200; % Hertz
fSamplingPeriod = 1/Sampl_frequency; 
A_d = ;
B_d = ;
C_d = ;
D_d = ;

%% Symmetric Root Locus - discrete time
rho = 0.1;

A_lqr = [A zeros(size(A)); -C'*C -A'];
B_lqr = [B; -C'*D];
C_lqr = [D'*C B'];
D_lqr = [D'*D];

SS_lqr = ss(A_lqr, B_lqr, C_lqr, D_lqr);
rlocus(1 + SS_lqr/rho);

 
%% LQR Gain - discrete time

Q = (C'*C);
K = lqr(A, B, Q, rho);