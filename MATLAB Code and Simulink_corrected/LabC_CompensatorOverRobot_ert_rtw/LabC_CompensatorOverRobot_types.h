/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot_types.h
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

#ifndef RTW_HEADER_LabC_CompensatorOverRobot_types_h_
#define RTW_HEADER_LabC_CompensatorOverRobot_types_h_
#include "rtwtypes.h"
#ifndef typedef_soMPU6050Gyro_LabC_CompensatorO
#define typedef_soMPU6050Gyro_LabC_CompensatorO

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} soMPU6050Gyro_LabC_CompensatorO;

#endif                               /*typedef_soMPU6050Gyro_LabC_CompensatorO*/

#ifndef typedef_Encoder_arduino_LabC_Compensato
#define typedef_Encoder_arduino_LabC_Compensato

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} Encoder_arduino_LabC_Compensato;

#endif                               /*typedef_Encoder_arduino_LabC_Compensato*/

/* Custom Type definition for MATLABSystem: '<S55>/PWM' */
#include "MW_SVD.h"
#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} codertarget_arduinobase_blocks_;

#endif                               /*typedef_codertarget_arduinobase_blocks_*/

#ifndef typedef_c_cell_wrap_LabC_CompensatorOve
#define typedef_c_cell_wrap_LabC_CompensatorOve

typedef struct {
  uint32_T f1[8];
} c_cell_wrap_LabC_CompensatorOve;

#endif                               /*typedef_c_cell_wrap_LabC_CompensatorOve*/

#ifndef typedef_c_cell_LabC_CompensatorOverRobo
#define typedef_c_cell_LabC_CompensatorOverRobo

typedef struct {
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9[2];
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
} c_cell_LabC_CompensatorOverRobo;

#endif                               /*typedef_c_cell_LabC_CompensatorOverRobo*/

#ifndef typedef_e_codertarget_arduinobase_inter
#define typedef_e_codertarget_arduinobase_inter

typedef struct {
  c_cell_LabC_CompensatorOverRobo AvailablePwmPinNames;
} e_codertarget_arduinobase_inter;

#endif                               /*typedef_e_codertarget_arduinobase_inter*/

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_codertarget_arduinobase_inter *Hw;
  MW_Handle_Type MW_PWM_HANDLE;
  uint32_T PinPWM;
} codertarget_arduinobase_interna;

#endif                               /*typedef_codertarget_arduinobase_interna*/

#ifndef typedef_codertarget_arduinobase_inter_o
#define typedef_codertarget_arduinobase_inter_o

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_cell_wrap_LabC_CompensatorOve inputVarSize;
  real_T Protocol;
  real_T port;
  real_T dataSizeInBytes;
  real_T dataType;
  real_T sendModeEnum;
  real_T sendFormatEnum;
} codertarget_arduinobase_inter_o;

#endif                               /*typedef_codertarget_arduinobase_inter_o*/

/* Parameters (default storage) */
typedef struct Parameters_LabC_CompensatorOver_ Parameters_LabC_CompensatorOver;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LabC_CompensatorOverRob RT_MODEL_LabC_CompensatorOverRo;

#endif                       /* RTW_HEADER_LabC_CompensatorOverRobot_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
