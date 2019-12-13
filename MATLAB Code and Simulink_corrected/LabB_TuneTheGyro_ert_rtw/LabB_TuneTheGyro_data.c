/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_TuneTheGyro_data.c
 *
 * Code generated for Simulink model 'LabB_TuneTheGyro'.
 *
 * Model version                  : 1.564
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Dec  4 23:41:10 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_TuneTheGyro.h"
#include "LabB_TuneTheGyro_private.h"

/* Block parameters (default storage) */
Parameters_LabB_TuneTheGyro LabB_TuneTheGyro_P = {
  /* Mask Parameter: calibratethegyrobeforeXsecondss
   * Referenced by: '<S1>/Constant'
   */
  3.0,

  /* Expression: 0
   * Referenced by: '<S2>/compute a moving average of the gyro'
   */
  0.0,

  /* Expression: ones(1,1)/1
   * Referenced by: '<S2>/compute a moving average of the gyro'
   */
  1.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
