frequency = 190;
t = 0:1/frequency:size(x, 1);

size(t, 1);

figure();
subplot(4, 1, 1);
plot(reference(1:5000));
subplot(4, 1, 2);
plot(x(1:5000));
subplot(4, 1, 3);
plot(theta(1:5000));
subplot(4, 1, 4);
plot(u(1:5000));