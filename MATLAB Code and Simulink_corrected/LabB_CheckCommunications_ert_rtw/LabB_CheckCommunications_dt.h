/*
 * LabB_CheckCommunications_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "LabB_CheckCommunications".
 *
 * Model version              : 1.467
 * Simulink Coder version : 9.2 (R2019b) 18-Jul-2019
 * C source code generated on : Tue Nov 12 14:11:07 2019
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
  sizeof(soMPU6050Accel_LabB_CheckCommun),
  sizeof(soMPU6050Gyro_LabB_CheckCommuni),
  sizeof(codertarget_arduinobase_blocks_),
  sizeof(codertarget_arduinobase_interna),
  sizeof(e_codertarget_arduinobase_inter),
  sizeof(Encoder_arduino_LabB_CheckCommu)
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
  "soMPU6050Accel_LabB_CheckCommun",
  "soMPU6050Gyro_LabB_CheckCommuni",
  "codertarget_arduinobase_blocks_",
  "codertarget_arduinobase_interna",
  "e_codertarget_arduinobase_inter",
  "Encoder_arduino_LabB_CheckCommu"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&LabB_CheckCommunications_B.Gain), 0, 0, 3 },

  { (char_T *)(&LabB_CheckCommunications_B.M2V3LeftConnector1819), 6, 0, 1 }
  ,

  { (char_T *)(&LabB_CheckCommunications_DWork.obj), 17, 0, 2 },

  { (char_T *)(&LabB_CheckCommunications_DWork.gobj_0), 18, 0, 8 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_ge), 14, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_p), 15, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_f), 16, 0, 2 },

  { (char_T *)(&LabB_CheckCommunications_DWork.obj_c), 19, 0, 1 },

  { (char_T *)(&LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE), 0,
    0, 3 },

  { (char_T *)(&LabB_CheckCommunications_DWork.accelerometer_PWORK.LoggedData),
    11, 0, 4 },

  { (char_T *)(&LabB_CheckCommunications_DWork.systemEnable), 6, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  11U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&LabB_CheckCommunications_P.M1V4LeftMotorDriverPWM6D8FST_Vs), 1,
    0, 2 },

  { (char_T *)(&LabB_CheckCommunications_P.Constant_Value), 0, 0, 20 },

  { (char_T *)(&LabB_CheckCommunications_P.SaturationVsupplytoVsupply_Lowe), 1,
    0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] LabB_CheckCommunications_dt.h */
