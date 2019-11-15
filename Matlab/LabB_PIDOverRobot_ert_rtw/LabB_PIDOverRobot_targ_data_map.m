  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (LabB_PIDOverRobot_P)
    ;%
      section.nData     = 25;
      section.data(25)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_P.fGyroBias
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_P.fWheelRadius
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabB_PIDOverRobot_P.PIDController_D
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabB_PIDOverRobot_P.PIDController_I
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabB_PIDOverRobot_P.PIDController_InitialConditionF
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% LabB_PIDOverRobot_P.PIDController_InitialConditio_n
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% LabB_PIDOverRobot_P.PIDController_Kb
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% LabB_PIDOverRobot_P.PIDController_LowerSaturationLi
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% LabB_PIDOverRobot_P.PIDController_N
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% LabB_PIDOverRobot_P.PIDController_P
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% LabB_PIDOverRobot_P.PIDController_UpperSaturationLi
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% LabB_PIDOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% LabB_PIDOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% LabB_PIDOverRobot_P.Constant_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% LabB_PIDOverRobot_P.Constant_Value_k
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% LabB_PIDOverRobot_P.converttoradians_Gain
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% LabB_PIDOverRobot_P.DiscreteTimeIntegratorconvertfr
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% LabB_PIDOverRobot_P.DiscreteTimeIntegratorconvert_o
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% LabB_PIDOverRobot_P.Integrator_gainval
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% LabB_PIDOverRobot_P.Filter_gainval
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% LabB_PIDOverRobot_P.converttoradianssec_Gain
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lowe
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% LabB_PIDOverRobot_P.conversiontodutycycleconverttou
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lo_h
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% LabB_PIDOverRobot_P.conversiontodutycycleconvertt_i
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
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
    ;% Auto data (LabB_PIDOverRobot_B)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_B.converttometers
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabB_PIDOverRobot_B.Saturation
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
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
    nTotSects     = 7;
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
    ;% Auto data (LabB_PIDOverRobot_DWork)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_DWork.obj_a
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.gobj_0
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_1
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_2
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_3
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_0_p
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_1_a
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_2_d
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
	  ;% LabB_PIDOverRobot_DWork.gobj_3_n
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.obj_l
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.obj_ls
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.obj_n
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_DWork.obj_i
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.x_wtheta_bu_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% LabB_PIDOverRobot_DWork.DiscreteTimeIntegratorconvertfr
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% LabB_PIDOverRobot_DWork.Integrator_DSTATE
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% LabB_PIDOverRobot_DWork.Filter_DSTATE
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
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


  targMap.checksum0 = 3470046587;
  targMap.checksum1 = 952185190;
  targMap.checksum2 = 1172757615;
  targMap.checksum3 = 3260749543;

