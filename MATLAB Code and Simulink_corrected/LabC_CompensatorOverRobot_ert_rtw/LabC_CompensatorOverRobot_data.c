/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot_data.c
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 1.720
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Dec  4 23:57:09 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabC_CompensatorOverRobot.h"
#include "LabC_CompensatorOverRobot_private.h"

/* Block parameters (default storage) */
Parameters_LabC_CompensatorOver LabC_CompensatorOverRobot_P = {
  /* Variable: Ad
   * Referenced by: '<S7>/Gain7'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.00273558963F, 0.0823747143F, 0.0740778819F,
    3.95354915F, -2.72615525E-5F, 0.00484467857F, 1.0071106F, 0.679479301F,
    0.000361922F, 0.0192428697F, 0.0184936672F, 0.924086154F },

  /* Variable: Bd
   * Referenced by: '<S7>/Gain8'
   */
  { 0.000816559943F, 0.0434011966F, -0.00350368372F, -0.186992183F },

  /* Variable: Cd
   * Referenced by: '<S7>/Gain10'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F },

  /* Variable: Kd
   * Referenced by: '<S3>/controller'
   */
  { -9.73567581F, -36.7715302F, -52.26437F, -8.64660454F },

  /* Variable: Ld
   * Referenced by: '<S7>/Gain9'
   */
  { 0.364883661F, 0.0193724837F, 0.0256276224F, 0.412436724F, 0.00705234054F,
    0.139211714F, 0.706736863F, 6.86189175F },

  /* Variable: Md1
   * Referenced by: '<S7>/Gain'
   */
  { 0.627147138F, -0.0847861618F, 0.213548064F, -0.0576845556F, 0.0442734025F,
    1.50553226F, 0.00106132822F, 0.0142020173F, 0.600210369F },

  /* Variable: Md2
   * Referenced by: '<S7>/Gain1'
   */
  { -0.0428341217F, 0.0320281424F, -0.917713106F },

  /* Variable: Md3
   * Referenced by: '<S7>/Gain2'
   */
  { -48.1660118F, -13.9280081F, -894.877258F },

  /* Variable: Md4
   * Referenced by: '<S7>/Gain3'
   */
  { 0.381276578F, 0.0900105387F, 0.490326941F },

  /* Variable: Md5
   * Referenced by: '<S7>/Gain4'
   */
  { 48.1660118F, 13.9280081F, 894.877258F },

  /* Variable: Md6
   * Referenced by: '<S7>/Gain5'
   */
  { 1.0F, 0.0F, 0.0F, -0.0F },

  /* Variable: Md7
   * Referenced by: '<S7>/Gain6'
   */
  { 0.0F, 0.0F, 1.0F, -0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.0F, -0.0F, 0.0F, 1.0F },

  /* Variable: Nxd
   * Referenced by: '<S3>/Gain3'
   */
  0.0F,

  /* Variable: fGyroBias
   * Referenced by: '<S4>/gyro bias'
   */
  -315.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S4>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S8>/UD'
   */
  0.0F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_g
   * Referenced by: '<S9>/UD'
   */
  0.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S41>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
   * Referenced by: '<S42>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S43>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S44>/Constant'
   */
  0.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S3>/Gain4'
   */
  9.73567581F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S4>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S8>/TSamp'
   */
  50.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.02F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_o
   * Referenced by: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt_j
   * Referenced by: '<S9>/TSamp'
   */
  50.0F,

  /* Computed Parameter: Internal_1_1_A
   * Referenced by: '<S10>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C
   * Referenced by: '<S10>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition
   * Referenced by: '<S10>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition
   * Referenced by: '<S10>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition
   * Referenced by: '<S10>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_1_4_InitialCondition
   * Referenced by: '<S10>/Internal_1_4'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition
   * Referenced by: '<S10>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A
   * Referenced by: '<S10>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C
   * Referenced by: '<S10>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition
   * Referenced by: '<S10>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition
   * Referenced by: '<S10>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_4_InitialCondition
   * Referenced by: '<S10>/Internal_2_4'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition
   * Referenced by: '<S10>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition
   * Referenced by: '<S10>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A
   * Referenced by: '<S10>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C
   * Referenced by: '<S10>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition
   * Referenced by: '<S10>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_4_InitialCondition
   * Referenced by: '<S10>/Internal_3_4'
   */
  0.0F,

  /* Computed Parameter: Internal_4_1_InitialCondition
   * Referenced by: '<S10>/Internal_4_1'
   */
  0.0F,

  /* Computed Parameter: Internal_4_2_InitialCondition
   * Referenced by: '<S10>/Internal_4_2'
   */
  0.0F,

  /* Computed Parameter: Internal_4_3_InitialCondition
   * Referenced by: '<S10>/Internal_4_3'
   */
  0.0F,

  /* Computed Parameter: Internal_4_4_A
   * Referenced by: '<S10>/Internal_4_4'
   */
  -0.0F,

  /* Computed Parameter: Internal_4_4_C
   * Referenced by: '<S10>/Internal_4_4'
   */
  1.0F,

  /* Computed Parameter: Internal_4_4_InitialCondition
   * Referenced by: '<S10>/Internal_4_4'
   */
  0.0F,

  /* Computed Parameter: Internal_1_1_A_e
   * Referenced by: '<S11>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C_i
   * Referenced by: '<S11>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition_j
   * Referenced by: '<S11>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition_o
   * Referenced by: '<S11>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition_o
   * Referenced by: '<S11>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition_h
   * Referenced by: '<S11>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A_k
   * Referenced by: '<S11>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C_n
   * Referenced by: '<S11>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition_f
   * Referenced by: '<S11>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition_d
   * Referenced by: '<S11>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition_a
   * Referenced by: '<S11>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition_i
   * Referenced by: '<S11>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A_g
   * Referenced by: '<S11>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C_i
   * Referenced by: '<S11>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition_e
   * Referenced by: '<S11>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S4>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S41>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S41>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lo_g
   * Referenced by: '<S42>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconvertt_d
   * Referenced by: '<S42>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<Root>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch_CurrentSetting_e
   * Referenced by: '<S7>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<Root>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting_g
   * Referenced by: '<S7>/Manual Switch1'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
