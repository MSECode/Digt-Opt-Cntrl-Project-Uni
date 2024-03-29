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
plot( squeeze(tAngleFromGyro.time), squeeze(tAngleFromGyro.signals.values), 'Color', '#0072BD' );
hold on
plot(d_time, d_vals, 'Color','#D95319')
plot(d_time, avg_gyro, 'LineStyle', '--', 'Color', '#EDB120')
grid on
axis([0, max(tAngleFromGyro.time), -150, 250]);
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
plot( squeeze(tAngleFromAccelerometer.time), squeeze(tAngleFromAccelerometer.signals.values), 'Color', '#0072BD');
hold on
plot(acc_times, avg_acc, 'LineStyle', '--', 'Color', '#EDB120')
axis([0, max(tAngleFromAccelerometer.time), -100, 100]);
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
plot( squeeze(tEncoder.time), squeeze(tEncoder.signals.values), 'Color', '#0072BD');
hold on
plot(enc_times, avg_enc, 'LineStyle', '--', 'Color', '#EDB120')
axis([0, max(tEncoder.time), -1000, 800]);
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
plot( squeeze(tMotor.time), squeeze(tMotor.signals.values), 'Color', '#0072BD' );
hold on
plot(mot_times, avg_mot, 'LineStyle', '--', 'Color', '#EDB120')
axis([0, max(tMotor.time), -4, 4]);
legend('raw signal', 'average signal');
title('measurement from the motors'); xlabel('time (sec)'); ylabel('degrees');
set(gcf, 'Units', 'centimeters');
set(gcf, 'Position', [1 1 11 9]);
set(gcf, 'PaperPositionMode', 'auto');
print('-depsc2', '-r300', 'raw_angle_from_motors.eps');

%% Task 5.3 - Empirical proper order system
% Compute the gains matrix K using the new stable poles
% that we decide almost arbitrarily 
A_in = [0                  1                0              0;
        0                  -0.7737853734e3 -0.6573516819e1 0.1624949284e2;
        0                  0                0              1;
        0                  0.3313238430e4   0.6307193805e2 -0.6957800702e2;];
B_in = [0; 
        0.3659795684e2; 
        0; 
        -0.1567072230e3];

% Gain matrix calculated with acker function 
% that can be used only with a SISO system
p_4_acker = [-843.40 -5.64 -3 -5];
K_ack = acker(A_in, B_in, p_4_acker);



