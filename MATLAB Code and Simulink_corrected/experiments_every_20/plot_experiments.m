% theta_b_out; voltage_out; x_w_out
data = [ ...
    load('50_H.mat'); ...
    load('70_H.mat'); ...
    load('90_H.mat'); ...
    load('110_H.mat'); ...
    load('130_H.mat'); ...
    load('150_H.mat'); ...
    load('170_H.mat'); ...
    load('200_H.mat')
    ];

freqs  = [50:20:170, 200];

L_w_x = [];
L_theta_b = [];

for i = 1 : 8
    length = size(data(i).theta_b_out.signals.values,3);
    
    L_w_x = [L_w_x; norm(reshape(data(i).x_w_out.signals.values,1,length), 2)];
    L_theta_b = [L_theta_b; norm(reshape(data(i).theta_b_out.signals.values,1,length), 2)];
end

figure();
plot(freqs, L_w_x); hold on
plot(freqs, L_theta_b);
legend('x', 'theta');
xlabel('Frequency(Hz)');
ylabel('L2-norms')
title('L2-norms')