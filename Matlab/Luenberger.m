%% Luenberger Observer MATLAB implementation
%
% ref. p 27, LabBook
%

clc
clear 

syms a22 a23 a24 a42 a43 a44 b21 b31 ... 
     xw xw_dot thb thb_dot 
  
x = [ xw; xw_dot; thb; thb_dot ];
y_acc = thb;
y_nacc = xw;
y = [y_acc ; y_nacc]; 

A = [ 0   1   0   0 ;
      0  a22 a23 a24;
      0   0   0   1 ;
      0  a42 a43 a44 ];
  
B = [ 0; b21; 0; b31 ]; % B without disturbance

C = [ 1   0   0   0  ;  % extended C
      0   0   1   0  ];

C_acc  = [ 0   0   1   0  ]; % accurate C

C_nacc = [ 1   0   0   0  ]; % non-accurate C
  
T_inv = [ 0   0   1   0 ; % accurate part of C
          0   1   0   0 ; % V ...
          1   0   0   0 ;
          0   0   0   1  ];
T = T_inv^(-1);
  
  
A_t  = T^(-1)*A*T; 
B_t  = T^(-1)*B; 
C_tacc  = C_acc*T;
C_tnacc = C_nacc*T;

z = T^(-1)*x;
chi = z(2:4);

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

% data 
data = solve([a22 == -0.7737853734e3; a23 == -0.6573516819e1;
              a24 == 0.1624949284e2;  a42 ==  0.3313238430e4;
              a43 == 0.6307193805e2;  a44 == -0.6957800702e2; 
              b21 == 0.3659795684e2;  b31 == -0.1567072230e3], a22, a23, a24, a42, a43, a44, b21, b31);

% Poles
s1 = tf('s');
TF_closed = (0.7368846007e4 * s1 + 0.4129875744e5 + 0.8679012356e1 * s1 ^ 2) / ...
            (s1 ^ 3 + s1 ^ 2 * 0.852042392947857479e3 + s1 * 0.730577406500885081e4 + 0.142742428567446332e5);
poles = pole(TF_closed);
afPoles = [poles; -2]; 

% Full-order Luenberger

L_full = ( place( subs(A, data)', C', afPoles ) )'; %what other pole should we introduce??

% Reduced-order Luenberger

AA = subs(Axx, data);
CC = [Ayx; Cx];

L = ( place(AA', CC', afpoles ) )'; %what other pole should we introduce??

L_acc  = L(1:4,1);
L_nacc = L(1:4,2); 

M1 = Axx - L_acc*Ayx - L_nacc*Cx;
M2 = Bx - L_acc*By;
M3 = Axy - L_acc*Ayy - L_nacc*Cy;
M4 = L_nacc;
M5 = L_acc;
M6 = T(1:4,1);
M7 = T(1:4,2:4);



