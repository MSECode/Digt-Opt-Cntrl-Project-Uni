%% Equations of Motion: SS representation
clear all; close all;
LoadPhysicalParameters

A = [0 1 0 0; -1 -0.2e1 * (K__e * K__t + b__f * R__m / 0.2e1) * (l__b * (l__b + l__w) * m__b + I__b) / ((I__b * l__w ^ 2 + l__b ^ 2 * (l__w ^ 2 * m__w + I__w)) * m__b + I__b * (l__w ^ 2 * m__w + I__w)) / R__m -m__b ^ 2 * l__b ^ 2 * l__w ^ 2 * g / (((m__w + m__b) * l__w ^ 2 + I__w) * I__b + l__b ^ 2 * m__b * (l__w ^ 2 * m__w + I__w)) 0.2e1 * (K__e * K__t + b__f * R__m / 0.2e1) * (l__b ^ 2 * m__b + m__b * l__b * l__w + I__b) * l__w / (((l__b ^ 2 * m__w + I__b) * m__b + I__b * m__w) * l__w ^ 2 + I__w * (l__b ^ 2 * m__b + I__b)) / R__m; 0 0 0 1; 0 0.2e1 * (K__e * K__t + b__f * R__m / 0.2e1) * ((m__w + m__b) * l__w ^ 2 + m__b * l__b * l__w + I__w) / (((l__b ^ 2 * m__w + I__b) * m__b + I__b * m__w) * l__w ^ 2 + I__w * (l__b ^ 2 * m__b + I__b)) / R__m / l__w ((m__w + m__b) * l__w ^ 2 + I__w) * g * m__b * l__b / (((l__b ^ 2 * m__w + I__b) * m__b + I__b * m__w) * l__w ^ 2 + I__w * (l__b ^ 2 * m__b + I__b)) -0.2e1 * (K__e * K__t + b__f * R__m / 0.2e1) * ((m__w + m__b) * l__w ^ 2 + m__b * l__b * l__w + I__w) / (((l__b ^ 2 * m__w + I__b) * m__b + I__b * m__w) * l__w ^ 2 + I__w * (l__b ^ 2 * m__b + I__b)) / R__m;];
B = [0 ; 2 * l__w * K__t * (l__b ^ 2 * m__b + m__b * l__b * l__w + I__b) / (((m__w + m__b) * l__w ^ 2 + I__w) * I__b + l__b ^ 2 * m__b * (l__w ^ 2 * m__w + I__w)) / R__m; 0; -2 * ((m__w + m__b) * l__w ^ 2 + m__b * l__b * l__w + I__w) * K__t / (((l__b ^ 2 * m__w + I__b) * m__b + I__b * m__w) * l__w ^ 2 + I__w * (l__b ^ 2 * m__b + I__b)) / R__m];
C = [0 0 1 0];
D =  0;

sys = ss(A,B,C,D);
s1 = tf('s');
TF = C*inv(s1*eye(4) - A)*B + D;
poles1 = pole(TF);
[num,den] = tfdata(sys,'v');
zeros1 = roots(num);
polez = roots(den);

trf_an = 0.2e1 * K__t * (l__w * (l__b + l__w) * m__b + l__w ^ 2 * m__w + I__w) * s1 / (-(((l__b ^ 2 * m__w + I__b) * l__w ^ 2 + I__w * l__b ^ 2) * m__b + I__b * (l__w ^ 2 * m__w + I__w)) * R__m * s1 ^ 3 - 0.2e1 * ((l__b + l__w) ^ 2 * m__b + l__w ^ 2 * m__w + I__b + I__w) * (K__e * K__t + b__f * R__m / 0.2e1) * s1 ^ 2 + g * m__b * R__m * l__b * (l__w ^ 2 * m__b + l__w ^ 2 * m__w + I__w) * s1 + 0.2e1 * g * l__b * m__b * (K__e * K__t + b__f * R__m / 0.2e1));
poles2 = pole(trf_an);

trf = 0.1240873320e-2 * s1 / (-0.7918418156e-5 * s1 ^ 3 - 0.6678103904e-2 * s1 ^ 2 + 0.4994299791e-3 * s1 + 0.2139914068e0);
poles3 = pole(trf);
%pzmap(trf);

%% PID Controller Design
kP = -539;
kI =  -13000;
kD = -0.868;

%[controller1, info] = pidtune(trf, 'PID');
controller1 = pid(kP, kI, kD);
cl_loop_sys = feedback(controller1*trf, 1);
pzmap(cl_loop_sys);
step(cl_loop_sys);
