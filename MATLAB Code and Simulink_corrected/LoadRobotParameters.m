% Do not modify these variables
iNumberOfEncoderSteps	= 720;
fGyroConversionFactor	= 250/32768;
fWheelRadius			= 0.0216; % [m]

%Kd = [-2.4116,  -25.3312, -36.7153,   -5.9585];

%Ad =  [1.0000 ,   0.0280 ,   0.0219  ,  0.0063;
%         0 ,   0.1677  ,  0.2126 ,   0.0394;
%         0   , 1.3404 ,   2.1963 ,   0.3156;
%         0   , 8.5770  , 11.0961  ,  2.0162];

load('GyroBias.mat');


