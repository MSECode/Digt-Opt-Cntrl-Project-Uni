/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_ObserverAndControllerOverRobot_data.c
 *
 * Code generated for Simulink model 'LabB_ObserverAndControllerOverRobot'.
 *
 * Model version                  : 1.709
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Nov 19 19:41:45 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_ObserverAndControllerOverRobot.h"
#include "LabB_ObserverAndControllerOverRobot_private.h"

/* Block parameters (default storage) */
Parameters_LabB_ObserverAndCont LabB_ObserverAndControllerOve_P = {
  /* Variable: Ad
   * Referenced by: '<S4>/Gain7'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.00191196182F, 0.0825469866F, 0.034648262F,
    3.93383074F, -4.21218756E-5F, -0.00186998339F, 1.00192726F, 0.357495189F,
    0.000169621067F, 0.0192243923F, 0.00927918404F, 0.919316769F },

  /* Variable: Bd
   * Referenced by: '<S4>/Gain8'
   */
  { 0.000427916966F, 0.00514752558F, -0.00183538697F, -0.022614548F },

  /* Variable: Cd
   * Referenced by: '<S4>/Gain10'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F },

  /* Variable: Kd
   * Referenced by: '<S1>/controller'
   */
  { -77.752861F, -66.3104095F, -94.6049805F, -15.5762424F },

  /* Variable: Ld
   * Referenced by: '<S4>/Gain9'
   */
  { 0.140154108F, 0.00771357398F, 0.0110440468F, 0.065173015F, 0.00540122157F,
    0.0274954513F, 0.238914222F, 1.35310566F },

  /* Variable: Md1
   * Referenced by: '<S4>/Gain'
   */
  { 0.934007049F, -0.105024651F, 0.29296124F, -0.0857679099F, 0.0687649772F,
    2.62519121F, -0.00140362361F, 0.018001711F, 0.803219914F },

  /* Variable: Md2
   * Referenced by: '<S4>/Gain1'
   */
  { -0.0287857801F, 0.00206296868F, -0.31550169F },

  /* Variable: Md3
   * Referenced by: '<S4>/Gain2'
   */
  { -62.9804268F, -7.20830679F, -684.448547F },

  /* Variable: Md4
   * Referenced by: '<S4>/Gain3'
   */
  { 0.0705730394F, 0.103458293F, 0.093364194F },

  /* Variable: Md5
   * Referenced by: '<S4>/Gain4'
   */
  { 62.9804268F, 7.20830679F, 684.448547F },

  /* Variable: Md6
   * Referenced by: '<S4>/Gain5'
   */
  { 1.0F, 0.0F, 0.0F, -0.0F },

  /* Variable: Md7
   * Referenced by: '<S4>/Gain6'
   */
  { 0.0F, 0.0F, 1.0F, -0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.0F, -0.0F, 0.0F, 1.0F },

  /* Variable: fGyroBias
   * Referenced by: '<S2>/gyro bias'
   */
  -283.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S2>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S5>/UD'
   */
  0.0F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_n
   * Referenced by: '<S6>/UD'
   */
  0.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S38>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
   * Referenced by: '<S39>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S40>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_c
   * Referenced by: '<S41>/Constant'
   */
  0.0F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S2>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S5>/TSamp'
   */
  100.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.01F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_e
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt_m
   * Referenced by: '<S6>/TSamp'
   */
  100.0F,

  /* Computed Parameter: Internal_1_1_A
   * Referenced by: '<S7>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C
   * Referenced by: '<S7>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition
   * Referenced by: '<S7>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition
   * Referenced by: '<S7>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition
   * Referenced by: '<S7>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_1_4_InitialCondition
   * Referenced by: '<S7>/Internal_1_4'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition
   * Referenced by: '<S7>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A
   * Referenced by: '<S7>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C
   * Referenced by: '<S7>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition
   * Referenced by: '<S7>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition
   * Referenced by: '<S7>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_4_InitialCondition
   * Referenced by: '<S7>/Internal_2_4'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition
   * Referenced by: '<S7>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition
   * Referenced by: '<S7>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A
   * Referenced by: '<S7>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C
   * Referenced by: '<S7>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition
   * Referenced by: '<S7>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_4_InitialCondition
   * Referenced by: '<S7>/Internal_3_4'
   */
  0.0F,

  /* Computed Parameter: Internal_4_1_InitialCondition
   * Referenced by: '<S7>/Internal_4_1'
   */
  0.0F,

  /* Computed Parameter: Internal_4_2_InitialCondition
   * Referenced by: '<S7>/Internal_4_2'
   */
  0.0F,

  /* Computed Parameter: Internal_4_3_InitialCondition
   * Referenced by: '<S7>/Internal_4_3'
   */
  0.0F,

  /* Computed Parameter: Internal_4_4_A
   * Referenced by: '<S7>/Internal_4_4'
   */
  -0.0F,

  /* Computed Parameter: Internal_4_4_C
   * Referenced by: '<S7>/Internal_4_4'
   */
  1.0F,

  /* Computed Parameter: Internal_4_4_InitialCondition
   * Referenced by: '<S7>/Internal_4_4'
   */
  0.0F,

  /* Computed Parameter: Internal_1_1_A_m
   * Referenced by: '<S8>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C_h
   * Referenced by: '<S8>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition_e
   * Referenced by: '<S8>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition_o
   * Referenced by: '<S8>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition_b
   * Referenced by: '<S8>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition_e
   * Referenced by: '<S8>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A_o
   * Referenced by: '<S8>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C_p
   * Referenced by: '<S8>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition_b
   * Referenced by: '<S8>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition_h
   * Referenced by: '<S8>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition_m
   * Referenced by: '<S8>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition_k
   * Referenced by: '<S8>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A_a
   * Referenced by: '<S8>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C_h
   * Referenced by: '<S8>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition_d
   * Referenced by: '<S8>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S2>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S38>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S38>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lo_g
   * Referenced by: '<S39>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconvertt_b
   * Referenced by: '<S39>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S4>/Manual Switch'
   */
  1U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S4>/Manual Switch1'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
