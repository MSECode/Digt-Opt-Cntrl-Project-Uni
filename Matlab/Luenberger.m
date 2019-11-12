% Luenberger Observer MATLAB implementation
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
  
T = [ 0   0   1   0 ; % accurate part of C
      0   1   0   0 ; % V ...
      1   0   0   0 ;
      0   0   0   1  ];
  
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

