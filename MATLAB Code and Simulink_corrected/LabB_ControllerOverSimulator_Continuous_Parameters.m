close all;
clear all;
clc;


K = [ -59.7800  -63.0593  -90.6142  -14.8524 ];
%% Plots

figure(1)
plot( u.time, u.signals.values, '-m', 'Color', '#0072BD');
grid on
title('v_m'); xlabel('Times [sec]'); ylabel('Voltage [Volt]');

figure(2)
plot( x.time, x.signals.values(:,3), 'Color', '#0072BD' );
grid on
title('\theta_b'); xlabel('Times [sec]'); ylabel('degress [Deg]');

