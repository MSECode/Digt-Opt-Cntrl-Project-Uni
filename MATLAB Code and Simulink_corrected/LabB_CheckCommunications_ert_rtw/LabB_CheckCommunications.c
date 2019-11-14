/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications.c
 *
 * Code generated for Simulink model 'LabB_CheckCommunications'.
 *
 * Model version                  : 1.467
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Nov 13 21:39:08 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_CheckCommunications.h"
#include "LabB_CheckCommunications_private.h"
#include "LabB_CheckCommunications_dt.h"

/* Block signals (default storage) */
BlockIO_LabB_CheckCommunication LabB_CheckCommunications_B;

/* Block states (default storage) */
D_Work_LabB_CheckCommunications LabB_CheckCommunications_DWork;

/* Real-time model */
RT_MODEL_LabB_CheckCommunicatio LabB_CheckCommunications_M_;
RT_MODEL_LabB_CheckCommunicatio *const LabB_CheckCommunications_M =
  &LabB_CheckCommunications_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCo_fh(soMPU6050Accel_LabB_CheckCommun *obj);
static void matlabCodegenHandle_matlabCod_f(Encoder_arduino_LabB_CheckCommu *obj);
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_CheckCommuni *obj);
static void matlabCodegenHandle_matlab_fhhy(codertarget_arduinobase_blocks_ *obj);
static void LabB_CheckCo_SystemCore_release(codertarget_arduinobase_interna *obj);
static void LabB_Chec_SystemCore_delete_fhh(codertarget_arduinobase_interna *obj);
static void matlabCodegenHandle_matlabC_fhh(codertarget_arduinobase_interna *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void arduino_PWMOutput_set_pinNumb_f(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int16_T u0_0;
  int16_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(u0_0, u1_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void matlabCodegenHandle_matlabCo_fh(soMPU6050Accel_LabB_CheckCommun *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_f(Encoder_arduino_LabB_CheckCommu *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_CheckCommuni *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlab_fhhy(codertarget_arduinobase_blocks_ *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void LabB_CheckCo_SystemCore_release(codertarget_arduinobase_interna *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void LabB_Chec_SystemCore_delete_fhh(codertarget_arduinobase_interna *obj)
{
  LabB_CheckCo_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabC_fhh(codertarget_arduinobase_interna *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LabB_Chec_SystemCore_delete_fhh(obj);
  }
}

static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 6UL;
}

static void arduino_PWMOutput_set_pinNumb_f(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 2UL;
}

/* Model step function */
void LabB_CheckCommunications_step(void)
{
  int16_T out[3];
  codertarget_arduinobase_interna *obj;
  real32_T tmp;
  real_T lastSin_tmp;

  /* MATLABSystem: '<S1>/Accelerometer' */
  MPU6050Accel_Read(out);

  /* Gain: '<S2>/Gain' incorporates:
   *  Constant: '<S1>/accelerometer angle bias'
   *  Constant: '<S1>/angle offset'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  DataTypeConversion: '<S1>/Data Type Conversion2'
   *  Gain: '<S1>/raw y acceleration to g_y'
   *  Gain: '<S1>/raw z acceleration to g_z'
   *  MATLABSystem: '<S1>/Accelerometer'
   *  Sum: '<S1>/Sum1'
   *  Sum: '<S1>/Sum3'
   *  Trigonometry: '<S1>/g_y and g_z to angle in radians'
   */
  LabB_CheckCommunications_B.Gain = ((rt_atan2d_snf
    (LabB_CheckCommunications_P.rawyaccelerationtog_y_Gain * (real_T)out[1],
     LabB_CheckCommunications_P.rawzaccelerationtog_z_Gain * (real_T)out[2]) +
    LabB_CheckCommunications_P.accelerometeranglebias_Value) +
    LabB_CheckCommunications_P.angleoffset_Value) *
    LabB_CheckCommunications_P.Gain_Gain;

  /* MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
  LabB_CheckCommunications_B.M2V3LeftConnector1819 = enc_output(1.0);

  /* Gain: '<S3>/Gain' incorporates:
   *  Constant: '<S1>/angle offset'
   *  DiscreteIntegrator: '<S1>/angular velocity to angle'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum4'
   */
  LabB_CheckCommunications_B.Gain_j =
    ((LabB_CheckCommunications_P.angleoffset_Value +
      LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE) +
     LabB_CheckCommunications_P.angleoffset_Value) *
    LabB_CheckCommunications_P.Gain_Gain_o;

  /* Sin: '<Root>/Sine Wave' */
  if (LabB_CheckCommunications_DWork.systemEnable != 0L) {
    lastSin_tmp = LabB_CheckCommunications_P.SineWave_Freq *
      LabB_CheckCommunications_M->Timing.taskTime0;
    LabB_CheckCommunications_DWork.lastSin = sin(lastSin_tmp);
    LabB_CheckCommunications_DWork.lastCos = cos(lastSin_tmp);
    LabB_CheckCommunications_DWork.systemEnable = 0L;
  }

  LabB_CheckCommunications_B.SineWave = ((LabB_CheckCommunications_DWork.lastSin
    * LabB_CheckCommunications_P.SineWave_PCos +
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_PSin) *
    LabB_CheckCommunications_P.SineWave_HCos +
    (LabB_CheckCommunications_DWork.lastCos *
     LabB_CheckCommunications_P.SineWave_PCos -
     LabB_CheckCommunications_DWork.lastSin *
     LabB_CheckCommunications_P.SineWave_PSin) *
    LabB_CheckCommunications_P.SineWave_Hsin) *
    LabB_CheckCommunications_P.SineWave_Amp +
    LabB_CheckCommunications_P.SineWave_Bias;

  /* End of Sin: '<Root>/Sine Wave' */
  /* MATLABSystem: '<S1>/Gyroscope' */
  MPU6050Gyro_Read(out);

  /* MATLABSystem: '<S5>/Digital Output1' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S7>/Compare'
   */
  writeDigitalPin(8, (uint8_T)(LabB_CheckCommunications_B.SineWave <
    LabB_CheckCommunications_P.Constant_Value));

  /* MATLABSystem: '<S5>/PWM' */
  obj = &LabB_CheckCommunications_DWork.obj_g;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabB_CheckCommunications_DWork.obj_g.PinPWM);

  /* Saturate: '<S5>/Saturation -Vsupply to Vsupply' */
  if (LabB_CheckCommunications_B.SineWave >
      LabB_CheckCommunications_P.M1V4LeftMotorDriverPWM6D8FST_Vs) {
    lastSin_tmp = LabB_CheckCommunications_P.M1V4LeftMotorDriverPWM6D8FST_Vs;
  } else if (LabB_CheckCommunications_B.SineWave <
             LabB_CheckCommunications_P.SaturationVsupplytoVsupply_Lowe) {
    lastSin_tmp = LabB_CheckCommunications_P.SaturationVsupplytoVsupply_Lowe;
  } else {
    lastSin_tmp = LabB_CheckCommunications_B.SineWave;
  }

  /* Gain: '<S5>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' incorporates:
   *  Saturate: '<S5>/Saturation -Vsupply to Vsupply'
   */
  tmp = (real32_T)floor
    (LabB_CheckCommunications_P.conversiontodutycycleconverttou * (real32_T)
     lastSin_tmp);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S5>/PWM' incorporates:
   *  Gain: '<S5>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_CheckCommunications_DWork.obj_g.MW_PWM_HANDLE,
                      (uint8_T)(tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int16_T)(uint8_T)tmp));

  /* MATLABSystem: '<S6>/Digital Output1' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S8>/Compare'
   */
  writeDigitalPin(5, (uint8_T)(LabB_CheckCommunications_B.SineWave <
    LabB_CheckCommunications_P.Constant_Value_m));

  /* MATLABSystem: '<S6>/PWM' */
  obj = &LabB_CheckCommunications_DWork.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabB_CheckCommunications_DWork.obj.PinPWM);

  /* Saturate: '<S6>/Saturation -Vsupply to Vsupply' */
  if (LabB_CheckCommunications_B.SineWave >
      LabB_CheckCommunications_P.M1V4MiddleMotorDriverPWM2D5FST_) {
    lastSin_tmp = LabB_CheckCommunications_P.M1V4MiddleMotorDriverPWM2D5FST_;
  } else if (LabB_CheckCommunications_B.SineWave <
             LabB_CheckCommunications_P.SaturationVsupplytoVsupply_Lo_j) {
    lastSin_tmp = LabB_CheckCommunications_P.SaturationVsupplytoVsupply_Lo_j;
  } else {
    lastSin_tmp = LabB_CheckCommunications_B.SineWave;
  }

  /* Gain: '<S6>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' incorporates:
   *  Saturate: '<S6>/Saturation -Vsupply to Vsupply'
   */
  tmp = (real32_T)floor
    (LabB_CheckCommunications_P.conversiontodutycycleconvertt_k * (real32_T)
     lastSin_tmp);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S6>/PWM' incorporates:
   *  Gain: '<S6>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_CheckCommunications_DWork.obj.MW_PWM_HANDLE, (uint8_T)
                      (tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)-tmp :
                       (int16_T)(uint8_T)tmp));

  /* Update for DiscreteIntegrator: '<S1>/angular velocity to angle' incorporates:
   *  Constant: '<S1>/gyro velocity bias'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Gain: '<S1>/raw x velocity to deg. // sec.'
   *  Gain: '<S4>/Gain1'
   *  MATLABSystem: '<S1>/Gyroscope'
   *  Sum: '<S1>/Sum2'
   */
  LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE +=
    (LabB_CheckCommunications_P.rawxvelocitytodegsec_Gain * (real_T)out[0] *
     LabB_CheckCommunications_P.Gain1_Gain +
     LabB_CheckCommunications_P.gyrovelocitybias_Value) *
    LabB_CheckCommunications_P.angularvelocitytoangle_gainval;

  /* Update for Sin: '<Root>/Sine Wave' */
  lastSin_tmp = LabB_CheckCommunications_DWork.lastSin;
  LabB_CheckCommunications_DWork.lastSin =
    LabB_CheckCommunications_DWork.lastSin *
    LabB_CheckCommunications_P.SineWave_HCos +
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_Hsin;
  LabB_CheckCommunications_DWork.lastCos =
    LabB_CheckCommunications_DWork.lastCos *
    LabB_CheckCommunications_P.SineWave_HCos - lastSin_tmp *
    LabB_CheckCommunications_P.SineWave_Hsin;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, (real_T)LabB_CheckCommunications_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(LabB_CheckCommunications_M)!=-1) &&
        !((rtmGetTFinal(LabB_CheckCommunications_M)-
           LabB_CheckCommunications_M->Timing.taskTime0) >
          LabB_CheckCommunications_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabB_CheckCommunications_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabB_CheckCommunications_M)) {
      rtmSetErrorStatus(LabB_CheckCommunications_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_CheckCommunications_M->Timing.taskTime0 =
    (++LabB_CheckCommunications_M->Timing.clockTick0) *
    LabB_CheckCommunications_M->Timing.stepSize0;
}

/* Model initialize function */
void LabB_CheckCommunications_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LabB_CheckCommunications_M, 0,
                sizeof(RT_MODEL_LabB_CheckCommunicatio));
  rtmSetTFinal(LabB_CheckCommunications_M, -1);
  LabB_CheckCommunications_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LabB_CheckCommunications_M->Sizes.checksums[0] = (2449573342U);
  LabB_CheckCommunications_M->Sizes.checksums[1] = (1942115899U);
  LabB_CheckCommunications_M->Sizes.checksums[2] = (3920505769U);
  LabB_CheckCommunications_M->Sizes.checksums[3] = (2695208229U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    LabB_CheckCommunications_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(LabB_CheckCommunications_M->extModeInfo,
      &LabB_CheckCommunications_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_CheckCommunications_M->extModeInfo,
                        LabB_CheckCommunications_M->Sizes.checksums);
    rteiSetTPtr(LabB_CheckCommunications_M->extModeInfo, rtmGetTPtr
                (LabB_CheckCommunications_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_CheckCommunications_B), 0,
                sizeof(BlockIO_LabB_CheckCommunication));

  /* states (dwork) */
  (void) memset((void *)&LabB_CheckCommunications_DWork, 0,
                sizeof(D_Work_LabB_CheckCommunications));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabB_CheckCommunications_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 20;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_interna *obj;

    /* Start for MATLABSystem: '<S1>/Accelerometer' */
    LabB_CheckCommunications_DWork.obj_ge.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_ge.isInitialized = 1L;
    MPU6050Accel_Init();
    LabB_CheckCommunications_DWork.obj_ge.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
    LabB_CheckCommunications_DWork.obj_c.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_c.isInitialized = 1L;
    enc_init(1.0, 19.0, 18.0);
    LabB_CheckCommunications_DWork.obj_c.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Gyroscope' */
    LabB_CheckCommunications_DWork.obj_p.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_p.isInitialized = 1L;
    MPU6050Gyro_Init(0.0);
    LabB_CheckCommunications_DWork.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<S5>/Digital Output1' */
    LabB_CheckCommunications_DWork.obj_e.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_e.isInitialized = 1L;
    digitalIOSetup(8, 1);
    LabB_CheckCommunications_DWork.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S5>/PWM' */
    LabB_CheckCommunications_DWork.obj_g.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj_g.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj_g.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&LabB_CheckCommunications_DWork.obj_g,
      &LabB_CheckCommunications_DWork.gobj_0_j);
    obj = &LabB_CheckCommunications_DWork.obj_g;
    LabB_CheckCommunications_DWork.obj_g.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj_g.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabB_CheckCommunications_DWork.obj_g.PinPWM,
      0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabB_CheckCommunications_DWork.obj_g.PinPWM);
    MW_PWM_Start(LabB_CheckCommunications_DWork.obj_g.MW_PWM_HANDLE);
    LabB_CheckCommunications_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Output1' */
    LabB_CheckCommunications_DWork.obj_f.matlabCodegenIsDeleted = false;
    LabB_CheckCommunications_DWork.obj_f.isInitialized = 1L;
    digitalIOSetup(5, 1);
    LabB_CheckCommunications_DWork.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/PWM' */
    LabB_CheckCommunications_DWork.obj.matlabCodegenIsDeleted = true;
    LabB_CheckCommunications_DWork.obj.isInitialized = 0L;
    LabB_CheckCommunications_DWork.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_f(&LabB_CheckCommunications_DWork.obj,
      &LabB_CheckCommunications_DWork.gobj_0);
    obj = &LabB_CheckCommunications_DWork.obj;
    LabB_CheckCommunications_DWork.obj.isSetupComplete = false;
    LabB_CheckCommunications_DWork.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabB_CheckCommunications_DWork.obj.PinPWM,
      0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabB_CheckCommunications_DWork.obj.PinPWM);
    MW_PWM_Start(LabB_CheckCommunications_DWork.obj.MW_PWM_HANDLE);
    LabB_CheckCommunications_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<S1>/angular velocity to angle' */
    LabB_CheckCommunications_DWork.angularvelocitytoangle_DSTATE =
      LabB_CheckCommunications_P.angularvelocitytoangle_IC;

    /* Enable for Sin: '<Root>/Sine Wave' */
    LabB_CheckCommunications_DWork.systemEnable = 1L;
  }
}

/* Model terminate function */
void LabB_CheckCommunications_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Accelerometer' */
  matlabCodegenHandle_matlabCo_fh(&LabB_CheckCommunications_DWork.obj_ge);

  /* Terminate for MATLABSystem: '<S1>/M2V3 Left Connector 18, 19' */
  matlabCodegenHandle_matlabCod_f(&LabB_CheckCommunications_DWork.obj_c);

  /* Terminate for MATLABSystem: '<S1>/Gyroscope' */
  matlabCodegenHandle_matlabCodeg(&LabB_CheckCommunications_DWork.obj_p);

  /* Terminate for MATLABSystem: '<S5>/Digital Output1' */
  matlabCodegenHandle_matlab_fhhy(&LabB_CheckCommunications_DWork.obj_e);

  /* Terminate for MATLABSystem: '<S5>/PWM' */
  matlabCodegenHandle_matlabC_fhh(&LabB_CheckCommunications_DWork.obj_g);

  /* Terminate for MATLABSystem: '<S6>/Digital Output1' */
  matlabCodegenHandle_matlab_fhhy(&LabB_CheckCommunications_DWork.obj_f);

  /* Terminate for MATLABSystem: '<S6>/PWM' */
  matlabCodegenHandle_matlabC_fhh(&LabB_CheckCommunications_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
