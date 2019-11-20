/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_ObserverAndControllerOverRobot.c
 *
 * Code generated for Simulink model 'LabB_ObserverAndControllerOverRobot'.
 *
 * Model version                  : 1.709
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Nov 20 16:02:09 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabB_ObserverAndControllerOverRobot.h"
#include "LabB_ObserverAndControllerOverRobot_private.h"
#include "LabB_ObserverAndControllerOverRobot_dt.h"

/* Block signals (default storage) */
BlockIO_LabB_ObserverAndControl LabB_ObserverAndControllerOve_B;

/* Block states (default storage) */
D_Work_LabB_ObserverAndControll LabB_ObserverAndControlle_DWork;

/* Real-time model */
RT_MODEL_LabB_ObserverAndContro LabB_ObserverAndControllerOv_M_;
RT_MODEL_LabB_ObserverAndContro *const LabB_ObserverAndControllerOv_M =
  &LabB_ObserverAndControllerOv_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_a(Encoder_arduino_LabB_ObserverAn *obj);
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_ObserverAndC *obj);
static void matlabCodegenHandle_matlabC_aav(codertarget_arduinobase_blocks_ *obj);
static void LabB_Observe_SystemCore_release(codertarget_arduinobase_interna *obj);
static void LabB_Obser_SystemCore_delete_aa(codertarget_arduinobase_interna *obj);
static void matlabCodegenHandle_matlabCo_aa(codertarget_arduinobase_interna *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void arduino_PWMOutput_set_pinNumb_a(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void matlabCodegenHandle_matlabCod_a(Encoder_arduino_LabB_ObserverAn *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_ObserverAndC *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_aav(codertarget_arduinobase_blocks_ *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void LabB_Observe_SystemCore_release(codertarget_arduinobase_interna *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void LabB_Obser_SystemCore_delete_aa(codertarget_arduinobase_interna *obj)
{
  LabB_Observe_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_aa(codertarget_arduinobase_interna *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LabB_Obser_SystemCore_delete_aa(obj);
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

static void arduino_PWMOutput_set_pinNumb_a(codertarget_arduinobase_interna *obj,
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
void LabB_ObserverAndControllerOverRobot_step(void)
{
  /* local block i/o variables */
  real32_T rtb_SaturationVsupplytoVsupply;
  real32_T rtb_Sum1;
  real32_T rtb_Internal_3_2;
  real32_T rtb_Sum2_p;
  real32_T rtb_Sum3;
  codertarget_arduinobase_interna *obj;
  int16_T i;
  real32_T rtb_Gain8_idx_0;
  real32_T rtb_Gain8_idx_1;
  real32_T rtb_Gain8_idx_2;
  real32_T rtb_Gain8_idx_3;
  real32_T rtb_Add1_idx_0;
  real32_T rtb_Add1_idx_1;
  real32_T rtb_Add1_idx_2;
  real32_T rtb_TmpSignalConversionAtGain_0;

  /* MATLABSystem: '<S3>/Encoder' */
  LabB_ObserverAndControllerOve_B.rtb_Encoder_m = enc_output(1.0);

  /* DataTypeConversion: '<S3>/Data Type  Conversion2' incorporates:
   *  MATLABSystem: '<S3>/Encoder'
   */
  rtb_Internal_3_2 = (real32_T)LabB_ObserverAndControllerOve_B.rtb_Encoder_m;

  /* Gain: '<S2>/convert to meters' incorporates:
   *  Gain: '<S2>/convert to  radians'
   */
  LabB_ObserverAndControllerOve_B.converttometers =
    LabB_ObserverAndControllerOve_P.converttoradians_Gain * rtb_Internal_3_2 *
    LabB_ObserverAndControllerOve_P.fWheelRadius;

  /* SampleTimeMath: '<S5>/TSamp'
   *
   * About '<S5>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  LabB_ObserverAndControllerOve_B.TSamp =
    LabB_ObserverAndControllerOve_B.converttometers *
    LabB_ObserverAndControllerOve_P.TSamp_WtEt;

  /* DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr =
    LabB_ObserverAndControlle_DWork.DiscreteTimeIntegratorconvertfr;

  /* SampleTimeMath: '<S6>/TSamp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  LabB_ObserverAndControllerOve_B.TSamp_n =
    LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr *
    LabB_ObserverAndControllerOve_P.TSamp_WtEt_m;

  /* DiscreteStateSpace: '<S7>/Internal_1_1' */
  {
    rtb_Internal_3_2 = LabB_ObserverAndControllerOve_P.Internal_1_1_C*
      LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE;
  }

  /* DiscreteStateSpace: '<S7>/Internal_1_2' */
  {
    rtb_Sum3 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_1_3' */
  {
    rtb_Sum2_p = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_1_4' */
  {
    rtb_Sum1 = 0.0;
  }

  /* Sum: '<S7>/Sum1' */
  LabB_ObserverAndControllerOve_B.Sum1 = ((rtb_Internal_3_2 + rtb_Sum3) +
    rtb_Sum2_p) + rtb_Sum1;

  /* DiscreteStateSpace: '<S7>/Internal_2_1' */
  {
    rtb_Sum1 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_2_2' */
  {
    rtb_Sum2_p = LabB_ObserverAndControllerOve_P.Internal_2_2_C*
      LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE;
  }

  /* DiscreteStateSpace: '<S7>/Internal_2_3' */
  {
    rtb_Sum3 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_2_4' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* Sum: '<S7>/Sum2' */
  LabB_ObserverAndControllerOve_B.Sum2 = ((rtb_Sum1 + rtb_Sum2_p) + rtb_Sum3) +
    rtb_Internal_3_2;

  /* DiscreteStateSpace: '<S7>/Internal_3_1' */
  {
    rtb_Sum1 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_3_2' */
  {
    rtb_Sum2_p = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_3_3' */
  {
    rtb_Sum3 = LabB_ObserverAndControllerOve_P.Internal_3_3_C*
      LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE;
  }

  /* DiscreteStateSpace: '<S7>/Internal_3_4' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* Sum: '<S7>/Sum3' */
  LabB_ObserverAndControllerOve_B.Sum3 = ((rtb_Sum1 + rtb_Sum2_p) + rtb_Sum3) +
    rtb_Internal_3_2;

  /* DiscreteStateSpace: '<S7>/Internal_4_1' */
  {
    rtb_Sum1 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_4_2' */
  {
    rtb_Sum2_p = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_4_3' */
  {
    rtb_Sum3 = 0.0;
  }

  /* DiscreteStateSpace: '<S7>/Internal_4_4' */
  {
    rtb_Internal_3_2 = LabB_ObserverAndControllerOve_P.Internal_4_4_C*
      LabB_ObserverAndControlle_DWork.Internal_4_4_DSTATE;
  }

  /* Sum: '<S7>/Sum4' */
  rtb_TmpSignalConversionAtGain_0 = ((rtb_Sum1 + rtb_Sum2_p) + rtb_Sum3) +
    rtb_Internal_3_2;

  /* DiscreteStateSpace: '<S8>/Internal_1_1' */
  {
    rtb_Sum1 = LabB_ObserverAndControllerOve_P.Internal_1_1_C_h*
      LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE_m;
  }

  /* DiscreteStateSpace: '<S8>/Internal_1_2' */
  {
    rtb_Sum2_p = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_1_3' */
  {
    rtb_Sum3 = 0.0;
  }

  /* Sum: '<S8>/Sum1' */
  rtb_Sum1 = (rtb_Sum1 + rtb_Sum2_p) + rtb_Sum3;

  /* DiscreteStateSpace: '<S8>/Internal_2_1' */
  {
    rtb_Sum2_p = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_2_2' */
  {
    rtb_Sum3 = LabB_ObserverAndControllerOve_P.Internal_2_2_C_p*
      LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE_p;
  }

  /* DiscreteStateSpace: '<S8>/Internal_2_3' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* Sum: '<S8>/Sum2' */
  rtb_Sum2_p = (rtb_Sum2_p + rtb_Sum3) + rtb_Internal_3_2;

  /* DiscreteStateSpace: '<S8>/Internal_3_1' */
  {
    rtb_Sum3 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_3_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_3_3' */
  {
    rtb_SaturationVsupplytoVsupply =
      LabB_ObserverAndControllerOve_P.Internal_3_3_C_h*
      LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE_o;
  }

  /* Sum: '<S8>/Sum3' */
  rtb_Sum3 = (rtb_Sum3 + rtb_Internal_3_2) + rtb_SaturationVsupplytoVsupply;

  /* Sum: '<S4>/Add1' incorporates:
   *  Gain: '<S4>/Gain4'
   */
  rtb_Add1_idx_0 = LabB_ObserverAndControllerOve_P.Md5[0] *
    LabB_ObserverAndControllerOve_B.converttometers + rtb_Sum1;
  rtb_Add1_idx_1 = LabB_ObserverAndControllerOve_P.Md5[1] *
    LabB_ObserverAndControllerOve_B.converttometers + rtb_Sum2_p;
  rtb_Add1_idx_2 = LabB_ObserverAndControllerOve_P.Md5[2] *
    LabB_ObserverAndControllerOve_B.converttometers + rtb_Sum3;

  /* Sum: '<S4>/Add2' incorporates:
   *  Gain: '<S4>/Gain5'
   *  Gain: '<S4>/Gain6'
   */
  for (i = 0; i < 4; i++) {
    LabB_ObserverAndControllerOve_B.Add2[i] =
      ((LabB_ObserverAndControllerOve_P.Md7[i + 4] * rtb_Add1_idx_1 +
        LabB_ObserverAndControllerOve_P.Md7[i] * rtb_Add1_idx_0) +
       LabB_ObserverAndControllerOve_P.Md7[i + 8] * rtb_Add1_idx_2) +
      LabB_ObserverAndControllerOve_P.Md6[i] *
      LabB_ObserverAndControllerOve_B.converttometers;
  }

  /* End of Sum: '<S4>/Add2' */

  /* ManualSwitch: '<S4>/Manual Switch1' incorporates:
   *  ManualSwitch: '<S4>/Manual Switch'
   *  Sum: '<S5>/Diff'
   *  Sum: '<S6>/Diff'
   *  UnitDelay: '<S5>/UD'
   *  UnitDelay: '<S6>/UD'
   *
   * Block description for '<S5>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S6>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  if (LabB_ObserverAndControllerOve_P.ManualSwitch1_CurrentSetting == 1) {
    rtb_Gain8_idx_0 = LabB_ObserverAndControllerOve_B.converttometers;
    rtb_Gain8_idx_1 = LabB_ObserverAndControllerOve_B.TSamp -
      LabB_ObserverAndControlle_DWork.UD_DSTATE;
    rtb_Gain8_idx_2 =
      LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr;
    rtb_Gain8_idx_3 = LabB_ObserverAndControllerOve_B.TSamp_n -
      LabB_ObserverAndControlle_DWork.UD_DSTATE_o;
  } else if (LabB_ObserverAndControllerOve_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S4>/Manual Switch' incorporates:
     *  SignalConversion generated from: '<S4>/Gain10'
     *  Sum: '<S7>/Sum2'
     *  Sum: '<S7>/Sum4'
     */
    rtb_Gain8_idx_0 = LabB_ObserverAndControllerOve_B.Sum1;
    rtb_Gain8_idx_1 = LabB_ObserverAndControllerOve_B.Sum2;
    rtb_Gain8_idx_2 = LabB_ObserverAndControllerOve_B.Sum3;
    rtb_Gain8_idx_3 = rtb_TmpSignalConversionAtGain_0;
  } else {
    rtb_Gain8_idx_0 = LabB_ObserverAndControllerOve_B.Add2[0];
    rtb_Gain8_idx_1 = LabB_ObserverAndControllerOve_B.Add2[1];
    rtb_Gain8_idx_2 = LabB_ObserverAndControllerOve_B.Add2[2];
    rtb_Gain8_idx_3 = LabB_ObserverAndControllerOve_B.Add2[3];
  }

  /* End of ManualSwitch: '<S4>/Manual Switch1' */

  /* Gain: '<S1>/controller' */
  rtb_SaturationVsupplytoVsupply = ((LabB_ObserverAndControllerOve_P.Kd[0] *
    rtb_Gain8_idx_0 + LabB_ObserverAndControllerOve_P.Kd[1] * rtb_Gain8_idx_1) +
    LabB_ObserverAndControllerOve_P.Kd[2] * rtb_Gain8_idx_2) +
    LabB_ObserverAndControllerOve_P.Kd[3] * rtb_Gain8_idx_3;

  /* Product: '<S1>/Product1' incorporates:
   *  Fcn: '<S1>/turn off the motor if the measured angle is greater than X degrees'
   */
  LabB_ObserverAndControllerOve_B.Product1 = (real32_T)((real32_T)fabs
    (LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr) < 0.75F) *
    rtb_SaturationVsupplytoVsupply;

  /* Sum: '<S4>/Add' incorporates:
   *  Gain: '<S4>/Gain'
   *  Gain: '<S4>/Gain1'
   *  Gain: '<S4>/Gain2'
   *  Gain: '<S4>/Gain3'
   */
  for (i = 0; i < 3; i++) {
    LabB_ObserverAndControllerOve_B.Add[i] =
      ((LabB_ObserverAndControllerOve_P.Md1[i + 3] * rtb_Add1_idx_1 +
        LabB_ObserverAndControllerOve_P.Md1[i] * rtb_Add1_idx_0) +
       LabB_ObserverAndControllerOve_P.Md1[i + 6] * rtb_Add1_idx_2) +
      ((LabB_ObserverAndControllerOve_P.Md4[i] *
        LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr +
        LabB_ObserverAndControllerOve_P.Md3[i] *
        LabB_ObserverAndControllerOve_B.converttometers) +
       LabB_ObserverAndControllerOve_P.Md2[i] *
       LabB_ObserverAndControllerOve_B.Product1);
  }

  /* End of Sum: '<S4>/Add' */

  /* Gain: '<S4>/Gain10' incorporates:
   *  SignalConversion generated from: '<S4>/Gain10'
   *  Sum: '<S7>/Sum2'
   *  Sum: '<S7>/Sum4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Add1_idx_0 = LabB_ObserverAndControllerOve_P.Cd[i + 6] *
      rtb_TmpSignalConversionAtGain_0 + (LabB_ObserverAndControllerOve_P.Cd[i +
      4] * LabB_ObserverAndControllerOve_B.Sum3 +
      (LabB_ObserverAndControllerOve_P.Cd[i + 2] *
       LabB_ObserverAndControllerOve_B.Sum2 +
       LabB_ObserverAndControllerOve_P.Cd[i] *
       LabB_ObserverAndControllerOve_B.Sum1));
    LabB_ObserverAndControllerOve_B.Sum_h[i] = rtb_Add1_idx_0;
  }

  /* End of Gain: '<S4>/Gain10' */

  /* Sum: '<S4>/Sum' */
  rtb_Add1_idx_1 = LabB_ObserverAndControllerOve_B.converttometers -
    LabB_ObserverAndControllerOve_B.Sum_h[0];
  rtb_Add1_idx_2 =
    LabB_ObserverAndControllerOve_B.DiscreteTimeIntegratorconvertfr -
    LabB_ObserverAndControllerOve_B.Sum_h[1];
  for (i = 0; i < 4; i++) {
    /* Gain: '<S4>/Gain7' incorporates:
     *  SignalConversion generated from: '<S4>/Gain10'
     *  Sum: '<S7>/Sum2'
     *  Sum: '<S7>/Sum4'
     */
    rtb_Add1_idx_0 = LabB_ObserverAndControllerOve_P.Ad[i + 12] *
      rtb_TmpSignalConversionAtGain_0 + (LabB_ObserverAndControllerOve_P.Ad[i +
      8] * LabB_ObserverAndControllerOve_B.Sum3 +
      (LabB_ObserverAndControllerOve_P.Ad[i + 4] *
       LabB_ObserverAndControllerOve_B.Sum2 +
       LabB_ObserverAndControllerOve_P.Ad[i] *
       LabB_ObserverAndControllerOve_B.Sum1));

    /* Sum: '<S4>/Add3' incorporates:
     *  Gain: '<S4>/Gain8'
     *  Gain: '<S4>/Gain9'
     *  Sum: '<S4>/Sum'
     */
    LabB_ObserverAndControllerOve_B.Add3[i] =
      (LabB_ObserverAndControllerOve_P.Bd[i] *
       LabB_ObserverAndControllerOve_B.Product1 +
       (LabB_ObserverAndControllerOve_P.Ld[i + 4] * rtb_Add1_idx_2 +
        LabB_ObserverAndControllerOve_P.Ld[i] * rtb_Add1_idx_1)) +
      rtb_Add1_idx_0;
  }

  /* MATLABSystem: '<S3>/Gyroscope' */
  MPU6050Gyro_Read(LabB_ObserverAndControllerOve_B.out);

  /* DataTypeConversion: '<S3>/Data Type  Conversion1' incorporates:
   *  MATLABSystem: '<S3>/Gyroscope'
   */
  rtb_SaturationVsupplytoVsupply = LabB_ObserverAndControllerOve_B.out[0];

  /* Sum: '<S2>/Sum' incorporates:
   *  Constant: '<S2>/gyro bias'
   */
  LabB_ObserverAndControllerOve_B.Sum2 = rtb_SaturationVsupplytoVsupply -
    LabB_ObserverAndControllerOve_P.fGyroBias;

  /* MATLABSystem: '<S38>/Digital Output1' incorporates:
   *  Constant: '<S40>/Constant'
   *  RelationalOperator: '<S40>/Compare'
   */
  writeDigitalPin(8, (uint8_T)(LabB_ObserverAndControllerOve_B.Product1 <
    LabB_ObserverAndControllerOve_P.Constant_Value));

  /* Saturate: '<S38>/Saturation -Vsupply to Vsupply' */
  if (LabB_ObserverAndControllerOve_B.Product1 >
      LabB_ObserverAndControllerOve_P.M1V4LeftMotorDriverPWM6D8FST_Vs) {
    rtb_SaturationVsupplytoVsupply =
      LabB_ObserverAndControllerOve_P.M1V4LeftMotorDriverPWM6D8FST_Vs;
  } else if (LabB_ObserverAndControllerOve_B.Product1 <
             LabB_ObserverAndControllerOve_P.SaturationVsupplytoVsupply_Lowe) {
    rtb_SaturationVsupplytoVsupply =
      LabB_ObserverAndControllerOve_P.SaturationVsupplytoVsupply_Lowe;
  } else {
    rtb_SaturationVsupplytoVsupply = LabB_ObserverAndControllerOve_B.Product1;
  }

  /* End of Saturate: '<S38>/Saturation -Vsupply to Vsupply' */

  /* MATLABSystem: '<S38>/PWM' */
  obj = &LabB_ObserverAndControlle_DWork.obj_f;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabB_ObserverAndControlle_DWork.obj_f.PinPWM);

  /* Gain: '<S38>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  rtb_Add1_idx_0 = (real32_T)floor
    (LabB_ObserverAndControllerOve_P.conversiontodutycycleconverttou *
     rtb_SaturationVsupplytoVsupply);
  if (rtIsNaNF(rtb_Add1_idx_0) || rtIsInfF(rtb_Add1_idx_0)) {
    rtb_Add1_idx_0 = 0.0F;
  } else {
    rtb_Add1_idx_0 = (real32_T)fmod(rtb_Add1_idx_0, 256.0);
  }

  /* MATLABSystem: '<S38>/PWM' incorporates:
   *  Gain: '<S38>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_ObserverAndControlle_DWork.obj_f.MW_PWM_HANDLE,
                      (uint8_T)(rtb_Add1_idx_0 < 0.0F ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_Add1_idx_0 : (int16_T)(uint8_T)rtb_Add1_idx_0));

  /* MATLABSystem: '<S39>/Digital Output1' incorporates:
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S41>/Compare'
   */
  writeDigitalPin(5, (uint8_T)(LabB_ObserverAndControllerOve_B.Product1 <
    LabB_ObserverAndControllerOve_P.Constant_Value_c));

  /* Saturate: '<S39>/Saturation -Vsupply to Vsupply' */
  if (LabB_ObserverAndControllerOve_B.Product1 >
      LabB_ObserverAndControllerOve_P.M1V4MiddleMotorDriverPWM2D5FST_) {
    rtb_SaturationVsupplytoVsupply =
      LabB_ObserverAndControllerOve_P.M1V4MiddleMotorDriverPWM2D5FST_;
  } else if (LabB_ObserverAndControllerOve_B.Product1 <
             LabB_ObserverAndControllerOve_P.SaturationVsupplytoVsupply_Lo_g) {
    rtb_SaturationVsupplytoVsupply =
      LabB_ObserverAndControllerOve_P.SaturationVsupplytoVsupply_Lo_g;
  } else {
    rtb_SaturationVsupplytoVsupply = LabB_ObserverAndControllerOve_B.Product1;
  }

  /* End of Saturate: '<S39>/Saturation -Vsupply to Vsupply' */

  /* MATLABSystem: '<S39>/PWM' */
  obj = &LabB_ObserverAndControlle_DWork.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabB_ObserverAndControlle_DWork.obj.PinPWM);

  /* Gain: '<S39>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  rtb_Add1_idx_0 = (real32_T)floor
    (LabB_ObserverAndControllerOve_P.conversiontodutycycleconvertt_b *
     rtb_SaturationVsupplytoVsupply);
  if (rtIsNaNF(rtb_Add1_idx_0) || rtIsInfF(rtb_Add1_idx_0)) {
    rtb_Add1_idx_0 = 0.0F;
  } else {
    rtb_Add1_idx_0 = (real32_T)fmod(rtb_Add1_idx_0, 256.0);
  }

  /* MATLABSystem: '<S39>/PWM' incorporates:
   *  Gain: '<S39>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabB_ObserverAndControlle_DWork.obj.MW_PWM_HANDLE,
                      (uint8_T)(rtb_Add1_idx_0 < 0.0F ? (int16_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_Add1_idx_0 : (int16_T)(uint8_T)rtb_Add1_idx_0));

  /* Update for UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  LabB_ObserverAndControlle_DWork.UD_DSTATE =
    LabB_ObserverAndControllerOve_B.TSamp;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' incorporates:
   *  Gain: '<S2>/convert to radians//sec'
   */
  LabB_ObserverAndControlle_DWork.DiscreteTimeIntegratorconvertfr +=
    LabB_ObserverAndControllerOve_P.converttoradianssec_Gain *
    LabB_ObserverAndControllerOve_B.Sum2 *
    LabB_ObserverAndControllerOve_P.DiscreteTimeIntegratorconvertfr;

  /* Update for UnitDelay: '<S6>/UD'
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  LabB_ObserverAndControlle_DWork.UD_DSTATE_o =
    LabB_ObserverAndControllerOve_B.TSamp_n;

  /* Update for DiscreteStateSpace: '<S7>/Internal_1_1' */
  {
    LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE =
      LabB_ObserverAndControllerOve_B.Add3[0] +
      (LabB_ObserverAndControllerOve_P.Internal_1_1_A)*
      LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S7>/Internal_2_2' */
  {
    LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE =
      LabB_ObserverAndControllerOve_B.Add3[1] +
      (LabB_ObserverAndControllerOve_P.Internal_2_2_A)*
      LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S7>/Internal_3_3' */
  {
    LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE =
      LabB_ObserverAndControllerOve_B.Add3[2] +
      (LabB_ObserverAndControllerOve_P.Internal_3_3_A)*
      LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S7>/Internal_4_4' */
  {
    LabB_ObserverAndControlle_DWork.Internal_4_4_DSTATE =
      LabB_ObserverAndControllerOve_B.Add3[3] +
      (LabB_ObserverAndControllerOve_P.Internal_4_4_A)*
      LabB_ObserverAndControlle_DWork.Internal_4_4_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_1_1' */
  {
    LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE_m =
      LabB_ObserverAndControllerOve_B.Add[0] +
      (LabB_ObserverAndControllerOve_P.Internal_1_1_A_m)*
      LabB_ObserverAndControlle_DWork.Internal_1_1_DSTATE_m;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_2_2' */
  {
    LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE_p =
      LabB_ObserverAndControllerOve_B.Add[1] +
      (LabB_ObserverAndControllerOve_P.Internal_2_2_A_o)*
      LabB_ObserverAndControlle_DWork.Internal_2_2_DSTATE_p;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_3_3' */
  {
    LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE_o =
      LabB_ObserverAndControllerOve_B.Add[2] +
      (LabB_ObserverAndControllerOve_P.Internal_3_3_A_a)*
      LabB_ObserverAndControlle_DWork.Internal_3_3_DSTATE_o;
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, (real_T)LabB_ObserverAndControllerOv_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(LabB_ObserverAndControllerOv_M)!=-1) &&
        !((rtmGetTFinal(LabB_ObserverAndControllerOv_M)-
           LabB_ObserverAndControllerOv_M->Timing.taskTime0) >
          LabB_ObserverAndControllerOv_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabB_ObserverAndControllerOv_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabB_ObserverAndControllerOv_M)) {
      rtmSetErrorStatus(LabB_ObserverAndControllerOv_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_ObserverAndControllerOv_M->Timing.taskTime0 =
    (++LabB_ObserverAndControllerOv_M->Timing.clockTick0) *
    LabB_ObserverAndControllerOv_M->Timing.stepSize0;
}

/* Model initialize function */
void LabB_ObserverAndControllerOverRobot_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LabB_ObserverAndControllerOv_M, 0,
                sizeof(RT_MODEL_LabB_ObserverAndContro));
  rtmSetTFinal(LabB_ObserverAndControllerOv_M, -1);
  LabB_ObserverAndControllerOv_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LabB_ObserverAndControllerOv_M->Sizes.checksums[0] = (3182484813U);
  LabB_ObserverAndControllerOv_M->Sizes.checksums[1] = (2600611911U);
  LabB_ObserverAndControllerOv_M->Sizes.checksums[2] = (414518108U);
  LabB_ObserverAndControllerOv_M->Sizes.checksums[3] = (4160201380U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    LabB_ObserverAndControllerOv_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(LabB_ObserverAndControllerOv_M->extModeInfo,
      &LabB_ObserverAndControllerOv_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_ObserverAndControllerOv_M->extModeInfo,
                        LabB_ObserverAndControllerOv_M->Sizes.checksums);
    rteiSetTPtr(LabB_ObserverAndControllerOv_M->extModeInfo, rtmGetTPtr
                (LabB_ObserverAndControllerOv_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_ObserverAndControllerOve_B), 0,
                sizeof(BlockIO_LabB_ObserverAndControl));

  /* states (dwork) */
  (void) memset((void *)&LabB_ObserverAndControlle_DWork, 0,
                sizeof(D_Work_LabB_ObserverAndControll));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabB_ObserverAndControllerOv_M->SpecialInfo.mappingInfo = (&dtInfo);
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
    LabB_ObserverAndControlle_DWork.obj_g.matlabCodegenIsDeleted = false;
    LabB_ObserverAndControlle_DWork.obj_g.isInitialized = 1L;
    enc_init(1.0, 19.0, 18.0);
    LabB_ObserverAndControlle_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Gyroscope' */
    LabB_ObserverAndControlle_DWork.obj_fy.matlabCodegenIsDeleted = false;
    LabB_ObserverAndControlle_DWork.obj_fy.isInitialized = 1L;
    MPU6050Gyro_Init(0.0);
    LabB_ObserverAndControlle_DWork.obj_fy.isSetupComplete = true;

    /* Start for MATLABSystem: '<S38>/Digital Output1' */
    LabB_ObserverAndControlle_DWork.obj_j.matlabCodegenIsDeleted = false;
    LabB_ObserverAndControlle_DWork.obj_j.isInitialized = 1L;
    digitalIOSetup(8, 1);
    LabB_ObserverAndControlle_DWork.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<S38>/PWM' */
    LabB_ObserverAndControlle_DWork.obj_f.matlabCodegenIsDeleted = true;
    LabB_ObserverAndControlle_DWork.obj_f.isInitialized = 0L;
    LabB_ObserverAndControlle_DWork.obj_f.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&LabB_ObserverAndControlle_DWork.obj_f,
      &LabB_ObserverAndControlle_DWork.gobj_0_p);
    obj = &LabB_ObserverAndControlle_DWork.obj_f;
    LabB_ObserverAndControlle_DWork.obj_f.isSetupComplete = false;
    LabB_ObserverAndControlle_DWork.obj_f.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open
      (LabB_ObserverAndControlle_DWork.obj_f.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabB_ObserverAndControlle_DWork.obj_f.PinPWM);
    MW_PWM_Start(LabB_ObserverAndControlle_DWork.obj_f.MW_PWM_HANDLE);
    LabB_ObserverAndControlle_DWork.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<S39>/Digital Output1' */
    LabB_ObserverAndControlle_DWork.obj_n.matlabCodegenIsDeleted = false;
    LabB_ObserverAndControlle_DWork.obj_n.isInitialized = 1L;
    digitalIOSetup(5, 1);
    LabB_ObserverAndControlle_DWork.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<S39>/PWM' */
    LabB_ObserverAndControlle_DWork.obj.matlabCodegenIsDeleted = true;
    LabB_ObserverAndControlle_DWork.obj.isInitialized = 0L;
    LabB_ObserverAndControlle_DWork.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_a(&LabB_ObserverAndControlle_DWork.obj,
      &LabB_ObserverAndControlle_DWork.gobj_0);
    obj = &LabB_ObserverAndControlle_DWork.obj;
    LabB_ObserverAndControlle_DWork.obj.isSetupComplete = false;
    LabB_ObserverAndControlle_DWork.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabB_ObserverAndControlle_DWork.obj.PinPWM,
      0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabB_ObserverAndControlle_DWork.obj.PinPWM);
    MW_PWM_Start(LabB_ObserverAndControlle_DWork.obj.MW_PWM_HANDLE);
    LabB_ObserverAndControlle_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for UnitDelay: '<S5>/UD'
     *
     * Block description for '<S5>/UD':
     *
     *  Store in Global RAM
     */
    LabB_ObserverAndControlle_DWork.UD_DSTATE =
      LabB_ObserverAndControllerOve_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
    LabB_ObserverAndControlle_DWork.DiscreteTimeIntegratorconvertfr =
      LabB_ObserverAndControllerOve_P.DiscreteTimeIntegratorconvert_e;

    /* InitializeConditions for UnitDelay: '<S6>/UD'
     *
     * Block description for '<S6>/UD':
     *
     *  Store in Global RAM
     */
    LabB_ObserverAndControlle_DWork.UD_DSTATE_o =
      LabB_ObserverAndControllerOve_P.DiscreteDerivative_ICPrevScal_n;
  }
}

/* Model terminate function */
void LabB_ObserverAndControllerOverRobot_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Encoder' */
  matlabCodegenHandle_matlabCod_a(&LabB_ObserverAndControlle_DWork.obj_g);

  /* Terminate for MATLABSystem: '<S3>/Gyroscope' */
  matlabCodegenHandle_matlabCodeg(&LabB_ObserverAndControlle_DWork.obj_fy);

  /* Terminate for MATLABSystem: '<S38>/Digital Output1' */
  matlabCodegenHandle_matlabC_aav(&LabB_ObserverAndControlle_DWork.obj_j);

  /* Terminate for MATLABSystem: '<S38>/PWM' */
  matlabCodegenHandle_matlabCo_aa(&LabB_ObserverAndControlle_DWork.obj_f);

  /* Terminate for MATLABSystem: '<S39>/Digital Output1' */
  matlabCodegenHandle_matlabC_aav(&LabB_ObserverAndControlle_DWork.obj_n);

  /* Terminate for MATLABSystem: '<S39>/PWM' */
  matlabCodegenHandle_matlabCo_aa(&LabB_ObserverAndControlle_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
