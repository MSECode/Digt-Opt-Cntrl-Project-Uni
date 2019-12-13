  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (LabC_CompensatorOverRobot_P)
    ;%
      section.nData     = 71;
      section.data(71)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_P.Ad
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_P.Bd
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 16;
	
	  ;% LabC_CompensatorOverRobot_P.Cd
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 20;
	
	  ;% LabC_CompensatorOverRobot_P.Kd
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 28;
	
	  ;% LabC_CompensatorOverRobot_P.Ld
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 32;
	
	  ;% LabC_CompensatorOverRobot_P.Md1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 40;
	
	  ;% LabC_CompensatorOverRobot_P.Md2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 49;
	
	  ;% LabC_CompensatorOverRobot_P.Md3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 52;
	
	  ;% LabC_CompensatorOverRobot_P.Md4
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 55;
	
	  ;% LabC_CompensatorOverRobot_P.Md5
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 58;
	
	  ;% LabC_CompensatorOverRobot_P.Md6
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 61;
	
	  ;% LabC_CompensatorOverRobot_P.Md7
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 65;
	
	  ;% LabC_CompensatorOverRobot_P.Nxd
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 77;
	
	  ;% LabC_CompensatorOverRobot_P.fGyroBias
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 78;
	
	  ;% LabC_CompensatorOverRobot_P.fWheelRadius
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 79;
	
	  ;% LabC_CompensatorOverRobot_P.DiscreteDerivative_ICPrevScaled
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 80;
	
	  ;% LabC_CompensatorOverRobot_P.DiscreteDerivative_ICPrevScal_g
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 81;
	
	  ;% LabC_CompensatorOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 82;
	
	  ;% LabC_CompensatorOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 83;
	
	  ;% LabC_CompensatorOverRobot_P.Constant_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 84;
	
	  ;% LabC_CompensatorOverRobot_P.Constant_Value_n
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 85;
	
	  ;% LabC_CompensatorOverRobot_P.Gain4_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 86;
	
	  ;% LabC_CompensatorOverRobot_P.converttoradians_Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 87;
	
	  ;% LabC_CompensatorOverRobot_P.TSamp_WtEt
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 88;
	
	  ;% LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvertfr
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 89;
	
	  ;% LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvert_o
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 90;
	
	  ;% LabC_CompensatorOverRobot_P.TSamp_WtEt_j
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 91;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_A
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 92;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_C
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 93;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_InitialCondition
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 94;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_2_InitialCondition
	  section.data(31).logicalSrcIdx = 35;
	  section.data(31).dtTransOffset = 95;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_3_InitialCondition
	  section.data(32).logicalSrcIdx = 40;
	  section.data(32).dtTransOffset = 96;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_4_InitialCondition
	  section.data(33).logicalSrcIdx = 45;
	  section.data(33).dtTransOffset = 97;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_1_InitialCondition
	  section.data(34).logicalSrcIdx = 50;
	  section.data(34).dtTransOffset = 98;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_A
	  section.data(35).logicalSrcIdx = 51;
	  section.data(35).dtTransOffset = 99;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_C
	  section.data(36).logicalSrcIdx = 52;
	  section.data(36).dtTransOffset = 100;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_InitialCondition
	  section.data(37).logicalSrcIdx = 54;
	  section.data(37).dtTransOffset = 101;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_3_InitialCondition
	  section.data(38).logicalSrcIdx = 59;
	  section.data(38).dtTransOffset = 102;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_4_InitialCondition
	  section.data(39).logicalSrcIdx = 64;
	  section.data(39).dtTransOffset = 103;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_1_InitialCondition
	  section.data(40).logicalSrcIdx = 69;
	  section.data(40).dtTransOffset = 104;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_2_InitialCondition
	  section.data(41).logicalSrcIdx = 74;
	  section.data(41).dtTransOffset = 105;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_A
	  section.data(42).logicalSrcIdx = 75;
	  section.data(42).dtTransOffset = 106;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_C
	  section.data(43).logicalSrcIdx = 76;
	  section.data(43).dtTransOffset = 107;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_InitialCondition
	  section.data(44).logicalSrcIdx = 78;
	  section.data(44).dtTransOffset = 108;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_4_InitialCondition
	  section.data(45).logicalSrcIdx = 83;
	  section.data(45).dtTransOffset = 109;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_1_InitialCondition
	  section.data(46).logicalSrcIdx = 88;
	  section.data(46).dtTransOffset = 110;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_2_InitialCondition
	  section.data(47).logicalSrcIdx = 93;
	  section.data(47).dtTransOffset = 111;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_3_InitialCondition
	  section.data(48).logicalSrcIdx = 98;
	  section.data(48).dtTransOffset = 112;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_4_A
	  section.data(49).logicalSrcIdx = 99;
	  section.data(49).dtTransOffset = 113;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_4_C
	  section.data(50).logicalSrcIdx = 100;
	  section.data(50).dtTransOffset = 114;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_4_4_InitialCondition
	  section.data(51).logicalSrcIdx = 102;
	  section.data(51).dtTransOffset = 115;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_A_e
	  section.data(52).logicalSrcIdx = 103;
	  section.data(52).dtTransOffset = 116;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_C_i
	  section.data(53).logicalSrcIdx = 104;
	  section.data(53).dtTransOffset = 117;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_1_InitialCondition_j
	  section.data(54).logicalSrcIdx = 106;
	  section.data(54).dtTransOffset = 118;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_2_InitialCondition_o
	  section.data(55).logicalSrcIdx = 111;
	  section.data(55).dtTransOffset = 119;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_1_3_InitialCondition_o
	  section.data(56).logicalSrcIdx = 116;
	  section.data(56).dtTransOffset = 120;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_1_InitialCondition_h
	  section.data(57).logicalSrcIdx = 121;
	  section.data(57).dtTransOffset = 121;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_A_k
	  section.data(58).logicalSrcIdx = 122;
	  section.data(58).dtTransOffset = 122;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_C_n
	  section.data(59).logicalSrcIdx = 123;
	  section.data(59).dtTransOffset = 123;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_2_InitialCondition_f
	  section.data(60).logicalSrcIdx = 125;
	  section.data(60).dtTransOffset = 124;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_2_3_InitialCondition_d
	  section.data(61).logicalSrcIdx = 130;
	  section.data(61).dtTransOffset = 125;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_1_InitialCondition_a
	  section.data(62).logicalSrcIdx = 135;
	  section.data(62).dtTransOffset = 126;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_2_InitialCondition_i
	  section.data(63).logicalSrcIdx = 140;
	  section.data(63).dtTransOffset = 127;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_A_g
	  section.data(64).logicalSrcIdx = 141;
	  section.data(64).dtTransOffset = 128;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_C_i
	  section.data(65).logicalSrcIdx = 142;
	  section.data(65).dtTransOffset = 129;
	
	  ;% LabC_CompensatorOverRobot_P.Internal_3_3_InitialCondition_e
	  section.data(66).logicalSrcIdx = 144;
	  section.data(66).dtTransOffset = 130;
	
	  ;% LabC_CompensatorOverRobot_P.converttoradianssec_Gain
	  section.data(67).logicalSrcIdx = 145;
	  section.data(67).dtTransOffset = 131;
	
	  ;% LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lowe
	  section.data(68).logicalSrcIdx = 146;
	  section.data(68).dtTransOffset = 132;
	
	  ;% LabC_CompensatorOverRobot_P.conversiontodutycycleconverttou
	  section.data(69).logicalSrcIdx = 147;
	  section.data(69).dtTransOffset = 133;
	
	  ;% LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lo_g
	  section.data(70).logicalSrcIdx = 148;
	  section.data(70).dtTransOffset = 134;
	
	  ;% LabC_CompensatorOverRobot_P.conversiontodutycycleconvertt_d
	  section.data(71).logicalSrcIdx = 149;
	  section.data(71).dtTransOffset = 135;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_P.ManualSwitch_CurrentSetting
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_P.ManualSwitch_CurrentSetting_e
	  section.data(2).logicalSrcIdx = 151;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_P.ManualSwitch1_CurrentSetting
	  section.data(3).logicalSrcIdx = 152;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabC_CompensatorOverRobot_P.ManualSwitch1_CurrentSetting_g
	  section.data(4).logicalSrcIdx = 153;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (LabC_CompensatorOverRobot_B)
    ;%
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_B.converttometers
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_B.Sum1
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabC_CompensatorOverRobot_B.Sum3
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabC_CompensatorOverRobot_B.Add2
	  section.data(5).logicalSrcIdx = 11;
	  section.data(5).dtTransOffset = 4;
	
	  ;% LabC_CompensatorOverRobot_B.Product1
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 8;
	
	  ;% LabC_CompensatorOverRobot_B.Add
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 9;
	
	  ;% LabC_CompensatorOverRobot_B.Add3
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 12;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (LabC_CompensatorOverRobot_DWork)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.obj_o
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.gobj_0
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_1
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_2
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_3
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_0_j
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_1_a
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_2_k
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
	  ;% LabC_CompensatorOverRobot_DWork.gobj_3_d
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.obj_g
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.obj_gi
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.obj_c
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.obj_ow
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 13;
      section.data(13)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_PWORK.TimePtr
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_PWORK_c.TimePtr
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_PWORK_a.TimePtr
	  section.data(3).logicalSrcIdx = 16;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabC_CompensatorOverRobot_DWork.Measurements_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 17;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabC_CompensatorOverRobot_DWork.FullObserver_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 18;
	  section.data(5).dtTransOffset = 6;
	
	  ;% LabC_CompensatorOverRobot_DWork.ReducedObserver_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 19;
	  section.data(6).dtTransOffset = 9;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 20;
	  section.data(7).dtTransOffset = 12;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace1_PWORK.LoggedData
	  section.data(8).logicalSrcIdx = 21;
	  section.data(8).dtTransOffset = 13;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace2_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 22;
	  section.data(9).dtTransOffset = 14;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace3_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 23;
	  section.data(10).dtTransOffset = 15;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace4_PWORK.LoggedData
	  section.data(11).logicalSrcIdx = 24;
	  section.data(11).dtTransOffset = 16;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace5_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 25;
	  section.data(12).dtTransOffset = 17;
	
	  ;% LabC_CompensatorOverRobot_DWork.ToWorkspace6_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 26;
	  section.data(13).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.UD_DSTATE
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_DWork.UD_DSTATE_o
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 4;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE
	  section.data(6).logicalSrcIdx = 32;
	  section.data(6).dtTransOffset = 5;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE
	  section.data(7).logicalSrcIdx = 33;
	  section.data(7).dtTransOffset = 6;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n
	  section.data(8).logicalSrcIdx = 34;
	  section.data(8).dtTransOffset = 7;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o
	  section.data(9).logicalSrcIdx = 35;
	  section.data(9).dtTransOffset = 8;
	
	  ;% LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o
	  section.data(10).logicalSrcIdx = 36;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_IWORK.PrevIndex
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_IWORK_l.PrevIndex
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabC_CompensatorOverRobot_DWork.FromWs_IWORK_o.PrevIndex
	  section.data(3).logicalSrcIdx = 39;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3063898337;
  targMap.checksum1 = 1562674587;
  targMap.checksum2 = 4252934174;
  targMap.checksum3 = 795506521;

