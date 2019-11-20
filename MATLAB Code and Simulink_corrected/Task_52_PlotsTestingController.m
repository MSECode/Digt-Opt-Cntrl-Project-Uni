clc;
close all;

%% Plots

% Input
u_times = u_out.time(:,1);
u_values = u_out.signals.values(:,1);
figure(1)
plot( u_times, u_values, 'Color', '#0072BD');
grid on
title('u'); xlabel('time [sec]'); ylabel('Volt [V]');
xlim([0 u_times(end)])
ylim([-10 10])

% Angle
theta_values = zeros(length(theta_b_out.signals.values),1);
theta_times = theta_b_out.time(:,1);
for i = 1:length(theta_b_out.signals.values)
    theta_values(i,1) = theta_values(i,1) + theta_b_out.signals.values(:,:,i);
end

figure(2)
plot( theta_times, theta_values, 'Color', '#0072BD');
grid on
title('\theta_b'); xlabel('time [sec]'); ylabel('degress [deg]');
xlim([0 theta_times(end)])

% Position
wheel_values = zeros(length(x_w_out.signals.values),1)
wheel_times = x_w_out.time(:,1);
for i = 1:length(x_w_out.signals.values)
    wheel_values(i,1) = wheel_values(i,1) + x_w_out.signals.values(:,:,i);
end
figure(3)
plot( wheel_times, wheel_values, 'Color', '#0072BD');
grid on
title('x_w'); xlabel('time (sec)'); ylabel('meters [m]');
xlim([0 wheel_times(end)])
