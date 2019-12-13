clc;
close all;
clear all;

%% Loading of the files
FileName   = '50_H.mat';
FolderName = 'C:\Temp';
File       = fullfile(FolderName, FileName);
load(File);   % not: load('File')

