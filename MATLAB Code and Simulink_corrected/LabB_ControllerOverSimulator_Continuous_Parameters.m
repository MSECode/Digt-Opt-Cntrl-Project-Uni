close all;
clear all;
clc;

K = [ -55.8226  -60.8787  -87.2338  -14.3051];
%% Plots

figure(1)
plot( u.time, u.signals.values, '-m', 'Color', '#0072BD');
grid on
title('v_m'); xlabel('Times [sec]'); ylabel('Voltage [Volt]');

figure(2)
plot( x.time, x.signals.values(:,3), 'Color', '#0072BD' );
grid on
title('\theta_b'); xlabel('Times [sec]'); ylabel('degress [Deg]');

