clear all;
close all;
clc;

% DO NOT MODIFY THIS!
iNumberOfEncoderSteps	= 720;
fGyroConversionFactor	= -1/131;
fWheelRadius			= 0.0216; % [m]
load('GyroBias.mat');

% if you want, modify this
fSamplingPeriod	= 0.01; % note: 0.005 is the fastest sampling time with the default mpu5060 library settings

% load the PID values
% kP = -47.02301440;
% kI = -263.5408670;
% kD = -0.5538361401e-1;

% kP = -80;
% kI = -300;
% kD = -0.06;

% kP = -150;
% kI = -500;
% kD = -0.1;

% kP = -200;
% kI = -500;
% kD = -0.1;

kP = -200;
kI = -300;
kD = -0.055;
