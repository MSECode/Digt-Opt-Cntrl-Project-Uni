/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot_data.c
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 1.716
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Dec  4 00:06:46 2019
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
   * Referenced by: '<S5>/Gain7'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.00191196182F, 0.0825469866F, 0.034648262F,
    3.93383074F, -4.21218756E-5F, -0.00186998339F, 1.00192726F, 0.357495189F,
    0.000169621067F, 0.0192243923F, 0.00927918404F, 0.919316769F },

  /* Variable: Bd
   * Referenced by: '<S5>/Gain8'
   */
  { 0.000382542348F, 0.0433930494F, -0.00163876906F, -0.186059564F },

  /* Variable: Cd
   * Referenced by: '<S5>/Gain10'
   */
  { 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F },

  /* Variable: Kd
   * Referenced by: '<S1>/controller'
   */
  { -10.3518953F, -37.7235069F, -53.534359F, -8.87081718F },

  /* Variable: Ld
   * Referenced by: '<S5>/Gain9'
   */
  { 0.203032434F, 0.00310423807F, 0.0139477104F, 0.283973724F, 0.00378754037F,
    0.109245539F, 0.3872675F, 3.94186163F },

  /* Variable: Md1
   * Referenced by: '<S5>/Gain'
   */
  { 0.791306734F, -0.0751670823F, 0.205316365F, -0.0577633157F, 0.0509239174F,
    2.05381274F, 0.00108082418F, 0.0164189283F, 0.752529621F },

  /* Variable: Md2
   * Referenced by: '<S5>/Gain1'
   */
  { -0.0201283339F, 0.037065953F, -0.562210619F },

  /* Variable: Md3
   * Referenced by: '<S5>/Gain2'
   */
  { -48.3333817F, -16.5395927F, -983.292664F },

  /* Variable: Md4
   * Referenced by: '<S5>/Gain3'
   */
  { 0.212656379F, 0.0739937797F, 0.193596944F },

  /* Variable: Md5
   * Referenced by: '<S5>/Gain4'
   */
  { 48.3333817F, 16.5395927F, 983.292664F },

  /* Variable: Md6
   * Referenced by: '<S5>/Gain5'
   */
  { 1.0F, 0.0F, 0.0F, -0.0F },

  /* Variable: Md7
   * Referenced by: '<S5>/Gain6'
   */
  { 0.0F, 0.0F, 1.0F, -0.0F, 0.0F, 1.0F, 0.0F, 0.0F, -0.0F, -0.0F, 0.0F, 1.0F },

  /* Variable: Nxd
   * Referenced by: '<S1>/Gain3'
   */
  0.0F,

  /* Variable: fGyroBias
   * Referenced by: '<S2>/gyro bias'
   */
  -283.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S2>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S6>/UD'
   */
  0.0F,

  /* Mask Parameter: DiscreteDerivative_ICPrevScal_g
   * Referenced by: '<S7>/UD'
   */
  0.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
   * Referenced by: '<S55>/Saturation -Vsupply to Vsupply'
   */
  9.0F,

  /* Expression: 0
   * Referenced by: '<S10>/Serial Transmit'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S56>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S57>/Constant'
   */
  0.0F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S1>/Gain4'
   */
  10.3518953F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S2>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S6>/TSamp'
   */
  100.0F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.01F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_o
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: TSamp_WtEt_j
   * Referenced by: '<S7>/TSamp'
   */
  100.0F,

  /* Computed Parameter: Internal_1_1_A
   * Referenced by: '<S8>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C
   * Referenced by: '<S8>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition
   * Referenced by: '<S8>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition
   * Referenced by: '<S8>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition
   * Referenced by: '<S8>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_1_4_InitialCondition
   * Referenced by: '<S8>/Internal_1_4'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition
   * Referenced by: '<S8>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A
   * Referenced by: '<S8>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C
   * Referenced by: '<S8>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition
   * Referenced by: '<S8>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition
   * Referenced by: '<S8>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_4_InitialCondition
   * Referenced by: '<S8>/Internal_2_4'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition
   * Referenced by: '<S8>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition
   * Referenced by: '<S8>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A
   * Referenced by: '<S8>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C
   * Referenced by: '<S8>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition
   * Referenced by: '<S8>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_4_InitialCondition
   * Referenced by: '<S8>/Internal_3_4'
   */
  0.0F,

  /* Computed Parameter: Internal_4_1_InitialCondition
   * Referenced by: '<S8>/Internal_4_1'
   */
  0.0F,

  /* Computed Parameter: Internal_4_2_InitialCondition
   * Referenced by: '<S8>/Internal_4_2'
   */
  0.0F,

  /* Computed Parameter: Internal_4_3_InitialCondition
   * Referenced by: '<S8>/Internal_4_3'
   */
  0.0F,

  /* Computed Parameter: Internal_4_4_A
   * Referenced by: '<S8>/Internal_4_4'
   */
  -0.0F,

  /* Computed Parameter: Internal_4_4_C
   * Referenced by: '<S8>/Internal_4_4'
   */
  1.0F,

  /* Computed Parameter: Internal_4_4_InitialCondition
   * Referenced by: '<S8>/Internal_4_4'
   */
  0.0F,

  /* Computed Parameter: Internal_1_1_A_e
   * Referenced by: '<S9>/Internal_1_1'
   */
  -0.0F,

  /* Computed Parameter: Internal_1_1_C_i
   * Referenced by: '<S9>/Internal_1_1'
   */
  1.0F,

  /* Computed Parameter: Internal_1_1_InitialCondition_j
   * Referenced by: '<S9>/Internal_1_1'
   */
  0.0F,

  /* Computed Parameter: Internal_1_2_InitialCondition_o
   * Referenced by: '<S9>/Internal_1_2'
   */
  0.0F,

  /* Computed Parameter: Internal_1_3_InitialCondition_o
   * Referenced by: '<S9>/Internal_1_3'
   */
  0.0F,

  /* Computed Parameter: Internal_2_1_InitialCondition_h
   * Referenced by: '<S9>/Internal_2_1'
   */
  0.0F,

  /* Computed Parameter: Internal_2_2_A_k
   * Referenced by: '<S9>/Internal_2_2'
   */
  -0.0F,

  /* Computed Parameter: Internal_2_2_C_n
   * Referenced by: '<S9>/Internal_2_2'
   */
  1.0F,

  /* Computed Parameter: Internal_2_2_InitialCondition_f
   * Referenced by: '<S9>/Internal_2_2'
   */
  0.0F,

  /* Computed Parameter: Internal_2_3_InitialCondition_d
   * Referenced by: '<S9>/Internal_2_3'
   */
  0.0F,

  /* Computed Parameter: Internal_3_1_InitialCondition_a
   * Referenced by: '<S9>/Internal_3_1'
   */
  0.0F,

  /* Computed Parameter: Internal_3_2_InitialCondition_i
   * Referenced by: '<S9>/Internal_3_2'
   */
  0.0F,

  /* Computed Parameter: Internal_3_3_A_g
   * Referenced by: '<S9>/Internal_3_3'
   */
  -0.0F,

  /* Computed Parameter: Internal_3_3_C_i
   * Referenced by: '<S9>/Internal_3_3'
   */
  1.0F,

  /* Computed Parameter: Internal_3_3_InitialCondition_e
   * Referenced by: '<S9>/Internal_3_3'
   */
  0.0F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S2>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S54>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S54>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lo_g
   * Referenced by: '<S55>/Saturation -Vsupply to Vsupply'
   */
  -9.0F,

  /* Computed Parameter: conversiontodutycycleconvertt_d
   * Referenced by: '<S55>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  28.333334F,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S5>/Manual Switch'
   */
  0U,

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S5>/Manual Switch1'
   */
  1U,

  /* Computed Parameter: Constant_Value_i
   * Referenced by: '<S10>/Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
