/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications_data.c
 *
 * Code generated for Simulink model 'LabB_CheckCommunications'.
 *
 * Model version                  : 1.467
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Nov 12 14:11:07 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_CheckCommunications.h"
#include "LabB_CheckCommunications_private.h"

/* Block parameters (default storage) */
Parameters_LabB_CheckCommunicat LabB_CheckCommunications_P = {
  /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
   * Referenced by: '<S5>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
   * Referenced by: '<S6>/Saturation -Vsupply to Vsupply'
   */
  7.2F,

  /* Expression: 0
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S8>/Constant'
   */
  0.0,

  /* Expression: pi/2
   * Referenced by: '<S1>/angle offset'
   */
  1.5707963267948966,

  /* Expression: 1 / 2048
   * Referenced by: '<S1>/raw y acceleration to g_y'
   */
  0.00048828125,

  /* Expression: 1 / 2048
   * Referenced by: '<S1>/raw z acceleration to g_z'
   */
  0.00048828125,

  /* Expression: 0
   * Referenced by: '<S1>/accelerometer angle bias'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S2>/Gain'
   */
  57.295779513082323,

  /* Computed Parameter: angularvelocitytoangle_gainval
   * Referenced by: '<S1>/angular velocity to angle'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S1>/angular velocity to angle'
   */
  0.0,

  /* Expression: 180/pi
   * Referenced by: '<S3>/Gain'
   */
  57.295779513082323,

  /* Expression: 2
   * Referenced by: '<Root>/Sine Wave'
   */
  2.0,

  /* Expression: 0
   * Referenced by: '<Root>/Sine Wave'
   */
  0.0,

  /* Expression: pi/3
   * Referenced by: '<Root>/Sine Wave'
   */
  1.0471975511965976,

  /* Computed Parameter: SineWave_Hsin
   * Referenced by: '<Root>/Sine Wave'
   */
  0.010471784116245792,

  /* Computed Parameter: SineWave_HCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99994516936551214,

  /* Computed Parameter: SineWave_PSin
   * Referenced by: '<Root>/Sine Wave'
   */
  -0.010471784116245792,

  /* Computed Parameter: SineWave_PCos
   * Referenced by: '<Root>/Sine Wave'
   */
  0.99994516936551214,

  /* Expression: 1 / 131
   * Referenced by: '<S1>/raw x velocity to deg. // sec.'
   */
  0.0076335877862595417,

  /* Expression: pi/180
   * Referenced by: '<S4>/Gain1'
   */
  0.017453292519943295,

  /* Expression: 0
   * Referenced by: '<S1>/gyro velocity bias'
   */
  0.0,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
   * Referenced by: '<S5>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconverttou
   * Referenced by: '<S5>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F,

  /* Computed Parameter: SaturationVsupplytoVsupply_Lo_j
   * Referenced by: '<S6>/Saturation -Vsupply to Vsupply'
   */
  -7.2F,

  /* Computed Parameter: conversiontodutycycleconvertt_k
   * Referenced by: '<S6>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  35.4166679F
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
