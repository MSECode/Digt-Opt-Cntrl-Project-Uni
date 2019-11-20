/*
 * LabB_ObserverAndControllerOverRobot_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LabB_ObserverAndControllerOverRobot".
 *
 * Model version              : 1.709
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Tue Nov 19 19:41:45 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(Encoder_arduino_LabB_ObserverAn),
  sizeof(soMPU6050Gyro_LabB_ObserverAndC),
  sizeof(codertarget_arduinobase_blocks_),
  sizeof(codertarget_arduinobase_interna),
  sizeof(e_codertarget_arduinobase_inter)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "Encoder_arduino_LabB_ObserverAn",
  "soMPU6050Gyro_LabB_ObserverAndC",
  "codertarget_arduinobase_blocks_",
  "codertarget_arduinobase_interna",
  "e_codertarget_arduinobase_inter"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&LabB_ObserverAndControllerOve_B.converttometers), 1, 0, 9 }
  ,

  { (char_T *)(&LabB_ObserverAndControlle_DWork.obj), 17, 0, 2 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.gobj_0), 18, 0, 8 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.obj_g), 14, 0, 1 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.obj_fy), 15, 0, 1 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.obj_n), 16, 0, 2 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.ToWorkspace_PWORK.LoggedData),
    11, 0, 10 },

  { (char_T *)(&LabB_ObserverAndControlle_DWork.UD_DSTATE), 1, 0, 10 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&LabB_ObserverAndControllerOve_P.Ad[0]), 1, 0, 134 },

  { (char_T *)(&LabB_ObserverAndControllerOve_P.ManualSwitch_CurrentSetting), 3,
    0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] LabB_ObserverAndControllerOverRobot_dt.h */
