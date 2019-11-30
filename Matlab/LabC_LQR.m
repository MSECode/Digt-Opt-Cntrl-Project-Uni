%% Continuous SS system
%
% Here are the continuous-time SS system matrices

close all;
clear all;
clc;

A    = [0                  1                0              0;
        0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
        0                  0                0              1;
        0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
    
B    = [0; 
        0.3659795684e2; 
        0; 
        -0.1567072230e3];

C = [ 5   1   10   2  ];
  
D = [ 0 ];

%% Symmetric Root Locus

rho = 0.1;

A_lqr = [A zeros(size(A)); -C'*C -A'];
B_lqr = [B; -C'*D];
C_lqr = [D'*C B'];
D_lqr = [D'*D];

SS_lqr = ss(A_lqr, B_lqr, C_lqr, D_lqr);
rlocus(1 + SS_lqr/rho);

 
%% LQR Gain 

Q = (C'*C);
K = lqr(A, B, Q, rho);

