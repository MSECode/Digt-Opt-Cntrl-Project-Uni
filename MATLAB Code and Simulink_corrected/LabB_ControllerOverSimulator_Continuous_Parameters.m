close all;
clear all;
clc;


%load('LabC_LQR.m');
% K = [ -55.8226  -60.8787  -87.2338  -14.3051]; %old kappa
% K = [-0.0000  -42.2855  -61.5378   -9.9480];   % kappa with place
K = [-15.8114  -46.4023  -78.7156  -13.2734];  % kappa with lqr

%% Plots

figure(1)
plot( u.time, u.signals.values, '-m', 'Color', '#0072BD');
grid on
title('v_m'); xlabel('Times [sec]'); ylabel('Voltage [Volt]');

figure(2)
plot( x.time, x.signals.values(:,3), 'Color', '#0072BD' );
grid on
title('\theta_b'); xlabel('Times [sec]'); ylabel('degress [Deg]');

