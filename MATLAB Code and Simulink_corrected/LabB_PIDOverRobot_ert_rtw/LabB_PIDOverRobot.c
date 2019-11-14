/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot.c
 *
 * Code generated for Simulink model 'LabB_PIDOverRobot'.
 *
 * Model version                  : 1.573
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Nov 13 21:51:01 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_PIDOverRobot.h"
#include "LabB_PIDOverRobot_private.h"
#include "LabB_PIDOverRobot_dt.h"

/* Block signals (default storage) */
BlockIO_LabB_PIDOverRobot LabB_PIDOverRobot_B;

/* Block states (default storage) */
D_Work_LabB_PIDOverRobot LabB_PIDOverRobot_DWork;

/* Real-time model */
RT_MODEL_LabB_PIDOverRobot LabB_PIDOverRobot_M_;
RT_MODEL_LabB_PIDOverRobot *const LabB_PIDOverRobot_M = &LabB_PIDOverRobot_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_n(Encoder_arduino_LabB_PIDOverRob *obj);
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_PIDOverRobot *obj);
static void matlabCodegenHandle_matlabC_npu(codertarget_arduinobase_blocks_ *obj);
static void LabB_PIDOver_SystemCore_release(codertarget_arduinobase_interna *obj);
static void LabB_PIDOv_SystemCore_delete_np(codertarget_arduinobase_interna *obj);
static void matlabCodegenHandle_matlabCo_np(codertarget_arduinobase_interna *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void arduino_PWMOutput_set_pinNumb_n(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void matlabCodegenHandle_matlabCod_n(Encoder_arduino_LabB_PIDOverRob *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_PIDOverRobot *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_npu(codertarget_arduinobase_blocks_ *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void LabB_PIDOver_SystemCore_release(codertarget_arduinobase_interna *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void LabB_PIDOv_SystemCore_delete_np(codertarget_arduinobase_interna *obj)
{
  LabB_PIDOver_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_np(codertarget_arduinobase_interna *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LabB_PIDOv_SystemCore_delete_np(obj);
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

static void arduino_PWMOutput_set_pinNumb_n(codertarget_arduinobase_interna *obj,
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
void LabB_PIDOverRobot_step(void)
{
  int32_T rtb_Encoder_0;
  int16_T out[3];
  codertarget_arduinobase_interna *obj;
  real32_T rtb_SaturationVsupplytoVsupply;
  real32_T rtb_FilterCoefficient;
  real32_T rtb_SaturationVsupplytoVsuppl_n;
  real32_T rtb_SaturationVsupplytoVsuppl_g;

  /* DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr =
    LabB_PIDOverRobot_DWork.DiscreteTimeIntegratorconvertfr;

  /* MATLABSystem: '<S3>/Encoder' */
  rtb_Encoder_0 = enc_output(1.0);

  /* Gain: '<S2>/convert to meters' incorporates:
   *  DataTypeConversion: '<S3>/Data Type  Conversion2'
   *  Gain: '<S2>/convert to  radians'
   *  MATLABSystem: '<S3>/Encoder'
   */
  LabB_PIDOverRobot_B.converttometers =
    LabB_PIDOverRobot_P.converttoradians_Gain * (real32_T)rtb_Encoder_0 *
    LabB_PIDOverRobot_P.fWheelRadius;

  /* Gain: '<S37>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S29>/Filter'
   *  Gain: '<S28>/Derivative Gain'
   *  Sum: '<S29>/SumD'
   */
  rtb_FilterCoefficient = (LabB_PIDOverRobot_P.PIDController_D *
    LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr -
    LabB_PIDOverRobot_DWork.Filter_DSTATE) * LabB_PIDOverRobot_P.PIDController_N;

  /* Sum: '<S43>/Sum' incorporates:
   *  DiscreteIntegrator: '<S34>/Integrator'
   *  Gain: '<S39>/Proportional Gain'
   */
  rtb_SaturationVsupplytoVsupply = (LabB_PIDOverRobot_P.PIDController_P *
    LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr +
    LabB_PIDOverRobot_DWork.Integrator_DSTATE) + rtb_FilterCoefficient;

  /* Saturate: '<S41>/Saturation' */
  if (rtb_SaturationVsupplytoVsupply >
      LabB_PIDOverRobot_P.PIDController_UpperSaturationLi) {
    rtb_SaturationVsupplytoVsuppl_n =
      LabB_PIDOverRobot_P.PIDController_UpperSaturationLi;
  } else if (rtb_SaturationVsupplytoVsupply <
             LabB_PIDOverRobot_P.PIDController_LowerSaturationLi) {
    rtb_SaturationVsupplytoVsuppl_n =
      LabB_PIDOverRobot_P.PIDController_LowerSaturationLi;
  } else {
    rtb_SaturationVsupplytoVsuppl_n = rtb_SaturationVsupplytoVsupply;
  }

  /* End of Saturate: '<S41>/Saturation' */

  /* Gain: '<S1>/Gain' */
  LabB_PIDOverRobot_B.Gain = LabB_PIDOverRobot_P.Gain_Gain *
    rtb_SaturationVsupplytoVsuppl_n;

  /* Gain: '<S27>/Kb' incorporates:
   *  Sum: '<S27>/SumI2'
   */
  rtb_SaturationVsupplytoVsupply = (rtb_SaturationVsupplytoVsuppl_n -
    rtb_SaturationVsupplytoVsupply) * LabB_PIDOverRobot_P.PIDController_Kb;

  /* Product: '<S1>/Product1' incorporates:
   *  Fcn: '<S1>/turn off the motor if the measured angle is greater than X degrees'
   */
  rtb_SaturationVsupplytoVsuppl_n = (real32_T)((real32_T)fabs
    (LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr) < 0.75F) *
    LabB_PIDOverRobot_B.Gain;

  /* MATLABSystem: '<S3>/Gyroscope' */
  MPU6050Gyro_Read(out);

  /* MATLABSystem: '<S49>/Digital Output1' incorporates:
   *  Constant: '<S51>/Constant'
   *  RelationalOperator: '<S51>/Compare'
   */
  writeDigitalPin(8, (uint8_T)(rtb_SaturationVsupplytoVsuppl_n <
    LabB_PIDOverRobot_P.Constant_Value));

  /* MATLABSystem: '<S49>/PWM' */
  obj = &LabB_PIDOverRobot_DWork.obj_a;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(LabB_PIDOverRobot_DWork.obj_a.PinPWM);

  /* Saturate: '<S49>/Saturation -Vsupply to Vsupply' */
  if (rtb_SaturationVsupplytoVsuppl_n >
      LabB_PIDOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs) {
    rtb_SaturationVsupplytoVsuppl_g =
      LabB_PIDOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs;
  } else if (rtb_SaturationVsupplytoVsuppl_n <
             LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lowe) {
    rtb_SaturationVsupplytoVsuppl_g =
      LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lowe;
  } else {
    rtb_SaturationVsupplytoVsuppl_g = rtb_SaturationVsupplytoVsuppl_n;
  }

  /* End of Saturate: '<S49>/Saturation -Vsupply to Vsupply' */

  /* Gain: '<S49>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  rtb_SaturationVsupplytoVsuppl_g = (real32_T)floor
    (LabB_PIDOverRobot_P.conversiontodutycycleconverttou *
     rtb_SaturationVsupplytoVsuppl_g);
  if (rtIsNaNF(rtb_SaturationVsupplytoVsuppl_g) || rtIsInfF
      (rtb_SaturationVsupplytoVsuppl_g)) {
    rtb_SaturationVsupplytoVsuppl_g = 0.0F;
  } else {
    rtb_SaturationVsupplytoVsuppl_g = (real32_T)fmod
      (rtb_SaturationVsupplytoVsuppl_g, 256.0);
  }

  /* MATLABSystem: '<S49>/PWM' incorporates:
   *  Gain: '<S49>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_PIDOverRobot_DWork.obj_a.MW_PWM_HANDLE, (uint8_T)
                      (rtb_SaturationVsupplytoVsuppl_g < 0.0F ? (int16_T)
                       (uint8_T)-(int8_T)(uint8_T)
                       -rtb_SaturationVsupplytoVsuppl_g : (int16_T)(uint8_T)
                       rtb_SaturationVsupplytoVsuppl_g));

  /* MATLABSystem: '<S50>/Digital Output1' incorporates:
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S52>/Compare'
   */
  writeDigitalPin(5, (uint8_T)(rtb_SaturationVsupplytoVsuppl_n <
    LabB_PIDOverRobot_P.Constant_Value_k));

  /* Saturate: '<S50>/Saturation -Vsupply to Vsupply' */
  if (rtb_SaturationVsupplytoVsuppl_n >
      LabB_PIDOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_) {
    rtb_SaturationVsupplytoVsuppl_n =
      LabB_PIDOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_;
  } else {
    if (rtb_SaturationVsupplytoVsuppl_n <
        LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lo_h) {
      rtb_SaturationVsupplytoVsuppl_n =
        LabB_PIDOverRobot_P.SaturationVsupplytoVsupply_Lo_h;
    }
  }

  /* End of Saturate: '<S50>/Saturation -Vsupply to Vsupply' */

  /* MATLABSystem: '<S50>/PWM' */
  obj = &LabB_PIDOverRobot_DWork.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(LabB_PIDOverRobot_DWork.obj.PinPWM);

  /* Gain: '<S50>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  rtb_SaturationVsupplytoVsuppl_g = (real32_T)floor
    (LabB_PIDOverRobot_P.conversiontodutycycleconvertt_i *
     rtb_SaturationVsupplytoVsuppl_n);
  if (rtIsNaNF(rtb_SaturationVsupplytoVsuppl_g) || rtIsInfF
      (rtb_SaturationVsupplytoVsuppl_g)) {
    rtb_SaturationVsupplytoVsuppl_g = 0.0F;
  } else {
    rtb_SaturationVsupplytoVsuppl_g = (real32_T)fmod
      (rtb_SaturationVsupplytoVsuppl_g, 256.0);
  }

  /* MATLABSystem: '<S50>/PWM' incorporates:
   *  Gain: '<S50>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_PIDOverRobot_DWork.obj.MW_PWM_HANDLE, (uint8_T)
                      (rtb_SaturationVsupplytoVsuppl_g < 0.0F ? (int16_T)
                       (uint8_T)-(int8_T)(uint8_T)
                       -rtb_SaturationVsupplytoVsuppl_g : (int16_T)(uint8_T)
                       rtb_SaturationVsupplytoVsuppl_g));

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' incorporates:
   *  Constant: '<S2>/gyro bias'
   *  DataTypeConversion: '<S3>/Data Type  Conversion1'
   *  Gain: '<S2>/convert to radians//sec'
   *  MATLABSystem: '<S3>/Gyroscope'
   *  Sum: '<S2>/Sum'
   */
  LabB_PIDOverRobot_DWork.DiscreteTimeIntegratorconvertfr += ((real32_T)out[0] -
    LabB_PIDOverRobot_P.fGyroBias) *
    LabB_PIDOverRobot_P.converttoradianssec_Gain *
    LabB_PIDOverRobot_P.DiscreteTimeIntegratorconvertfr;

  /* Update for DiscreteIntegrator: '<S34>/Integrator' incorporates:
   *  Gain: '<S31>/Integral Gain'
   *  Sum: '<S27>/SumI4'
   */
  LabB_PIDOverRobot_DWork.Integrator_DSTATE +=
    (LabB_PIDOverRobot_P.PIDController_I *
     LabB_PIDOverRobot_B.DiscreteTimeIntegratorconvertfr +
     rtb_SaturationVsupplytoVsupply) * LabB_PIDOverRobot_P.Integrator_gainval;

  /* Update for DiscreteIntegrator: '<S29>/Filter' */
  LabB_PIDOverRobot_DWork.Filter_DSTATE += LabB_PIDOverRobot_P.Filter_gainval *
    rtb_FilterCoefficient;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.005s, 0.0s] */
    rtExtModeUpload(0, (real_T)LabB_PIDOverRobot_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(LabB_PIDOverRobot_M)!=-1) &&
        !((rtmGetTFinal(LabB_PIDOverRobot_M)-
           LabB_PIDOverRobot_M->Timing.taskTime0) >
          LabB_PIDOverRobot_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabB_PIDOverRobot_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabB_PIDOverRobot_M)) {
      rtmSetErrorStatus(LabB_PIDOverRobot_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_PIDOverRobot_M->Timing.taskTime0 =
    (++LabB_PIDOverRobot_M->Timing.clockTick0) *
    LabB_PIDOverRobot_M->Timing.stepSize0;
}

/* Model initialize function */
void LabB_PIDOverRobot_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LabB_PIDOverRobot_M, 0,
                sizeof(RT_MODEL_LabB_PIDOverRobot));
  rtmSetTFinal(LabB_PIDOverRobot_M, -1);
  LabB_PIDOverRobot_M->Timing.stepSize0 = 0.005;

  /* External mode info */
  LabB_PIDOverRobot_M->Sizes.checksums[0] = (2780981141U);
  LabB_PIDOverRobot_M->Sizes.checksums[1] = (4048871963U);
  LabB_PIDOverRobot_M->Sizes.checksums[2] = (1732226504U);
  LabB_PIDOverRobot_M->Sizes.checksums[3] = (3506547639U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[7];
    LabB_PIDOverRobot_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(LabB_PIDOverRobot_M->extModeInfo,
      &LabB_PIDOverRobot_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_PIDOverRobot_M->extModeInfo,
                        LabB_PIDOverRobot_M->Sizes.checksums);
    rteiSetTPtr(LabB_PIDOverRobot_M->extModeInfo, rtmGetTPtr(LabB_PIDOverRobot_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_PIDOverRobot_B), 0,
                sizeof(BlockIO_LabB_PIDOverRobot));

  /* states (dwork) */
  (void) memset((void *)&LabB_PIDOverRobot_DWork, 0,
                sizeof(D_Work_LabB_PIDOverRobot));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabB_PIDOverRobot_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 19;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_interna *obj;

    /* Start for MATLABSystem: '<S3>/Encoder' */
    LabB_PIDOverRobot_DWork.obj_l.matlabCodegenIsDeleted = false;
    LabB_PIDOverRobot_DWork.obj_l.isInitialized = 1L;
    enc_init(1.0, 19.0, 18.0);
    LabB_PIDOverRobot_DWork.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Gyroscope' */
    LabB_PIDOverRobot_DWork.obj_ls.matlabCodegenIsDeleted = false;
    LabB_PIDOverRobot_DWork.obj_ls.isInitialized = 1L;
    MPU6050Gyro_Init(0.0);
    LabB_PIDOverRobot_DWork.obj_ls.isSetupComplete = true;

    /* Start for MATLABSystem: '<S49>/Digital Output1' */
    LabB_PIDOverRobot_DWork.obj_i.matlabCodegenIsDeleted = false;
    LabB_PIDOverRobot_DWork.obj_i.isInitialized = 1L;
    digitalIOSetup(8, 1);
    LabB_PIDOverRobot_DWork.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<S49>/PWM' */
    LabB_PIDOverRobot_DWork.obj_a.matlabCodegenIsDeleted = true;
    LabB_PIDOverRobot_DWork.obj_a.isInitialized = 0L;
    LabB_PIDOverRobot_DWork.obj_a.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&LabB_PIDOverRobot_DWork.obj_a,
      &LabB_PIDOverRobot_DWork.gobj_0_p);
    obj = &LabB_PIDOverRobot_DWork.obj_a;
    LabB_PIDOverRobot_DWork.obj_a.isSetupComplete = false;
    LabB_PIDOverRobot_DWork.obj_a.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabB_PIDOverRobot_DWork.obj_a.PinPWM, 0.0,
      0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(LabB_PIDOverRobot_DWork.obj_a.PinPWM);
    MW_PWM_Start(LabB_PIDOverRobot_DWork.obj_a.MW_PWM_HANDLE);
    LabB_PIDOverRobot_DWork.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<S50>/Digital Output1' */
    LabB_PIDOverRobot_DWork.obj_n.matlabCodegenIsDeleted = false;
    LabB_PIDOverRobot_DWork.obj_n.isInitialized = 1L;
    digitalIOSetup(5, 1);
    LabB_PIDOverRobot_DWork.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<S50>/PWM' */
    LabB_PIDOverRobot_DWork.obj.matlabCodegenIsDeleted = true;
    LabB_PIDOverRobot_DWork.obj.isInitialized = 0L;
    LabB_PIDOverRobot_DWork.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_n(&LabB_PIDOverRobot_DWork.obj,
      &LabB_PIDOverRobot_DWork.gobj_0);
    obj = &LabB_PIDOverRobot_DWork.obj;
    LabB_PIDOverRobot_DWork.obj.isSetupComplete = false;
    LabB_PIDOverRobot_DWork.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabB_PIDOverRobot_DWork.obj.PinPWM, 0.0,
      0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(LabB_PIDOverRobot_DWork.obj.PinPWM);
    MW_PWM_Start(LabB_PIDOverRobot_DWork.obj.MW_PWM_HANDLE);
    LabB_PIDOverRobot_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
    LabB_PIDOverRobot_DWork.DiscreteTimeIntegratorconvertfr =
      LabB_PIDOverRobot_P.DiscreteTimeIntegratorconvert_o;

    /* InitializeConditions for DiscreteIntegrator: '<S34>/Integrator' */
    LabB_PIDOverRobot_DWork.Integrator_DSTATE =
      LabB_PIDOverRobot_P.PIDController_InitialConditio_n;

    /* InitializeConditions for DiscreteIntegrator: '<S29>/Filter' */
    LabB_PIDOverRobot_DWork.Filter_DSTATE =
      LabB_PIDOverRobot_P.PIDController_InitialConditionF;
  }
}

/* Model terminate function */
void LabB_PIDOverRobot_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Encoder' */
  matlabCodegenHandle_matlabCod_n(&LabB_PIDOverRobot_DWork.obj_l);

  /* Terminate for MATLABSystem: '<S3>/Gyroscope' */
  matlabCodegenHandle_matlabCodeg(&LabB_PIDOverRobot_DWork.obj_ls);

  /* Terminate for MATLABSystem: '<S49>/Digital Output1' */
  matlabCodegenHandle_matlabC_npu(&LabB_PIDOverRobot_DWork.obj_i);

  /* Terminate for MATLABSystem: '<S49>/PWM' */
  matlabCodegenHandle_matlabCo_np(&LabB_PIDOverRobot_DWork.obj_a);

  /* Terminate for MATLABSystem: '<S50>/Digital Output1' */
  matlabCodegenHandle_matlabC_npu(&LabB_PIDOverRobot_DWork.obj_n);

  /* Terminate for MATLABSystem: '<S50>/PWM' */
  matlabCodegenHandle_matlabCo_np(&LabB_PIDOverRobot_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
