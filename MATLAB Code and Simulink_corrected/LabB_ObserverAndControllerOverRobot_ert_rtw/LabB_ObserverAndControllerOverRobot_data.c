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
 * C/C++ source code generated on : Sat Nov 30 22:41:55 2019
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
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.00148423773F, 0.0959582478F, 0.0150555559F,
    3.87206936F, -2.45159154E-5F, -0.00510342466F, 1.00054157F, 0.19651106F,
    7.37766604E-5F, 0.0189603604F, 0.00468479376F, 0.919228137F },

  /* Variable: Bd
   * Referenced by: '<S4>/Gain8'
   */
  { 0.00016628606F, 0.042758733F, -0.000712087087F, -0.183138415F },

  /* Variable: Cd
   * Referenced by: '<S4>/Gain10'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F },

  /* Variable: Kd
   * Referenced by: '<S1>/controller'
   */
  { -10.7526808F, -38.3462677F, -54.5879326F, -9.05630779F },

  /* Variable: Ld
   * Referenced by: '<S4>/Gain9'
   */
  { 0.108033374F, -0.584724426F, 0.00358050922F, 2.65766239F, -0.000925783941F,
    2.26473117F, 0.216934323F, -7.25700712F },

  /* Variable: Md1
   * Referenced by: '<S4>/Gain'
   */
  { 0.888171315F, -0.0667210221F, 0.188835889F, -0.0577879883F, 0.0522552095F,
    2.38873363F, 0.00106397655F, 0.0167880245F, 0.845496297F },

  /* Variable: Md2
   * Referenced by: '<S4>/Gain1'
   */
  { -0.00887308829F, 0.037862476F, -0.349323452F },

  /* Variable: Md3
   * Referenced by: '<S4>/Gain2'
   */
  { -49.0780869F, -29.4447708F, -999.392395F },

  /* Variable: Md4
   * Referenced by: '<S4>/Gain3'
   */
  { 0.113573447F, 0.0623394623F, 0.0321761966F },

  /* Variable: Md5
   * Referenced by: '<S4>/Gain4'
   */
  { 49.0780869F, 29.4447708F, 999.392395F },

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
  200.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_e
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt_m
   * Referenced by: '<S6>/TSamp'
   */
  200.0F,

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
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
