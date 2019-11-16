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

C = [ 1   0   0   0  ;  % extended C
      0   0   1   0  ];
  
D = [ 0 ;
      0 ];

%% Discretization of the system

% We discretize the system and then extact the matrice Ad, Bd, Cd and Dd
% from the system

fSamplingPeriod = 0.01;

cont_sys = ss(A, B, C, D);
discr_sys = c2d(cont_sys, fSamplingPeriod, 'zoh');

[Ad, Bd, Cd, Dd] = ssdata(discr_sys);

%% Gain design

% As we did in the continuous-time case, we write down the procedure for
% the Luenberger matrices


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

% Following the hint in the LabBook, we map the poles to the discrete
% domain

s1 = tf('s');
TF_closed = (0.7368846007e4 * s1 + 0.4129875744e5 + 0.8679012356e1 * s1 ^ 2) / ...
            (s1 ^ 3 + s1 ^ 2 * 0.852042392947857479e3 + s1 * 0.730577406500885081e4 + 0.142742428567446332e5);

h = fSamplingPeriod;

poles = exp(h*pole(TF_closed));
afPoles = [poles; exp(h*(-5))]; 

%% Luenberger DESIGN

% Full-order Luenberger

Ld = ( place( Ad', Cd', afPoles ) )'; %what other pole should we introduce??

% Reduced-order Luenberger

AA = Axx;
CC = [Ayx; Cx];

L_red = ( place( AA', CC', poles ) )'; 

L_acc  = L_red(1:3,1);
L_nacc = L_red(1:3,2); 

Md1 = Axx - L_acc*Ayx - L_nacc*Cx;
Md2 = Bx - L_acc*By;
Md3 = Axy - L_acc*Ayy - L_nacc*Cy;
Md4 = L_nacc;
Md5 = L_acc;
Md6 = T(1:4,1);
Md7 = T(1:4,2:4);

%% PID values and Kd

p_1 = -843.40;
p_2 = -5.64;
p_3 = 5.68;
pp_3 = -3;
gain_G_s = -156.71;

kP = (p_1*pp_3 + p_2*pp_3 - p_1*p_3- p_2*p_3)/gain_G_s;
kI = (p_1*p_2*p_3 - p_1*p_2*pp_3)/gain_G_s;
kD = (p_3 - pp_3)/gain_G_s;

Kd = place(Ad, Bd, afPoles);
