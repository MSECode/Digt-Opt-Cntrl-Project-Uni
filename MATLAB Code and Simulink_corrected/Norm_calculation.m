clc;
close all;
clear all;

%% Loading of the files
FileName   = '50_H.mat';
FolderName = 'C:\Users\jlosi\OneDrive\Documenti\GitHub\DigitalOptimal-Project\MATLAB Code and Simulink_corrected\experiments_every_20';
File       = fullfile(FolderName, FileName);
load(File);   % not: load('File')

