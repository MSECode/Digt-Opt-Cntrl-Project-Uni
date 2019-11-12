clc;
close all;
%% Gyroscope plot
% Computing the first derivative of the gyroscope's values
gyro_times = squeeze(tAngleFromGyro.time);
gyro_vals = squeeze(tAngleFromGyro.signals.values);
d_vals = diff(gyro_vals)./diff(gyro_times);
d_time = (gyro_times(1:end-1) + gyro_times(2:end))/2;

% Evaluate the average of the first derivative
avg_gyro = mean(d_vals)*ones(length(d_vals),1);
figure(1)
plot( squeeze(tAngleFromGyro.time), squeeze(tAngleFromGyro.signals.values), '-y' );
hold on
plot(d_time, d_vals, '-m')
plot(d_time, avg_gyro, '--c')
grid on
axis([0, max(tAngleFromGyro.time), -120, 200]);
legend('raw signal', 'first derivative signal', 'average of first derivative');
title('measurement from the gyroscope'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_gyro.eps');

%% Accelerometer plot
% Average of the accelerometers values
acc_values = squeeze(tAngleFromAccelerometer.signals.values);
avg_acc = mean(acc_values)*ones(length(acc_values),1);
acc_times = squeeze(tAngleFromAccelerometer.time);

figure(2)
plot( squeeze(tAngleFromAccelerometer.time), squeeze(tAngleFromAccelerometer.signals.values), '-m' );
hold on
plot(acc_times, avg_acc, '--c')
axis([0, max(tAngleFromAccelerometer.time), -100, 200]);
legend('raw signal', 'average signal');
title('measurement from the accelerometer'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_accelerometer.eps');

%% Encoder plot
% Average of the accelerometers values
enc_values = squeeze(tEncoder.signals.values);
avg_enc = mean(enc_values)*ones(length(enc_values),1);
enc_times = squeeze(tEncoder.time);

figure(3)
plot( squeeze(tEncoder.time), squeeze(tEncoder.signals.values), '-m' );
hold on
plot(enc_times, avg_enc, '--c')
axis([0, max(tEncoder.time), -600, 1000]);
legend('raw signal', 'average signal');
title('measurement from the encoder'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_encoder.eps');

%% Motor plot
% Average of the accelerometers values
mot_values = squeeze(tMotor.signals.values);
avg_mot = mean(mot_values)*ones(length(mot_values),1);
mot_times = squeeze(tMotor.time);

figure(4)
plot( squeeze(tMotor.time), squeeze(tMotor.signals.values), '-m' );
hold on
plot(mot_times, avg_mot, '--c')
axis([0, max(tMotor.time), -4, 4]);
legend('raw signal', 'average signal');
title('measurement from the motors'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_motors.eps');