%% Plots
clc;
close all;

% Wheels position plot
time_wheel = x_w_meas.time;
values_wheel = zeros(length( x_w_meas.signals.values),1);
for i = 1:length( x_w_meas.signals.values)
    values_wheel(i,1) = values_wheel(i,1) + x_w_meas.signals.values(:,:,i);
end

figure(1)
plot(time_wheel, values_wheel, 'Color', '#0072BD');
grid on
title('x_w'); xlabel('times [sec]'); ylabel('meters [m]');
xlim([0 time_wheel(end)]);

% Angle plot
time_angle = theta_b_meas.time;
values_angle = zeros(length( theta_b_meas.signals.values),1);
for i = 1:length( theta_b_meas.signals.values)
    values_angle(i,1) = values_angle(i,1) + theta_b_meas.signals.values(:,:,i);
end

figure(2)
plot(time_angle, values_angle, 'Color', '#0072BD');
grid on
title('\theta_b'); xlabel('times [sec]'); ylabel('degrees [deg]');
xlim([0 time_angle(end)]);

% Input plot
time_input = u.time;
values_input = zeros(length( u.signals.values),1);
for i = 1:length( theta_b_meas.signals.values)
    values_input(i,1) = values_input(i,1) + u.signals.values(:,:,i);
end

figure(3)
plot(time_input, values_input, 'Color', '#0072BD');
grid on
title('u'); xlabel('times [sec]'); ylabel('voltage [V]');
xlim([0 time_input(end)]);