close all;
clear all;
clc;

%LabB_Solutions

% % Do not modify these variables
iNumberOfEncoderSteps	= 720;
fGyroConversionFactor	= -1/131;
fWheelRadius			= 0.0216; % [m]
load('GyroBias.mat');
% 
% 
% 
% % select the sampling time
fSamplingPeriod = 0.01;
 
Ld = [ 0.0530    0.0014 ;
       0.0076    0.0109 ;
       0.0159    0.0837 ;
       0.0362    0.4802 ];
% 
Md1 = [ 0.9454   -0.0845   -0.0013 ;
       -0.1028    0.0881    0.0197 ;
        0.3638    3.5157    0.8822 ];
% 
Md2 = [-0.0255 ;
        0.0445 ;
       -0.2697 ];
% 
Md3 = [ -62.3405 ;
          2.9244 ;
       -218.6869 ];
% 
Md4 = [ 0.0591 ;
        0.1008 ;
        0.0029 ];
% 
Md5 = [  62.3405 ;
         -2.9244 ;
        218.6869 ];
% 
Md6 = [ 1 ;
        0 ;
        0 ;
        0 ];
% 
Md7 = [ 0     0     0 ;
        0     1     0 ;
        1     0     0 ;
        0     0     1 ];
% 
Ad = [ 1.0000    0.0019   -0.0000    0.0002 ;
            0    0.0825   -0.0019    0.0192 ;
            0    0.0346    1.0019    0.0093 ;
            0    3.9338    0.3575    0.9193 ];
% 
Bd = [ 0.0004 ;
       0.0434 ;
      -0.0016 ;
      -0.1861 ];
% 
Cd = [ 1     0     0     0 ;
       0     0     1     0 ];
% 
Dd = [ 0 ;
       0 ];
% 
kP =  -47.0274;
kI = -263.4728;
kD =   -0.0554;

Kd = [ -52.1469  -58.5285  -83.9040  -13.7533 ];
