clc;
close all;
clear all;


%% Task 6.3

Sampl_frequency = 20; % Hertz
fSamplingPeriod = round(1/Sampl_frequency,3); 

%% Continuous SS system

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


%% Discrete SS system

ss_cont  = ss(A, B, C, D);
ss_discr = c2d(ss_cont, fSamplingPeriod, 'zoh');

[Ad, Bd, Cd, Dd] = ssdata(ss_discr);


%% LQR Gain - discrete time

rho = 0.1;

Qd = (Cd'*Cd);
Kd = dlqr(Ad, Bd, Qd, rho);


