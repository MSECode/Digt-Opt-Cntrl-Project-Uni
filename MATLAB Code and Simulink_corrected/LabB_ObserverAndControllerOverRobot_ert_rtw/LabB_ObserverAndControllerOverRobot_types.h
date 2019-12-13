/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_ObserverAndControllerOverRobot_types.h
 *
 * Code generated for Simulink model 'LabB_ObserverAndControllerOverRobot'.
 *
 * Model version                  : 1.709
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Fri Dec 13 17:08:32 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LabB_ObserverAndControllerOverRobot_types_h_
#define RTW_HEADER_LabB_ObserverAndControllerOverRobot_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_soMPU6050Gyro_LabB_ObserverAndC
#define typedef_soMPU6050Gyro_LabB_ObserverAndC

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} soMPU6050Gyro_LabB_ObserverAndC;

#endif                               /*typedef_soMPU6050Gyro_LabB_ObserverAndC*/

#ifndef typedef_Encoder_arduino_LabB_ObserverAn
#define typedef_Encoder_arduino_LabB_ObserverAn

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} Encoder_arduino_LabB_ObserverAn;

#endif                               /*typedef_Encoder_arduino_LabB_ObserverAn*/

/* Custom Type definition for MATLABSystem: '<S39>/PWM' */
#include "MW_SVD.h"
#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} codertarget_arduinobase_blocks_;

#endif                               /*typedef_codertarget_arduinobase_blocks_*/

#ifndef typedef_c_cell_LabB_ObserverAndControll
#define typedef_c_cell_LabB_ObserverAndControll

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
} c_cell_LabB_ObserverAndControll;

#endif                               /*typedef_c_cell_LabB_ObserverAndControll*/

#ifndef typedef_e_codertarget_arduinobase_inter
#define typedef_e_codertarget_arduinobase_inter

typedef struct {
  c_cell_LabB_ObserverAndControll AvailablePwmPinNames;
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

/* Parameters (default storage) */
typedef struct Parameters_LabB_ObserverAndCont_ Parameters_LabB_ObserverAndCont;

/* Forward declaration for rtModel */
typedef struct tag_RTM_LabB_ObserverAndControl RT_MODEL_LabB_ObserverAndContro;

#endif             /* RTW_HEADER_LabB_ObserverAndControllerOverRobot_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
