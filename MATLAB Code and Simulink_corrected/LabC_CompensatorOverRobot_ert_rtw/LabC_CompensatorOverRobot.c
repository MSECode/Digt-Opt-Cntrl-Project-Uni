/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot.c
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 1.716
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Dec  3 23:01:00 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabC_CompensatorOverRobot.h"
#include "LabC_CompensatorOverRobot_private.h"

/* Block signals (default storage) */
BlockIO_LabC_CompensatorOverRob LabC_CompensatorOverRobot_B;

/* Block states (default storage) */
D_Work_LabC_CompensatorOverRobo LabC_CompensatorOverRobot_DWork;

/* Real-time model */
RT_MODEL_LabC_CompensatorOverRo LabC_CompensatorOverRobot_M_;
RT_MODEL_LabC_CompensatorOverRo *const LabC_CompensatorOverRobot_M =
  &LabC_CompensatorOverRobot_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCo_o2(Encoder_arduino_LabC_Compensato *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_o *obj);
static void matlabCodegenHandle_matlabCod_o(soMPU6050Gyro_LabC_CompensatorO *obj);
static void matlabCodegenHandle_matlab_o21a(codertarget_arduinobase_blocks_ *obj);
static void LabC_Compens_SystemCore_release(codertarget_arduinobase_interna *obj);
static void LabC_Comp_SystemCore_delete_o21(codertarget_arduinobase_interna *obj);
static void matlabCodegenHandle_matlabC_o21(codertarget_arduinobase_interna *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void arduino_PWMOutput_set_pinNumb_o(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void matlabCodegenHandle_matlabCo_o2(Encoder_arduino_LabC_Compensato *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_o *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_o(soMPU6050Gyro_LabC_CompensatorO *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlab_o21a(codertarget_arduinobase_blocks_ *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void LabC_Compens_SystemCore_release(codertarget_arduinobase_interna *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void LabC_Comp_SystemCore_delete_o21(codertarget_arduinobase_interna *obj)
{
  LabC_Compens_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabC_o21(codertarget_arduinobase_interna *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LabC_Comp_SystemCore_delete_o21(obj);
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

static void arduino_PWMOutput_set_pinNumb_o(codertarget_arduinobase_interna *obj,
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
void LabC_CompensatorOverRobot_step(void)
{
  /* local block i/o variables */
  real32_T rtb_TSamp;
  real32_T rtb_TSamp_n;
  real32_T rtb_converttoradianssec;
  real32_T rtb_Internal_4_4;
  real32_T rtb_Internal_3_3;
  real32_T rtb_Internal_3_2;
  real32_T rtb_DataTypeConversion1;
  codertarget_arduinobase_interna *obj;
  uint16_T rtb_DataTypeConversion6;
  uint16_T rtb_DataTypeConversion4;
  int16_T i;
  real32_T rtb_Add1_idx_1;
  real32_T rtb_Add1_idx_2;
  real32_T Sum2_tmp;
  real32_T tmp;
  real32_T tmp_0;

  /* FromWorkspace: '<S4>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = LabC_CompensatorOverRobot_DWork.FromWs_IWORK.PrevIndex;
    real_T t = LabC_CompensatorOverRobot_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[5]) {
      currTimeIndex = 4;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    LabC_CompensatorOverRobot_DWork.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          LabC_CompensatorOverRobot_B.FromWs = pDataValues[currTimeIndex];
        } else {
          LabC_CompensatorOverRobot_B.FromWs = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        LabC_CompensatorOverRobot_B.FromWs = (real_T) rtInterpolate(d1, d2, f1,
          f2);
        pDataValues += 6;
      }
    }
  }

  /* Gain: '<S1>/Gain3' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   */
  LabC_CompensatorOverRobot_B.Gain3 = LabC_CompensatorOverRobot_P.Nxd *
    (real32_T)LabC_CompensatorOverRobot_B.FromWs;

  /* MATLABSystem: '<S3>/Encoder' */
  LabC_CompensatorOverRobot_B.rtb_Encoder_m = enc_output(1.0);

  /* Gain: '<S2>/convert to meters' incorporates:
   *  DataTypeConversion: '<S3>/Data Type  Conversion2'
   *  Gain: '<S2>/convert to  radians'
   *  MATLABSystem: '<S3>/Encoder'
   */
  LabC_CompensatorOverRobot_B.converttometers =
    LabC_CompensatorOverRobot_P.converttoradians_Gain * (real32_T)
    LabC_CompensatorOverRobot_B.rtb_Encoder_m *
    LabC_CompensatorOverRobot_P.fWheelRadius;

  /* SampleTimeMath: '<S6>/TSamp'
   *
   * About '<S6>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = LabC_CompensatorOverRobot_B.converttometers *
    LabC_CompensatorOverRobot_P.TSamp_WtEt;

  /* SampleTimeMath: '<S7>/TSamp' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   *
   * About '<S7>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_n = LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr *
    LabC_CompensatorOverRobot_P.TSamp_WtEt_j;

  /* DiscreteStateSpace: '<S8>/Internal_1_1' */
  {
    rtb_Internal_4_4 = LabC_CompensatorOverRobot_P.Internal_1_1_C*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE;
  }

  /* DiscreteStateSpace: '<S8>/Internal_1_2' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_1_3' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_1_4' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* Sum: '<S8>/Sum1' */
  LabC_CompensatorOverRobot_B.Sum1 = ((rtb_Internal_4_4 + rtb_Internal_3_3) +
    rtb_Internal_3_2) + rtb_DataTypeConversion1;

  /* DiscreteStateSpace: '<S8>/Internal_2_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_2_2' */
  {
    rtb_Internal_3_2 = LabC_CompensatorOverRobot_P.Internal_2_2_C*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE;
  }

  /* DiscreteStateSpace: '<S8>/Internal_2_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_2_4' */
  {
    rtb_Internal_4_4 = 0.0;
  }

  /* Sum: '<S8>/Sum2' */
  Sum2_tmp = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) + rtb_Internal_3_3) +
    rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S8>/Internal_3_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_3_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_3_3' */
  {
    rtb_Internal_3_3 = LabC_CompensatorOverRobot_P.Internal_3_3_C*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE;
  }

  /* DiscreteStateSpace: '<S8>/Internal_3_4' */
  {
    rtb_Internal_4_4 = 0.0;
  }

  /* Sum: '<S8>/Sum3' */
  tmp = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) + rtb_Internal_3_3) +
    rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S8>/Internal_4_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_4_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_4_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S8>/Internal_4_4' */
  {
    rtb_Internal_4_4 = LabC_CompensatorOverRobot_P.Internal_4_4_C*
      LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE;
  }

  /* Sum: '<S8>/Sum4' */
  tmp_0 = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) + rtb_Internal_3_3) +
    rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S9>/Internal_1_1' */
  {
    rtb_DataTypeConversion1 = LabC_CompensatorOverRobot_P.Internal_1_1_C_i*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n;
  }

  /* DiscreteStateSpace: '<S9>/Internal_1_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S9>/Internal_1_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* Sum: '<S9>/Sum1' */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (rtb_DataTypeConversion1 +
    rtb_Internal_3_2) + rtb_Internal_3_3;

  /* DiscreteStateSpace: '<S9>/Internal_2_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S9>/Internal_2_2' */
  {
    rtb_Internal_3_2 = LabC_CompensatorOverRobot_P.Internal_2_2_C_n*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o;
  }

  /* DiscreteStateSpace: '<S9>/Internal_2_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* Sum: '<S9>/Sum2' */
  rtb_Add1_idx_1 = (rtb_DataTypeConversion1 + rtb_Internal_3_2) +
    rtb_Internal_3_3;

  /* DiscreteStateSpace: '<S9>/Internal_3_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S9>/Internal_3_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S9>/Internal_3_3' */
  {
    rtb_Internal_3_3 = LabC_CompensatorOverRobot_P.Internal_3_3_C_i*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o;
  }

  /* Sum: '<S5>/Add1' incorporates:
   *  Gain: '<S5>/Gain4'
   *  Sum: '<S9>/Sum1'
   *  Sum: '<S9>/Sum2'
   *  Sum: '<S9>/Sum3'
   */
  LabC_CompensatorOverRobot_B.rtb_Add1_idx_0 = LabC_CompensatorOverRobot_P.Md5[0]
    * LabC_CompensatorOverRobot_B.converttometers +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;
  rtb_Add1_idx_1 += LabC_CompensatorOverRobot_P.Md5[1] *
    LabC_CompensatorOverRobot_B.converttometers;
  rtb_Add1_idx_2 = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) +
                    rtb_Internal_3_3) + LabC_CompensatorOverRobot_P.Md5[2] *
    LabC_CompensatorOverRobot_B.converttometers;

  /* Sum: '<S5>/Add2' incorporates:
   *  Gain: '<S5>/Gain5'
   *  Gain: '<S5>/Gain6'
   */
  for (i = 0; i < 4; i++) {
    LabC_CompensatorOverRobot_B.Add2[i] = ((LabC_CompensatorOverRobot_P.Md7[i +
      4] * rtb_Add1_idx_1 + LabC_CompensatorOverRobot_P.Md7[i] *
      LabC_CompensatorOverRobot_B.rtb_Add1_idx_0) +
      LabC_CompensatorOverRobot_P.Md7[i + 8] * rtb_Add1_idx_2) +
      LabC_CompensatorOverRobot_P.Md6[i] *
      LabC_CompensatorOverRobot_B.converttometers;
  }

  /* End of Sum: '<S5>/Add2' */

  /* ManualSwitch: '<S5>/Manual Switch1' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   *  ManualSwitch: '<S5>/Manual Switch'
   *  Sum: '<S6>/Diff'
   *  Sum: '<S7>/Diff'
   *  UnitDelay: '<S6>/UD'
   *  UnitDelay: '<S7>/UD'
   *
   * Block description for '<S6>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S7>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  if (LabC_CompensatorOverRobot_P.ManualSwitch1_CurrentSetting == 1) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.converttometers;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 = rtb_TSamp -
      LabC_CompensatorOverRobot_DWork.UD_DSTATE;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 =
      LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_3 = rtb_TSamp_n -
      LabC_CompensatorOverRobot_DWork.UD_DSTATE_o;
  } else if (LabC_CompensatorOverRobot_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S5>/Manual Switch' incorporates:
     *  Sum: '<S8>/Sum2'
     *  Sum: '<S8>/Sum3'
     *  Sum: '<S8>/Sum4'
     */
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.Sum1;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 = Sum2_tmp;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 = tmp;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_3 = tmp_0;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.Add2[0];
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 =
      LabC_CompensatorOverRobot_B.Add2[1];
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 =
      LabC_CompensatorOverRobot_B.Add2[2];
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_3 =
      LabC_CompensatorOverRobot_B.Add2[3];
  }

  /* End of ManualSwitch: '<S5>/Manual Switch1' */

  /* Product: '<S1>/Product1' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   *  Fcn: '<S1>/turn off the motor if the measured angle is greater than X degrees'
   *  Gain: '<S1>/Gain4'
   *  Gain: '<S1>/controller'
   *  Sum: '<S1>/Sum'
   *  Sum: '<S1>/Sum1'
   */
  LabC_CompensatorOverRobot_B.Gain3 = (((((LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) *
    LabC_CompensatorOverRobot_P.Kd[0] + (LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1) *
    LabC_CompensatorOverRobot_P.Kd[1]) + (LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2) *
    LabC_CompensatorOverRobot_P.Kd[2]) + (LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_3) *
    LabC_CompensatorOverRobot_P.Kd[3]) + LabC_CompensatorOverRobot_P.Gain4_Gain *
    (real32_T)LabC_CompensatorOverRobot_B.FromWs) * (real32_T)((real32_T)fabs
    (LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr) < 0.75F);

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Fcn: '<S10>/Fcn'
   */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    ((LabC_CompensatorOverRobot_B.Gain3 + 10.0F) * 3276.8F);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion6 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  DataTypeConversion: '<S40>/Extract Desired Bits'
   *  DataTypeConversion: '<S41>/Extract Desired Bits'
   */
  LabC_CompensatorOverRobot_B.dataIn[1] = (uint8_T)(rtb_DataTypeConversion6 >> 8);
  LabC_CompensatorOverRobot_B.dataIn[2] = (uint8_T)rtb_DataTypeConversion6;

  /* DataTypeConversion: '<S10>/Data Type Conversion1' incorporates:
   *  Fcn: '<S10>/Fcn1'
   */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    ((LabC_CompensatorOverRobot_B.converttometers + 10.0F) * 3276.8F);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion6 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion1' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  DataTypeConversion: '<S46>/Extract Desired Bits'
   *  DataTypeConversion: '<S47>/Extract Desired Bits'
   */
  LabC_CompensatorOverRobot_B.dataIn[3] = (uint8_T)(rtb_DataTypeConversion6 >> 8);
  LabC_CompensatorOverRobot_B.dataIn[4] = (uint8_T)rtb_DataTypeConversion6;

  /* Fcn: '<S10>/Fcn2' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  rtb_DataTypeConversion1 =
    (LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr + 10.0F) *
    3276.8F;

  /* DataTypeConversion: '<S10>/Data Type Conversion2' */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    (rtb_DataTypeConversion1);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion4 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion2' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  DataTypeConversion: '<S48>/Extract Desired Bits'
   *  DataTypeConversion: '<S49>/Extract Desired Bits'
   */
  LabC_CompensatorOverRobot_B.dataIn[5] = (uint8_T)(rtb_DataTypeConversion4 >> 8);
  LabC_CompensatorOverRobot_B.dataIn[6] = (uint8_T)rtb_DataTypeConversion4;

  /* Fcn: '<S10>/Fcn3' */
  rtb_DataTypeConversion1 = (LabC_CompensatorOverRobot_B.Sum1 + 10.0F) * 3276.8F;

  /* DataTypeConversion: '<S10>/Data Type Conversion3' */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    (rtb_DataTypeConversion1);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion4 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion3' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  DataTypeConversion: '<S50>/Extract Desired Bits'
   *  DataTypeConversion: '<S51>/Extract Desired Bits'
   */
  LabC_CompensatorOverRobot_B.dataIn[7] = (uint8_T)(rtb_DataTypeConversion4 >> 8);
  LabC_CompensatorOverRobot_B.dataIn[8] = (uint8_T)rtb_DataTypeConversion4;

  /* Fcn: '<S10>/Fcn4' incorporates:
   *  Sum: '<S8>/Sum3'
   */
  rtb_DataTypeConversion1 = (tmp + 10.0F) * 3276.8F;

  /* DataTypeConversion: '<S10>/Data Type Conversion4' */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    (rtb_DataTypeConversion1);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion4 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion4' */

  /* DataTypeConversion: '<S10>/Data Type Conversion5' incorporates:
   *  Fcn: '<S10>/Fcn5'
   */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    ((LabC_CompensatorOverRobot_B.Add2[0] + 10.0F) * 3276.8F);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion6 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion5' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  DataTypeConversion: '<S42>/Extract Desired Bits'
   *  DataTypeConversion: '<S43>/Extract Desired Bits'
   */
  LabC_CompensatorOverRobot_B.dataIn[11] = (uint8_T)(rtb_DataTypeConversion6 >>
    8);
  LabC_CompensatorOverRobot_B.dataIn[12] = (uint8_T)rtb_DataTypeConversion6;

  /* DataTypeConversion: '<S10>/Data Type Conversion6' incorporates:
   *  Fcn: '<S10>/Fcn6'
   */
  LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)floor
    ((LabC_CompensatorOverRobot_B.Add2[2] + 10.0F) * 3276.8F);
  if (rtIsNaNF(LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) || rtIsInfF
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0)) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = 0.0F;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 = (real32_T)fmod
      (LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0, 65536.0);
  }

  rtb_DataTypeConversion6 = LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 < 0.0F ?
    (uint16_T)-(int16_T)(uint16_T)-LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 :
    (uint16_T)LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;

  /* End of DataTypeConversion: '<S10>/Data Type Conversion6' */

  /* MATLABSystem: '<S10>/Serial Transmit' incorporates:
   *  Constant: '<S10>/Constant'
   *  DataTypeConversion: '<S44>/Extract Desired Bits'
   *  DataTypeConversion: '<S45>/Extract Desired Bits'
   *  DataTypeConversion: '<S52>/Extract Desired Bits'
   *  DataTypeConversion: '<S53>/Extract Desired Bits'
   */
  if (LabC_CompensatorOverRobot_DWork.obj.Protocol !=
      LabC_CompensatorOverRobot_P.SerialTransmit_Protocol) {
    LabC_CompensatorOverRobot_DWork.obj.Protocol =
      LabC_CompensatorOverRobot_P.SerialTransmit_Protocol;
  }

  LabC_CompensatorOverRobot_B.dataIn[0] =
    LabC_CompensatorOverRobot_P.Constant_Value_i;
  LabC_CompensatorOverRobot_B.dataIn[9] = (uint8_T)(rtb_DataTypeConversion4 >> 8);
  LabC_CompensatorOverRobot_B.dataIn[10] = (uint8_T)rtb_DataTypeConversion4;
  LabC_CompensatorOverRobot_B.dataIn[13] = (uint8_T)(rtb_DataTypeConversion6 >>
    8);
  LabC_CompensatorOverRobot_B.dataIn[14] = (uint8_T)rtb_DataTypeConversion6;
  MW_Serial_write(LabC_CompensatorOverRobot_DWork.obj.port,
                  LabC_CompensatorOverRobot_B.dataIn, 15.0,
                  LabC_CompensatorOverRobot_DWork.obj.dataSizeInBytes,
                  LabC_CompensatorOverRobot_DWork.obj.sendModeEnum,
                  LabC_CompensatorOverRobot_DWork.obj.dataType,
                  LabC_CompensatorOverRobot_DWork.obj.sendFormatEnum, 2.0,
                  '\x00');

  /* Sum: '<S5>/Add' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   *  Gain: '<S5>/Gain'
   *  Gain: '<S5>/Gain1'
   *  Gain: '<S5>/Gain2'
   *  Gain: '<S5>/Gain3'
   */
  for (i = 0; i < 3; i++) {
    LabC_CompensatorOverRobot_B.Add[i] = ((LabC_CompensatorOverRobot_P.Md1[i + 3]
      * rtb_Add1_idx_1 + LabC_CompensatorOverRobot_P.Md1[i] *
      LabC_CompensatorOverRobot_B.rtb_Add1_idx_0) +
      LabC_CompensatorOverRobot_P.Md1[i + 6] * rtb_Add1_idx_2) +
      ((LabC_CompensatorOverRobot_P.Md4[i] *
        LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr +
        LabC_CompensatorOverRobot_P.Md3[i] *
        LabC_CompensatorOverRobot_B.converttometers) +
       LabC_CompensatorOverRobot_P.Md2[i] * LabC_CompensatorOverRobot_B.Gain3);
  }

  /* End of Sum: '<S5>/Add' */

  /* Gain: '<S5>/Gain10' incorporates:
   *  SignalConversion generated from: '<S5>/Gain10'
   *  Sum: '<S8>/Sum2'
   *  Sum: '<S8>/Sum3'
   *  Sum: '<S8>/Sum4'
   */
  for (i = 0; i < 2; i++) {
    LabC_CompensatorOverRobot_B.rtb_Add1_idx_0 =
      LabC_CompensatorOverRobot_P.Cd[i + 6] * tmp_0 +
      (LabC_CompensatorOverRobot_P.Cd[i + 4] * tmp +
       (LabC_CompensatorOverRobot_P.Cd[i + 2] * Sum2_tmp +
        LabC_CompensatorOverRobot_P.Cd[i] * LabC_CompensatorOverRobot_B.Sum1));
    LabC_CompensatorOverRobot_B.Gain10[i] =
      LabC_CompensatorOverRobot_B.rtb_Add1_idx_0;
  }

  /* End of Gain: '<S5>/Gain10' */

  /* Sum: '<S5>/Sum' incorporates:
   *  DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
   */
  LabC_CompensatorOverRobot_B.converttometers -=
    LabC_CompensatorOverRobot_B.Gain10[0];
  LabC_CompensatorOverRobot_B.rtb_Add1_idx_0 =
    LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr -
    LabC_CompensatorOverRobot_B.Gain10[1];
  for (i = 0; i < 4; i++) {
    /* Gain: '<S5>/Gain7' incorporates:
     *  SignalConversion generated from: '<S5>/Gain10'
     *  Sum: '<S8>/Sum2'
     *  Sum: '<S8>/Sum3'
     *  Sum: '<S8>/Sum4'
     */
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_P.Ad[i + 12] * tmp_0 +
      (LabC_CompensatorOverRobot_P.Ad[i + 8] * tmp +
       (LabC_CompensatorOverRobot_P.Ad[i + 4] * Sum2_tmp +
        LabC_CompensatorOverRobot_P.Ad[i] * LabC_CompensatorOverRobot_B.Sum1));

    /* Sum: '<S5>/Add3' incorporates:
     *  Gain: '<S5>/Gain8'
     *  Gain: '<S5>/Gain9'
     */
    LabC_CompensatorOverRobot_B.Add3[i] = (LabC_CompensatorOverRobot_P.Bd[i] *
      LabC_CompensatorOverRobot_B.Gain3 + (LabC_CompensatorOverRobot_P.Ld[i + 4]
      * LabC_CompensatorOverRobot_B.rtb_Add1_idx_0 +
      LabC_CompensatorOverRobot_P.Ld[i] *
      LabC_CompensatorOverRobot_B.converttometers)) +
      LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0;
  }

  /* MATLABSystem: '<S3>/Gyroscope' */
  MPU6050Gyro_Read(LabC_CompensatorOverRobot_B.out);

  /* DataTypeConversion: '<S3>/Data Type  Conversion1' incorporates:
   *  MATLABSystem: '<S3>/Gyroscope'
   */
  rtb_DataTypeConversion1 = LabC_CompensatorOverRobot_B.out[0];

  /* Gain: '<S2>/convert to radians//sec' incorporates:
   *  Constant: '<S2>/gyro bias'
   *  Sum: '<S2>/Sum'
   */
  rtb_converttoradianssec = (rtb_DataTypeConversion1 -
    LabC_CompensatorOverRobot_P.fGyroBias) *
    LabC_CompensatorOverRobot_P.converttoradianssec_Gain;

  /* MATLABSystem: '<S54>/Digital Output1' incorporates:
   *  Constant: '<S56>/Constant'
   *  RelationalOperator: '<S56>/Compare'
   */
  writeDigitalPin(8, (uint8_T)(LabC_CompensatorOverRobot_B.Gain3 <
    LabC_CompensatorOverRobot_P.Constant_Value));

  /* MATLABSystem: '<S54>/PWM' */
  obj = &LabC_CompensatorOverRobot_DWork.obj_o;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabC_CompensatorOverRobot_DWork.obj_o.PinPWM);

  /* Saturate: '<S54>/Saturation -Vsupply to Vsupply' */
  if (LabC_CompensatorOverRobot_B.Gain3 >
      LabC_CompensatorOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs) {
    LabC_CompensatorOverRobot_B.Sum1 =
      LabC_CompensatorOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs;
  } else if (LabC_CompensatorOverRobot_B.Gain3 <
             LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lowe) {
    LabC_CompensatorOverRobot_B.Sum1 =
      LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lowe;
  } else {
    LabC_CompensatorOverRobot_B.Sum1 = LabC_CompensatorOverRobot_B.Gain3;
  }

  /* End of Saturate: '<S54>/Saturation -Vsupply to Vsupply' */

  /* Gain: '<S54>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  tmp = (real32_T)floor
    (LabC_CompensatorOverRobot_P.conversiontodutycycleconverttou *
     LabC_CompensatorOverRobot_B.Sum1);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S54>/PWM' incorporates:
   *  Gain: '<S54>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabC_CompensatorOverRobot_DWork.obj_o.MW_PWM_HANDLE,
                      (uint8_T)(tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int16_T)(uint8_T)tmp));

  /* MATLABSystem: '<S55>/Digital Output1' incorporates:
   *  Constant: '<S57>/Constant'
   *  RelationalOperator: '<S57>/Compare'
   */
  writeDigitalPin(5, (uint8_T)(LabC_CompensatorOverRobot_B.Gain3 <
    LabC_CompensatorOverRobot_P.Constant_Value_n));

  /* Saturate: '<S55>/Saturation -Vsupply to Vsupply' */
  if (LabC_CompensatorOverRobot_B.Gain3 >
      LabC_CompensatorOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_) {
    LabC_CompensatorOverRobot_B.Gain3 =
      LabC_CompensatorOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_;
  } else {
    if (LabC_CompensatorOverRobot_B.Gain3 <
        LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lo_g) {
      LabC_CompensatorOverRobot_B.Gain3 =
        LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lo_g;
    }
  }

  /* End of Saturate: '<S55>/Saturation -Vsupply to Vsupply' */

  /* MATLABSystem: '<S55>/PWM' */
  obj = &LabC_CompensatorOverRobot_DWork.obj_a;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabC_CompensatorOverRobot_DWork.obj_a.PinPWM);

  /* Gain: '<S55>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  tmp = (real32_T)floor
    (LabC_CompensatorOverRobot_P.conversiontodutycycleconvertt_d *
     LabC_CompensatorOverRobot_B.Gain3);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S55>/PWM' incorporates:
   *  Gain: '<S55>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabC_CompensatorOverRobot_DWork.obj_a.MW_PWM_HANDLE,
                      (uint8_T)(tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int16_T)(uint8_T)tmp));

  /* Update for UnitDelay: '<S6>/UD'
   *
   * Block description for '<S6>/UD':
   *
   *  Store in Global RAM
   */
  LabC_CompensatorOverRobot_DWork.UD_DSTATE = rtb_TSamp;

  /* Update for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr +=
    LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvertfr *
    rtb_converttoradianssec;

  /* Update for UnitDelay: '<S7>/UD'
   *
   * Block description for '<S7>/UD':
   *
   *  Store in Global RAM
   */
  LabC_CompensatorOverRobot_DWork.UD_DSTATE_o = rtb_TSamp_n;

  /* Update for DiscreteStateSpace: '<S8>/Internal_1_1' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[0] +
      (LabC_CompensatorOverRobot_P.Internal_1_1_A)*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_2_2' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[1] +
      (LabC_CompensatorOverRobot_P.Internal_2_2_A)*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_3_3' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[2] +
      (LabC_CompensatorOverRobot_P.Internal_3_3_A)*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S8>/Internal_4_4' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[3] +
      (LabC_CompensatorOverRobot_P.Internal_4_4_A)*
      LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S9>/Internal_1_1' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n =
      LabC_CompensatorOverRobot_B.Add[0] +
      (LabC_CompensatorOverRobot_P.Internal_1_1_A_e)*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n;
  }

  /* Update for DiscreteStateSpace: '<S9>/Internal_2_2' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o =
      LabC_CompensatorOverRobot_B.Add[1] +
      (LabC_CompensatorOverRobot_P.Internal_2_2_A_k)*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o;
  }

  /* Update for DiscreteStateSpace: '<S9>/Internal_3_3' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o =
      LabC_CompensatorOverRobot_B.Add[2] +
      (LabC_CompensatorOverRobot_P.Internal_3_3_A_g)*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o;
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabC_CompensatorOverRobot_M->Timing.t[0] =
    (++LabC_CompensatorOverRobot_M->Timing.clockTick0) *
    LabC_CompensatorOverRobot_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.005s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    LabC_CompensatorOverRobot_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void LabC_CompensatorOverRobot_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)LabC_CompensatorOverRobot_M, 0,
                sizeof(RT_MODEL_LabC_CompensatorOverRo));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&LabC_CompensatorOverRobot_M->solverInfo,
                          &LabC_CompensatorOverRobot_M->Timing.simTimeStep);
    rtsiSetTPtr(&LabC_CompensatorOverRobot_M->solverInfo, &rtmGetTPtr
                (LabC_CompensatorOverRobot_M));
    rtsiSetStepSizePtr(&LabC_CompensatorOverRobot_M->solverInfo,
                       &LabC_CompensatorOverRobot_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&LabC_CompensatorOverRobot_M->solverInfo,
                          (&rtmGetErrorStatus(LabC_CompensatorOverRobot_M)));
    rtsiSetRTModelPtr(&LabC_CompensatorOverRobot_M->solverInfo,
                      LabC_CompensatorOverRobot_M);
  }

  rtsiSetSimTimeStep(&LabC_CompensatorOverRobot_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&LabC_CompensatorOverRobot_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(LabC_CompensatorOverRobot_M,
             &LabC_CompensatorOverRobot_M->Timing.tArray[0]);
  LabC_CompensatorOverRobot_M->Timing.stepSize0 = 0.005;

  /* block I/O */
  (void) memset(((void *) &LabC_CompensatorOverRobot_B), 0,
                sizeof(BlockIO_LabC_CompensatorOverRob));

  /* states (dwork) */
  (void) memset((void *)&LabC_CompensatorOverRobot_DWork, 0,
                sizeof(D_Work_LabC_CompensatorOverRobo));

  {
    codertarget_arduinobase_interna *obj;

    /* Start for FromWorkspace: '<S4>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 10.0, 10.0, 60.0, 60.0, 120.0 } ;

      static real_T pDataValues0[] = { 0.0, -0.0, -0.0, 2.5, 2.5, 0.0 } ;

      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.TimePtr = (void *)
        pTimeValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.DataPtr = (void *)
        pDataValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK.PrevIndex = 0;
    }

    /* Start for MATLABSystem: '<S3>/Encoder' */
    LabC_CompensatorOverRobot_DWork.obj_g.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_g.isInitialized = 1L;
    enc_init(1.0, 19.0, 18.0);
    LabC_CompensatorOverRobot_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S10>/Serial Transmit' */
    LabC_CompensatorOverRobot_DWork.obj.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj.Protocol =
      LabC_CompensatorOverRobot_P.SerialTransmit_Protocol;
    LabC_CompensatorOverRobot_DWork.obj.isInitialized = 1L;
    LabC_CompensatorOverRobot_DWork.obj.port = 0.0;
    LabC_CompensatorOverRobot_DWork.obj.dataSizeInBytes = 1.0;
    LabC_CompensatorOverRobot_DWork.obj.dataType = 0.0;
    LabC_CompensatorOverRobot_DWork.obj.sendModeEnum = 0.0;
    LabC_CompensatorOverRobot_DWork.obj.sendFormatEnum = 0.0;
    LabC_CompensatorOverRobot_DWork.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Gyroscope' */
    LabC_CompensatorOverRobot_DWork.obj_gi.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_gi.isInitialized = 1L;
    MPU6050Gyro_Init(0.0);
    LabC_CompensatorOverRobot_DWork.obj_gi.isSetupComplete = true;

    /* Start for MATLABSystem: '<S54>/Digital Output1' */
    LabC_CompensatorOverRobot_DWork.obj_ow.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_ow.isInitialized = 1L;
    digitalIOSetup(8, 1);
    LabC_CompensatorOverRobot_DWork.obj_ow.isSetupComplete = true;

    /* Start for MATLABSystem: '<S54>/PWM' */
    LabC_CompensatorOverRobot_DWork.obj_o.matlabCodegenIsDeleted = true;
    LabC_CompensatorOverRobot_DWork.obj_o.isInitialized = 0L;
    LabC_CompensatorOverRobot_DWork.obj_o.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&LabC_CompensatorOverRobot_DWork.obj_o,
      &LabC_CompensatorOverRobot_DWork.gobj_0_j);
    obj = &LabC_CompensatorOverRobot_DWork.obj_o;
    LabC_CompensatorOverRobot_DWork.obj_o.isSetupComplete = false;
    LabC_CompensatorOverRobot_DWork.obj_o.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open
      (LabC_CompensatorOverRobot_DWork.obj_o.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabC_CompensatorOverRobot_DWork.obj_o.PinPWM);
    MW_PWM_Start(LabC_CompensatorOverRobot_DWork.obj_o.MW_PWM_HANDLE);
    LabC_CompensatorOverRobot_DWork.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<S55>/Digital Output1' */
    LabC_CompensatorOverRobot_DWork.obj_c.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_c.isInitialized = 1L;
    digitalIOSetup(5, 1);
    LabC_CompensatorOverRobot_DWork.obj_c.isSetupComplete = true;

    /* Start for MATLABSystem: '<S55>/PWM' */
    LabC_CompensatorOverRobot_DWork.obj_a.matlabCodegenIsDeleted = true;
    LabC_CompensatorOverRobot_DWork.obj_a.isInitialized = 0L;
    LabC_CompensatorOverRobot_DWork.obj_a.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_o(&LabC_CompensatorOverRobot_DWork.obj_a,
      &LabC_CompensatorOverRobot_DWork.gobj_0);
    obj = &LabC_CompensatorOverRobot_DWork.obj_a;
    LabC_CompensatorOverRobot_DWork.obj_a.isSetupComplete = false;
    LabC_CompensatorOverRobot_DWork.obj_a.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open
      (LabC_CompensatorOverRobot_DWork.obj_a.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabC_CompensatorOverRobot_DWork.obj_a.PinPWM);
    MW_PWM_Start(LabC_CompensatorOverRobot_DWork.obj_a.MW_PWM_HANDLE);
    LabC_CompensatorOverRobot_DWork.obj_a.isSetupComplete = true;

    /* InitializeConditions for UnitDelay: '<S6>/UD'
     *
     * Block description for '<S6>/UD':
     *
     *  Store in Global RAM
     */
    LabC_CompensatorOverRobot_DWork.UD_DSTATE =
      LabC_CompensatorOverRobot_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
    LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr =
      LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvert_o;

    /* InitializeConditions for UnitDelay: '<S7>/UD'
     *
     * Block description for '<S7>/UD':
     *
     *  Store in Global RAM
     */
    LabC_CompensatorOverRobot_DWork.UD_DSTATE_o =
      LabC_CompensatorOverRobot_P.DiscreteDerivative_ICPrevScal_g;
  }
}

/* Model terminate function */
void LabC_CompensatorOverRobot_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Encoder' */
  matlabCodegenHandle_matlabCo_o2(&LabC_CompensatorOverRobot_DWork.obj_g);

  /* Terminate for MATLABSystem: '<S10>/Serial Transmit' */
  matlabCodegenHandle_matlabCodeg(&LabC_CompensatorOverRobot_DWork.obj);

  /* Terminate for MATLABSystem: '<S3>/Gyroscope' */
  matlabCodegenHandle_matlabCod_o(&LabC_CompensatorOverRobot_DWork.obj_gi);

  /* Terminate for MATLABSystem: '<S54>/Digital Output1' */
  matlabCodegenHandle_matlab_o21a(&LabC_CompensatorOverRobot_DWork.obj_ow);

  /* Terminate for MATLABSystem: '<S54>/PWM' */
  matlabCodegenHandle_matlabC_o21(&LabC_CompensatorOverRobot_DWork.obj_o);

  /* Terminate for MATLABSystem: '<S55>/Digital Output1' */
  matlabCodegenHandle_matlab_o21a(&LabC_CompensatorOverRobot_DWork.obj_c);

  /* Terminate for MATLABSystem: '<S55>/PWM' */
  matlabCodegenHandle_matlabC_o21(&LabC_CompensatorOverRobot_DWork.obj_a);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
