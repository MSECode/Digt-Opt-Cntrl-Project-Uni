/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot.c
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 1.723
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Sun Dec 15 20:31:55 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LabC_CompensatorOverRobot.h"
#include "LabC_CompensatorOverRobot_private.h"
#include "LabC_CompensatorOverRobot_dt.h"

/* Block signals (default storage) */
BlockIO_LabC_CompensatorOverRob LabC_CompensatorOverRobot_B;

/* Block states (default storage) */
D_Work_LabC_CompensatorOverRobo LabC_CompensatorOverRobot_DWork;

/* Real-time model */
RT_MODEL_LabC_CompensatorOverRo LabC_CompensatorOverRobot_M_;
RT_MODEL_LabC_CompensatorOverRo *const LabC_CompensatorOverRobot_M =
  &LabC_CompensatorOverRobot_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCod_o(Encoder_arduino_LabC_Compensato *obj);
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabC_CompensatorO *obj);
static void matlabCodegenHandle_matlabC_o21(codertarget_arduinobase_blocks_ *obj);
static void LabC_Compens_SystemCore_release(codertarget_arduinobase_interna *obj);
static void LabC_Compe_SystemCore_delete_o2(codertarget_arduinobase_interna *obj);
static void matlabCodegenHandle_matlabCo_o2(codertarget_arduinobase_interna *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void arduino_PWMOutput_set_pinNumb_o(codertarget_arduinobase_interna *obj,
  e_codertarget_arduinobase_inter *iobj_0);
static void matlabCodegenHandle_matlabCod_o(Encoder_arduino_LabC_Compensato *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabC_CompensatorO *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_o21(codertarget_arduinobase_blocks_ *obj)
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

static void LabC_Compe_SystemCore_delete_o2(codertarget_arduinobase_interna *obj)
{
  LabC_Compens_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_o2(codertarget_arduinobase_interna *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    LabC_Compe_SystemCore_delete_o2(obj);
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
  int16_T i;
  real32_T rtb_Gain8_idx_3;
  real32_T rtb_Add1_idx_0;
  real32_T rtb_Add1_idx_1;
  real32_T rtb_Add1_idx_2;
  real32_T Sum2_tmp;
  real32_T tmp;

  /* FromWorkspace: '<S1>/FromWs' */
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
    } else if (t >= pTimeValues[6]) {
      currTimeIndex = 5;
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
        pDataValues += 7;
      }
    }
  }

  /* FromWorkspace: '<S2>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_c.DataPtr;
    real_T *pTimeValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_c.TimePtr;
    int_T currTimeIndex =
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK_l.PrevIndex;
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

    LabC_CompensatorOverRobot_DWork.FromWs_IWORK_l.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          LabC_CompensatorOverRobot_B.FromWs_m = pDataValues[currTimeIndex];
        } else {
          LabC_CompensatorOverRobot_B.FromWs_m = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        LabC_CompensatorOverRobot_B.FromWs_m = (real_T) rtInterpolate(d1, d2, f1,
          f2);
        pDataValues += 6;
      }
    }
  }

  /* FromWorkspace: '<S6>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_a.DataPtr;
    real_T *pTimeValues = (real_T *)
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_a.TimePtr;
    int_T currTimeIndex =
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK_o.PrevIndex;
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

    LabC_CompensatorOverRobot_DWork.FromWs_IWORK_o.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          LabC_CompensatorOverRobot_B.ManualSwitch1 = pDataValues[currTimeIndex];
        } else {
          LabC_CompensatorOverRobot_B.ManualSwitch1 = pDataValues[currTimeIndex
            + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex= currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        LabC_CompensatorOverRobot_B.ManualSwitch1 = (real_T) rtInterpolate(d1,
          d2, f1, f2);
        pDataValues += 6;
      }
    }
  }

  /* ManualSwitch: '<Root>/Manual Switch1' */
  if (LabC_CompensatorOverRobot_P.ManualSwitch1_CurrentSetting != 1) {
    /* ManualSwitch: '<Root>/Manual Switch' */
    if (LabC_CompensatorOverRobot_P.ManualSwitch_CurrentSetting == 1) {
      LabC_CompensatorOverRobot_B.ManualSwitch1 =
        LabC_CompensatorOverRobot_B.FromWs;
    } else {
      LabC_CompensatorOverRobot_B.ManualSwitch1 =
        LabC_CompensatorOverRobot_B.FromWs_m;
    }

    /* End of ManualSwitch: '<Root>/Manual Switch' */
  }

  /* End of ManualSwitch: '<Root>/Manual Switch1' */

  /* DiscreteIntegrator: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr =
    LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr;

  /* MATLABSystem: '<S5>/Encoder' */
  LabC_CompensatorOverRobot_B.rtb_Encoder_c = enc_output(1.0);

  /* Gain: '<S4>/convert to meters' incorporates:
   *  DataTypeConversion: '<S5>/Data Type  Conversion2'
   *  Gain: '<S4>/convert to  radians'
   *  MATLABSystem: '<S5>/Encoder'
   */
  LabC_CompensatorOverRobot_B.converttometers =
    LabC_CompensatorOverRobot_P.converttoradians_Gain * (real32_T)
    LabC_CompensatorOverRobot_B.rtb_Encoder_c *
    LabC_CompensatorOverRobot_P.fWheelRadius;

  /* Gain: '<S3>/Gain3' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   */
  LabC_CompensatorOverRobot_B.Gain3 = LabC_CompensatorOverRobot_P.Nxd *
    (real32_T)LabC_CompensatorOverRobot_B.ManualSwitch1;

  /* SampleTimeMath: '<S8>/TSamp'
   *
   * About '<S8>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = LabC_CompensatorOverRobot_B.converttometers *
    LabC_CompensatorOverRobot_P.TSamp_WtEt;

  /* SampleTimeMath: '<S9>/TSamp'
   *
   * About '<S9>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_n = LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr *
    LabC_CompensatorOverRobot_P.TSamp_WtEt_j;

  /* DiscreteStateSpace: '<S10>/Internal_1_1' */
  {
    rtb_Internal_4_4 = LabC_CompensatorOverRobot_P.Internal_1_1_C*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE;
  }

  /* DiscreteStateSpace: '<S10>/Internal_1_2' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_1_3' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_1_4' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* Sum: '<S10>/Sum1' */
  LabC_CompensatorOverRobot_B.Sum1 = ((rtb_Internal_4_4 + rtb_Internal_3_3) +
    rtb_Internal_3_2) + rtb_DataTypeConversion1;

  /* DiscreteStateSpace: '<S10>/Internal_2_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_2_2' */
  {
    rtb_Internal_3_2 = LabC_CompensatorOverRobot_P.Internal_2_2_C*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE;
  }

  /* DiscreteStateSpace: '<S10>/Internal_2_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_2_4' */
  {
    rtb_Internal_4_4 = 0.0;
  }

  /* Sum: '<S10>/Sum2' */
  Sum2_tmp = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) + rtb_Internal_3_3) +
    rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S10>/Internal_3_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_3_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_3_3' */
  {
    rtb_Internal_3_3 = LabC_CompensatorOverRobot_P.Internal_3_3_C*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE;
  }

  /* DiscreteStateSpace: '<S10>/Internal_3_4' */
  {
    rtb_Internal_4_4 = 0.0;
  }

  /* Sum: '<S10>/Sum3' */
  LabC_CompensatorOverRobot_B.Sum3 = ((rtb_DataTypeConversion1 +
    rtb_Internal_3_2) + rtb_Internal_3_3) + rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S10>/Internal_4_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_4_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_4_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* DiscreteStateSpace: '<S10>/Internal_4_4' */
  {
    rtb_Internal_4_4 = LabC_CompensatorOverRobot_P.Internal_4_4_C*
      LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE;
  }

  /* Sum: '<S10>/Sum4' */
  tmp = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) + rtb_Internal_3_3) +
    rtb_Internal_4_4;

  /* DiscreteStateSpace: '<S11>/Internal_1_1' */
  {
    rtb_DataTypeConversion1 = LabC_CompensatorOverRobot_P.Internal_1_1_C_i*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n;
  }

  /* DiscreteStateSpace: '<S11>/Internal_1_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S11>/Internal_1_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* Sum: '<S11>/Sum1' */
  rtb_Add1_idx_0 = (rtb_DataTypeConversion1 + rtb_Internal_3_2) +
    rtb_Internal_3_3;

  /* DiscreteStateSpace: '<S11>/Internal_2_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S11>/Internal_2_2' */
  {
    rtb_Internal_3_2 = LabC_CompensatorOverRobot_P.Internal_2_2_C_n*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o;
  }

  /* DiscreteStateSpace: '<S11>/Internal_2_3' */
  {
    rtb_Internal_3_3 = 0.0;
  }

  /* Sum: '<S11>/Sum2' */
  rtb_Add1_idx_1 = (rtb_DataTypeConversion1 + rtb_Internal_3_2) +
    rtb_Internal_3_3;

  /* DiscreteStateSpace: '<S11>/Internal_3_1' */
  {
    rtb_DataTypeConversion1 = 0.0;
  }

  /* DiscreteStateSpace: '<S11>/Internal_3_2' */
  {
    rtb_Internal_3_2 = 0.0;
  }

  /* DiscreteStateSpace: '<S11>/Internal_3_3' */
  {
    rtb_Internal_3_3 = LabC_CompensatorOverRobot_P.Internal_3_3_C_i*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o;
  }

  /* Sum: '<S7>/Add1' incorporates:
   *  Gain: '<S7>/Gain4'
   *  Sum: '<S11>/Sum1'
   *  Sum: '<S11>/Sum2'
   *  Sum: '<S11>/Sum3'
   */
  rtb_Add1_idx_0 += LabC_CompensatorOverRobot_P.Md5[0] *
    LabC_CompensatorOverRobot_B.converttometers;
  rtb_Add1_idx_1 += LabC_CompensatorOverRobot_P.Md5[1] *
    LabC_CompensatorOverRobot_B.converttometers;
  rtb_Add1_idx_2 = ((rtb_DataTypeConversion1 + rtb_Internal_3_2) +
                    rtb_Internal_3_3) + LabC_CompensatorOverRobot_P.Md5[2] *
    LabC_CompensatorOverRobot_B.converttometers;

  /* Sum: '<S7>/Add2' incorporates:
   *  Gain: '<S7>/Gain5'
   *  Gain: '<S7>/Gain6'
   */
  for (i = 0; i < 4; i++) {
    LabC_CompensatorOverRobot_B.Add2[i] = ((LabC_CompensatorOverRobot_P.Md7[i +
      4] * rtb_Add1_idx_1 + LabC_CompensatorOverRobot_P.Md7[i] * rtb_Add1_idx_0)
      + LabC_CompensatorOverRobot_P.Md7[i + 8] * rtb_Add1_idx_2) +
      LabC_CompensatorOverRobot_P.Md6[i] *
      LabC_CompensatorOverRobot_B.converttometers;
  }

  /* End of Sum: '<S7>/Add2' */

  /* ManualSwitch: '<S7>/Manual Switch1' incorporates:
   *  ManualSwitch: '<S7>/Manual Switch'
   *  Sum: '<S8>/Diff'
   *  Sum: '<S9>/Diff'
   *  UnitDelay: '<S8>/UD'
   *  UnitDelay: '<S9>/UD'
   *
   * Block description for '<S8>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S9>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   *
   * Block description for '<S9>/UD':
   *
   *  Store in Global RAM
   */
  if (LabC_CompensatorOverRobot_P.ManualSwitch1_CurrentSetting_g == 1) {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.converttometers;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 = rtb_TSamp -
      LabC_CompensatorOverRobot_DWork.UD_DSTATE;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 =
      LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr;
    rtb_Gain8_idx_3 = rtb_TSamp_n - LabC_CompensatorOverRobot_DWork.UD_DSTATE_o;
  } else if (LabC_CompensatorOverRobot_P.ManualSwitch_CurrentSetting_e == 1) {
    /* ManualSwitch: '<S7>/Manual Switch' incorporates:
     *  Sum: '<S10>/Sum2'
     *  Sum: '<S10>/Sum4'
     */
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.Sum1;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 = Sum2_tmp;
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 =
      LabC_CompensatorOverRobot_B.Sum3;
    rtb_Gain8_idx_3 = tmp;
  } else {
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0 =
      LabC_CompensatorOverRobot_B.Add2[0];
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1 =
      LabC_CompensatorOverRobot_B.Add2[1];
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2 =
      LabC_CompensatorOverRobot_B.Add2[2];
    rtb_Gain8_idx_3 = LabC_CompensatorOverRobot_B.Add2[3];
  }

  /* End of ManualSwitch: '<S7>/Manual Switch1' */

  /* Product: '<S3>/Product1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Fcn: '<S3>/turn off the motor if the measured angle is greater than X degrees'
   *  Gain: '<S3>/Gain4'
   *  Gain: '<S3>/controller'
   *  Sum: '<S3>/Sum'
   *  Sum: '<S3>/Sum1'
   */
  LabC_CompensatorOverRobot_B.Product1 = (((((LabC_CompensatorOverRobot_B.Gain3
    + LabC_CompensatorOverRobot_B.rtb_Gain8_idx_0) *
    LabC_CompensatorOverRobot_P.Kd[0] + (LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_1) *
    LabC_CompensatorOverRobot_P.Kd[1]) + (LabC_CompensatorOverRobot_B.Gain3 +
    LabC_CompensatorOverRobot_B.rtb_Gain8_idx_2) *
    LabC_CompensatorOverRobot_P.Kd[2]) + (LabC_CompensatorOverRobot_B.Gain3 +
    rtb_Gain8_idx_3) * LabC_CompensatorOverRobot_P.Kd[3]) +
    LabC_CompensatorOverRobot_P.Gain4_Gain * (real32_T)
    LabC_CompensatorOverRobot_B.ManualSwitch1) * (real32_T)((real32_T)fabs
    (LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr) < 0.75F);

  /* Sum: '<S7>/Add' incorporates:
   *  Gain: '<S7>/Gain'
   *  Gain: '<S7>/Gain1'
   *  Gain: '<S7>/Gain2'
   *  Gain: '<S7>/Gain3'
   */
  for (i = 0; i < 3; i++) {
    LabC_CompensatorOverRobot_B.Add[i] = ((LabC_CompensatorOverRobot_P.Md1[i + 3]
      * rtb_Add1_idx_1 + LabC_CompensatorOverRobot_P.Md1[i] * rtb_Add1_idx_0) +
      LabC_CompensatorOverRobot_P.Md1[i + 6] * rtb_Add1_idx_2) +
      ((LabC_CompensatorOverRobot_P.Md4[i] *
        LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr +
        LabC_CompensatorOverRobot_P.Md3[i] *
        LabC_CompensatorOverRobot_B.converttometers) +
       LabC_CompensatorOverRobot_P.Md2[i] * LabC_CompensatorOverRobot_B.Product1);
  }

  /* End of Sum: '<S7>/Add' */

  /* Gain: '<S7>/Gain10' incorporates:
   *  SignalConversion generated from: '<S7>/Gain10'
   *  Sum: '<S10>/Sum2'
   *  Sum: '<S10>/Sum4'
   */
  for (i = 0; i < 2; i++) {
    LabC_CompensatorOverRobot_B.Gain3 = LabC_CompensatorOverRobot_P.Cd[i + 6] *
      tmp + (LabC_CompensatorOverRobot_P.Cd[i + 4] *
             LabC_CompensatorOverRobot_B.Sum3 +
             (LabC_CompensatorOverRobot_P.Cd[i + 2] * Sum2_tmp +
              LabC_CompensatorOverRobot_P.Cd[i] *
              LabC_CompensatorOverRobot_B.Sum1));
    LabC_CompensatorOverRobot_B.Gain10[i] = LabC_CompensatorOverRobot_B.Gain3;
  }

  /* End of Gain: '<S7>/Gain10' */

  /* Sum: '<S7>/Sum' */
  LabC_CompensatorOverRobot_B.Gain3 =
    LabC_CompensatorOverRobot_B.converttometers -
    LabC_CompensatorOverRobot_B.Gain10[0];
  rtb_Add1_idx_1 = LabC_CompensatorOverRobot_B.DiscreteTimeIntegratorconvertfr -
    LabC_CompensatorOverRobot_B.Gain10[1];
  for (i = 0; i < 4; i++) {
    /* Gain: '<S7>/Gain7' incorporates:
     *  SignalConversion generated from: '<S7>/Gain10'
     *  Sum: '<S10>/Sum2'
     *  Sum: '<S10>/Sum4'
     */
    rtb_Add1_idx_0 = LabC_CompensatorOverRobot_P.Ad[i + 12] * tmp +
      (LabC_CompensatorOverRobot_P.Ad[i + 8] * LabC_CompensatorOverRobot_B.Sum3
       + (LabC_CompensatorOverRobot_P.Ad[i + 4] * Sum2_tmp +
          LabC_CompensatorOverRobot_P.Ad[i] * LabC_CompensatorOverRobot_B.Sum1));

    /* Sum: '<S7>/Add3' incorporates:
     *  Gain: '<S7>/Gain8'
     *  Gain: '<S7>/Gain9'
     */
    LabC_CompensatorOverRobot_B.Add3[i] = (LabC_CompensatorOverRobot_P.Bd[i] *
      LabC_CompensatorOverRobot_B.Product1 + (LabC_CompensatorOverRobot_P.Ld[i +
      4] * rtb_Add1_idx_1 + LabC_CompensatorOverRobot_P.Ld[i] *
      LabC_CompensatorOverRobot_B.Gain3)) + rtb_Add1_idx_0;
  }

  /* MATLABSystem: '<S5>/Gyroscope' */
  MPU6050Gyro_Read(LabC_CompensatorOverRobot_B.out);

  /* DataTypeConversion: '<S5>/Data Type  Conversion1' incorporates:
   *  MATLABSystem: '<S5>/Gyroscope'
   */
  rtb_DataTypeConversion1 = LabC_CompensatorOverRobot_B.out[0];

  /* Gain: '<S4>/convert to radians//sec' incorporates:
   *  Constant: '<S4>/gyro bias'
   *  Sum: '<S4>/Sum'
   */
  rtb_converttoradianssec = (rtb_DataTypeConversion1 -
    LabC_CompensatorOverRobot_P.fGyroBias) *
    LabC_CompensatorOverRobot_P.converttoradianssec_Gain;

  /* MATLABSystem: '<S41>/Digital Output1' incorporates:
   *  Constant: '<S43>/Constant'
   *  RelationalOperator: '<S43>/Compare'
   */
  writeDigitalPin(8, (uint8_T)(LabC_CompensatorOverRobot_B.Product1 <
    LabC_CompensatorOverRobot_P.Constant_Value));

  /* MATLABSystem: '<S41>/PWM' */
  obj = &LabC_CompensatorOverRobot_DWork.obj_o;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabC_CompensatorOverRobot_DWork.obj_o.PinPWM);

  /* Saturate: '<S41>/Saturation -Vsupply to Vsupply' */
  if (LabC_CompensatorOverRobot_B.Product1 >
      LabC_CompensatorOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs) {
    tmp = LabC_CompensatorOverRobot_P.M1V4LeftMotorDriverPWM6D8FST_Vs;
  } else if (LabC_CompensatorOverRobot_B.Product1 <
             LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lowe) {
    tmp = LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lowe;
  } else {
    tmp = LabC_CompensatorOverRobot_B.Product1;
  }

  /* End of Saturate: '<S41>/Saturation -Vsupply to Vsupply' */

  /* Gain: '<S41>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  tmp = (real32_T)floor
    (LabC_CompensatorOverRobot_P.conversiontodutycycleconverttou * tmp);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S41>/PWM' incorporates:
   *  Gain: '<S41>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabC_CompensatorOverRobot_DWork.obj_o.MW_PWM_HANDLE,
                      (uint8_T)(tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int16_T)(uint8_T)tmp));

  /* MATLABSystem: '<S42>/Digital Output1' incorporates:
   *  Constant: '<S44>/Constant'
   *  RelationalOperator: '<S44>/Compare'
   */
  writeDigitalPin(5, (uint8_T)(LabC_CompensatorOverRobot_B.Product1 <
    LabC_CompensatorOverRobot_P.Constant_Value_n));

  /* MATLABSystem: '<S42>/PWM' */
  obj = &LabC_CompensatorOverRobot_DWork.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle
    (LabC_CompensatorOverRobot_DWork.obj.PinPWM);

  /* Saturate: '<S42>/Saturation -Vsupply to Vsupply' */
  if (LabC_CompensatorOverRobot_B.Product1 >
      LabC_CompensatorOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_) {
    tmp = LabC_CompensatorOverRobot_P.M1V4MiddleMotorDriverPWM2D5FST_;
  } else if (LabC_CompensatorOverRobot_B.Product1 <
             LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lo_g) {
    tmp = LabC_CompensatorOverRobot_P.SaturationVsupplytoVsupply_Lo_g;
  } else {
    tmp = LabC_CompensatorOverRobot_B.Product1;
  }

  /* End of Saturate: '<S42>/Saturation -Vsupply to Vsupply' */

  /* Gain: '<S42>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)' */
  tmp = (real32_T)floor
    (LabC_CompensatorOverRobot_P.conversiontodutycycleconvertt_d * tmp);
  if (rtIsNaNF(tmp) || rtIsInfF(tmp)) {
    tmp = 0.0F;
  } else {
    tmp = (real32_T)fmod(tmp, 256.0);
  }

  /* MATLABSystem: '<S42>/PWM' incorporates:
   *  Gain: '<S42>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
   */
  MW_PWM_SetDutyCycle(LabC_CompensatorOverRobot_DWork.obj.MW_PWM_HANDLE,
                      (uint8_T)(tmp < 0.0F ? (int16_T)(uint8_T)-(int8_T)(uint8_T)
    -tmp : (int16_T)(uint8_T)tmp));

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr +=
    LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvertfr *
    rtb_converttoradianssec;

  /* Update for UnitDelay: '<S8>/UD'
   *
   * Block description for '<S8>/UD':
   *
   *  Store in Global RAM
   */
  LabC_CompensatorOverRobot_DWork.UD_DSTATE = rtb_TSamp;

  /* Update for UnitDelay: '<S9>/UD'
   *
   * Block description for '<S9>/UD':
   *
   *  Store in Global RAM
   */
  LabC_CompensatorOverRobot_DWork.UD_DSTATE_o = rtb_TSamp_n;

  /* Update for DiscreteStateSpace: '<S10>/Internal_1_1' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[0] +
      (LabC_CompensatorOverRobot_P.Internal_1_1_A)*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S10>/Internal_2_2' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[1] +
      (LabC_CompensatorOverRobot_P.Internal_2_2_A)*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S10>/Internal_3_3' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[2] +
      (LabC_CompensatorOverRobot_P.Internal_3_3_A)*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S10>/Internal_4_4' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE =
      LabC_CompensatorOverRobot_B.Add3[3] +
      (LabC_CompensatorOverRobot_P.Internal_4_4_A)*
      LabC_CompensatorOverRobot_DWork.Internal_4_4_DSTATE;
  }

  /* Update for DiscreteStateSpace: '<S11>/Internal_1_1' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n =
      LabC_CompensatorOverRobot_B.Add[0] +
      (LabC_CompensatorOverRobot_P.Internal_1_1_A_e)*
      LabC_CompensatorOverRobot_DWork.Internal_1_1_DSTATE_n;
  }

  /* Update for DiscreteStateSpace: '<S11>/Internal_2_2' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o =
      LabC_CompensatorOverRobot_B.Add[1] +
      (LabC_CompensatorOverRobot_P.Internal_2_2_A_k)*
      LabC_CompensatorOverRobot_DWork.Internal_2_2_DSTATE_o;
  }

  /* Update for DiscreteStateSpace: '<S11>/Internal_3_3' */
  {
    LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o =
      LabC_CompensatorOverRobot_B.Add[2] +
      (LabC_CompensatorOverRobot_P.Internal_3_3_A_g)*
      LabC_CompensatorOverRobot_DWork.Internal_3_3_DSTATE_o;
  }

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)LabC_CompensatorOverRobot_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.006s, 0.0s] */
    rtExtModeUpload(1, (real_T)((LabC_CompensatorOverRobot_M->Timing.clockTick1)
      * 0.006));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(LabC_CompensatorOverRobot_M)!=-1) &&
        !((rtmGetTFinal(LabC_CompensatorOverRobot_M)-
           LabC_CompensatorOverRobot_M->Timing.t[0]) >
          LabC_CompensatorOverRobot_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabC_CompensatorOverRobot_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabC_CompensatorOverRobot_M)) {
      rtmSetErrorStatus(LabC_CompensatorOverRobot_M, "Simulation finished");
    }
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
    /* Update absolute timer for sample time: [0.006s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.006, which is the step size
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
  rtmSetTFinal(LabC_CompensatorOverRobot_M, -1);
  LabC_CompensatorOverRobot_M->Timing.stepSize0 = 0.006;

  /* External mode info */
  LabC_CompensatorOverRobot_M->Sizes.checksums[0] = (1098358726U);
  LabC_CompensatorOverRobot_M->Sizes.checksums[1] = (1662181611U);
  LabC_CompensatorOverRobot_M->Sizes.checksums[2] = (439561573U);
  LabC_CompensatorOverRobot_M->Sizes.checksums[3] = (1464618110U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    LabC_CompensatorOverRobot_M->extModeInfo = (&rt_ExtModeInfo);
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
    rteiSetModelMappingInfoPtr(LabC_CompensatorOverRobot_M->extModeInfo,
      &LabC_CompensatorOverRobot_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabC_CompensatorOverRobot_M->extModeInfo,
                        LabC_CompensatorOverRobot_M->Sizes.checksums);
    rteiSetTPtr(LabC_CompensatorOverRobot_M->extModeInfo, rtmGetTPtr
                (LabC_CompensatorOverRobot_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabC_CompensatorOverRobot_B), 0,
                sizeof(BlockIO_LabC_CompensatorOverRob));

  /* states (dwork) */
  (void) memset((void *)&LabC_CompensatorOverRobot_DWork, 0,
                sizeof(D_Work_LabC_CompensatorOverRobo));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabC_CompensatorOverRobot_M->SpecialInfo.mappingInfo = (&dtInfo);
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

    /* Start for FromWorkspace: '<S1>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 10.0, 10.0, 20.0, 20.0, 25.0, 40.0 }
      ;

      static real_T pDataValues0[] = { 0.0, 0.0, 0.0, 1.3, 1.3, 1.3, 1.3 } ;

      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.TimePtr = (void *)
        pTimeValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK.DataPtr = (void *)
        pDataValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S2>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 10.0, 10.0, 20.0, 20.0, 40.0 } ;

      static real_T pDataValues0[] = { 0.0, 0.0, 0.0, 0.5, 0.5, 0.5 } ;

      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_c.TimePtr = (void *)
        pTimeValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_c.DataPtr = (void *)
        pDataValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK_l.PrevIndex = 0;
    }

    /* Start for FromWorkspace: '<S6>/FromWs' */
    {
      static real_T pTimeValues0[] = { 0.0, 10.0, 10.0, 40.0, 40.0, 70.0 } ;

      static real_T pDataValues0[] = { 0.0, -0.0, -0.0, 2.0, 2.0, 0.0 } ;

      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_a.TimePtr = (void *)
        pTimeValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_PWORK_a.DataPtr = (void *)
        pDataValues0;
      LabC_CompensatorOverRobot_DWork.FromWs_IWORK_o.PrevIndex = 0;
    }

    /* Start for MATLABSystem: '<S5>/Encoder' */
    LabC_CompensatorOverRobot_DWork.obj_g.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_g.isInitialized = 1L;
    enc_init(1.0, 19.0, 18.0);
    LabC_CompensatorOverRobot_DWork.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<S5>/Gyroscope' */
    LabC_CompensatorOverRobot_DWork.obj_gi.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_gi.isInitialized = 1L;
    MPU6050Gyro_Init(0.0);
    LabC_CompensatorOverRobot_DWork.obj_gi.isSetupComplete = true;

    /* Start for MATLABSystem: '<S41>/Digital Output1' */
    LabC_CompensatorOverRobot_DWork.obj_ow.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_ow.isInitialized = 1L;
    digitalIOSetup(8, 1);
    LabC_CompensatorOverRobot_DWork.obj_ow.isSetupComplete = true;

    /* Start for MATLABSystem: '<S41>/PWM' */
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

    /* Start for MATLABSystem: '<S42>/Digital Output1' */
    LabC_CompensatorOverRobot_DWork.obj_c.matlabCodegenIsDeleted = false;
    LabC_CompensatorOverRobot_DWork.obj_c.isInitialized = 1L;
    digitalIOSetup(5, 1);
    LabC_CompensatorOverRobot_DWork.obj_c.isSetupComplete = true;

    /* Start for MATLABSystem: '<S42>/PWM' */
    LabC_CompensatorOverRobot_DWork.obj.matlabCodegenIsDeleted = true;
    LabC_CompensatorOverRobot_DWork.obj.isInitialized = 0L;
    LabC_CompensatorOverRobot_DWork.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumb_o(&LabC_CompensatorOverRobot_DWork.obj,
      &LabC_CompensatorOverRobot_DWork.gobj_0);
    obj = &LabC_CompensatorOverRobot_DWork.obj;
    LabC_CompensatorOverRobot_DWork.obj.isSetupComplete = false;
    LabC_CompensatorOverRobot_DWork.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(LabC_CompensatorOverRobot_DWork.obj.PinPWM,
      0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle
      (LabC_CompensatorOverRobot_DWork.obj.PinPWM);
    MW_PWM_Start(LabC_CompensatorOverRobot_DWork.obj.MW_PWM_HANDLE);
    LabC_CompensatorOverRobot_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
    LabC_CompensatorOverRobot_DWork.DiscreteTimeIntegratorconvertfr =
      LabC_CompensatorOverRobot_P.DiscreteTimeIntegratorconvert_o;

    /* InitializeConditions for UnitDelay: '<S8>/UD'
     *
     * Block description for '<S8>/UD':
     *
     *  Store in Global RAM
     */
    LabC_CompensatorOverRobot_DWork.UD_DSTATE =
      LabC_CompensatorOverRobot_P.DiscreteDerivative_ICPrevScaled;

    /* InitializeConditions for UnitDelay: '<S9>/UD'
     *
     * Block description for '<S9>/UD':
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
  /* Terminate for MATLABSystem: '<S5>/Encoder' */
  matlabCodegenHandle_matlabCod_o(&LabC_CompensatorOverRobot_DWork.obj_g);

  /* Terminate for MATLABSystem: '<S5>/Gyroscope' */
  matlabCodegenHandle_matlabCodeg(&LabC_CompensatorOverRobot_DWork.obj_gi);

  /* Terminate for MATLABSystem: '<S41>/Digital Output1' */
  matlabCodegenHandle_matlabC_o21(&LabC_CompensatorOverRobot_DWork.obj_ow);

  /* Terminate for MATLABSystem: '<S41>/PWM' */
  matlabCodegenHandle_matlabCo_o2(&LabC_CompensatorOverRobot_DWork.obj_o);

  /* Terminate for MATLABSystem: '<S42>/Digital Output1' */
  matlabCodegenHandle_matlabC_o21(&LabC_CompensatorOverRobot_DWork.obj_c);

  /* Terminate for MATLABSystem: '<S42>/PWM' */
  matlabCodegenHandle_matlabCo_o2(&LabC_CompensatorOverRobot_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
