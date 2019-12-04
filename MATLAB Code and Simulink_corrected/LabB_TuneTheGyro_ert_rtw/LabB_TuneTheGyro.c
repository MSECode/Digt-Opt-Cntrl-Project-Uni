/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_TuneTheGyro.c
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
#include "LabB_TuneTheGyro_dt.h"

/* Block signals (default storage) */
BlockIO_LabB_TuneTheGyro LabB_TuneTheGyro_B;

/* Block states (default storage) */
D_Work_LabB_TuneTheGyro LabB_TuneTheGyro_DWork;

/* Real-time model */
RT_MODEL_LabB_TuneTheGyro LabB_TuneTheGyro_M_;
RT_MODEL_LabB_TuneTheGyro *const LabB_TuneTheGyro_M = &LabB_TuneTheGyro_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_TuneTheGyro *obj);
static void matlabCodegenHandle_matlabCodeg(soMPU6050Gyro_LabB_TuneTheGyro *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void LabB_TuneTheGyro_step(void)
{
  int16_T out[3];

  /* Reset subsysRan breadcrumbs */
  srClearBC(LabB_TuneTheGyro_DWork.gyrocalibrationprocedure_Subsys);

  /* Reset subsysRan breadcrumbs */
  srClearBC(LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC);

  /* MATLABSystem: '<Root>/Gyroscope' */
  MPU6050Gyro_Read(out);

  /* Outputs for Enabled SubSystem: '<Root>/gyro calibration procedure' incorporates:
   *  EnablePort: '<S2>/enable the code below only when the external boolean input is true'
   */
  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Clock: '<Root>/Clock'
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  if (!(LabB_TuneTheGyro_M->Timing.t[0] >
        LabB_TuneTheGyro_P.calibratethegyrobeforeXsecondss)) {
    /* DiscreteFir: '<S2>/compute a moving average of the gyro' incorporates:
     *  DataTypeConversion: '<Root>/Data Type  Conversion1'
     *  MATLABSystem: '<Root>/Gyroscope'
     */
    LabB_TuneTheGyro_B.computeamovingaverageofthegyro = (real_T)out[0] *
      LabB_TuneTheGyro_P.computeamovingaverageofthegyr_m;
    srUpdateBC(LabB_TuneTheGyro_DWork.gyrocalibrationprocedure_Subsys);
  } else {
    srUpdateBC(LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/measurement filter' */
  }

  /* End of Logic: '<Root>/Logical Operator' */
  /* End of Outputs for SubSystem: '<Root>/gyro calibration procedure' */

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)LabB_TuneTheGyro_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(1, (real_T)((LabB_TuneTheGyro_M->Timing.clockTick1) * 0.01));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(LabB_TuneTheGyro_M)!=-1) &&
        !((rtmGetTFinal(LabB_TuneTheGyro_M)-LabB_TuneTheGyro_M->Timing.t[0]) >
          LabB_TuneTheGyro_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(LabB_TuneTheGyro_M, "Simulation finished");
    }

    if (rtmGetStopRequested(LabB_TuneTheGyro_M)) {
      rtmSetErrorStatus(LabB_TuneTheGyro_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  LabB_TuneTheGyro_M->Timing.t[0] =
    (++LabB_TuneTheGyro_M->Timing.clockTick0) *
    LabB_TuneTheGyro_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    LabB_TuneTheGyro_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void LabB_TuneTheGyro_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)LabB_TuneTheGyro_M, 0,
                sizeof(RT_MODEL_LabB_TuneTheGyro));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&LabB_TuneTheGyro_M->solverInfo,
                          &LabB_TuneTheGyro_M->Timing.simTimeStep);
    rtsiSetTPtr(&LabB_TuneTheGyro_M->solverInfo, &rtmGetTPtr(LabB_TuneTheGyro_M));
    rtsiSetStepSizePtr(&LabB_TuneTheGyro_M->solverInfo,
                       &LabB_TuneTheGyro_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&LabB_TuneTheGyro_M->solverInfo, (&rtmGetErrorStatus
      (LabB_TuneTheGyro_M)));
    rtsiSetRTModelPtr(&LabB_TuneTheGyro_M->solverInfo, LabB_TuneTheGyro_M);
  }

  rtsiSetSimTimeStep(&LabB_TuneTheGyro_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&LabB_TuneTheGyro_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(LabB_TuneTheGyro_M, &LabB_TuneTheGyro_M->Timing.tArray[0]);
  rtmSetTFinal(LabB_TuneTheGyro_M, -1);
  LabB_TuneTheGyro_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  LabB_TuneTheGyro_M->Sizes.checksums[0] = (2529004804U);
  LabB_TuneTheGyro_M->Sizes.checksums[1] = (1932069277U);
  LabB_TuneTheGyro_M->Sizes.checksums[2] = (2684120165U);
  LabB_TuneTheGyro_M->Sizes.checksums[3] = (897717789U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    LabB_TuneTheGyro_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &LabB_TuneTheGyro_DWork.gyrocalibrationprocedure_Subsys;
    systemRan[3] = (sysRanDType *)
      &LabB_TuneTheGyro_DWork.measurementfilter_SubsysRanBC;
    rteiSetModelMappingInfoPtr(LabB_TuneTheGyro_M->extModeInfo,
      &LabB_TuneTheGyro_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(LabB_TuneTheGyro_M->extModeInfo,
                        LabB_TuneTheGyro_M->Sizes.checksums);
    rteiSetTPtr(LabB_TuneTheGyro_M->extModeInfo, rtmGetTPtr(LabB_TuneTheGyro_M));
  }

  /* block I/O */
  (void) memset(((void *) &LabB_TuneTheGyro_B), 0,
                sizeof(BlockIO_LabB_TuneTheGyro));

  /* states (dwork) */
  (void) memset((void *)&LabB_TuneTheGyro_DWork, 0,
                sizeof(D_Work_LabB_TuneTheGyro));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    LabB_TuneTheGyro_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Start for MATLABSystem: '<Root>/Gyroscope' */
  LabB_TuneTheGyro_DWork.obj.matlabCodegenIsDeleted = false;
  LabB_TuneTheGyro_DWork.obj.isInitialized = 1L;
  MPU6050Gyro_Init(0.0);
  LabB_TuneTheGyro_DWork.obj.isSetupComplete = true;
}

/* Model terminate function */
void LabB_TuneTheGyro_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Gyroscope' */
  matlabCodegenHandle_matlabCodeg(&LabB_TuneTheGyro_DWork.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
