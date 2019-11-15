/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot_data.c
 *
 * Code generated for Simulink model 'LabB_PIDOverRobot'.
 *
 * Model version                  : 1.568
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Nov 12 11:45:29 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_PIDOverRobot.h"
#include "LabB_PIDOverRobot_private.h"

/* Block parameters (default storage) */
Parameters_LabB_PIDOverRobot LabB_PIDOverRobot_P = {
  /* Variable: fGyroBias
   * Referenced by: '<S2>/gyro bias'
   */
  -180.0F,

  /* Variable: fWheelRadius
   * Referenced by: '<S2>/convert to meters'
   */
  0.0216F,

  /* Mask Parameter: PIDController_D
   * Referenced by: '<S28>/Derivative Gain'
   */
  0.0554F,

  /* Mask Parameter: PIDController_I
   * Referenced by: '<S31>/Integral Gain'
   */
  263.472809F,

  /* Mask Parameter: PIDController_InitialConditionF
   * Referenced by: '<S29>/Filter'
   */
  0.0F,

  /* Mask Parameter: PIDController_InitialConditio_n
   * Referenced by: '<S34>/Integrator'
   */
  0.0F,

  /* Mask Parameter: PIDController_Kb
   * Referenced by: '<S27>/Kb'
   */
  1.0F,

  /* Mask Parameter: PIDController_LowerSaturationLi
   * Referenced by: '<S41>/Saturation'
   */
  -6.0F,

  /* Mask Parameter: PIDController_N
   * Referenced by: '<S37>/Filter Coefficient'
   */
  100.0F,

  /* Mask Parameter: PIDController_P
   * Referenced by: '<S39>/Proportional Gain'
   */
  47.0274F,

  /* Mask Parameter: PIDController_UpperSaturationLi
   * Referenced by: '<S41>/Saturation'
   */
  6.0F,

  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S49>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
   * Referenced by: '<S50>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S51>/Constant'
   */
  0.0F,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S52>/Constant'
   */
  0.0F,

  /* Computed Parameter: converttoradians_Gain
   * Referenced by: '<S2>/convert to  radians'
   */
  -0.00872664619F,

  /* Computed Parameter: DiscreteTimeIntegratorconvertfr
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.005F,

  /* Computed Parameter: DiscreteTimeIntegratorconvert_o
   * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  0.0F,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S34>/Integrator'
   */
  0.005F,

  /* Computed Parameter: Filter_gainval
   * Referenced by: '<S29>/Filter'
   */
  0.005F,

  /* Computed Parameter: converttoradianssec_Gain
   * Referenced by: '<S2>/convert to radians//sec'
   */
  -0.000133231239F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S49>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S49>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lo_h
   * Referenced by: '<S50>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconvertt_i
   * Referenced by: '<S50>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
