/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabC_CompensatorOverRobot.h
 *
 * Code generated for Simulink model 'LabC_CompensatorOverRobot'.
 *
 * Model version                  : 1.720
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Wed Dec  4 23:57:09 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LabC_CompensatorOverRobot_h_
#define RTW_HEADER_LabC_CompensatorOverRobot_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef LabC_CompensatorOverRobot_COMMON_INCLUDES_
# define LabC_CompensatorOverRobot_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MPU6050wrapper.h"
#include "encoder_arduino.h"
#include "MW_PWM.h"
#include "MW_arduino_digitalio.h"
#endif                          /* LabC_CompensatorOverRobot_COMMON_INCLUDES_ */

#include "LabC_CompensatorOverRobot_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T ManualSwitch1;                /* '<Root>/Manual Switch1' */
  real_T FromWs_p;                     /* '<S2>/FromWs' */
  real_T FromWs;                       /* '<S1>/FromWs' */
  int16_T out[3];
  real32_T converttometers;            /* '<S4>/convert to meters' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T Sum1;                       /* '<S10>/Sum1' */
  real32_T Sum3;                       /* '<S10>/Sum3' */
  real32_T Add2[4];                    /* '<S7>/Add2' */
  real32_T Product1;                   /* '<S3>/Product1' */
  real32_T Add[3];                     /* '<S7>/Add' */
  real32_T Add3[4];                    /* '<S7>/Add3' */
  real32_T Gain10[2];
  real32_T Gain3;                      /* '<S3>/Gain3' */
  real32_T rtb_Gain8_idx_0;
  real32_T rtb_Gain8_idx_1;
  real32_T rtb_Gain8_idx_2;
  int32_T rtb_Encoder_m;
} BlockIO_LabC_CompensatorOverRob;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S42>/PWM' */
  codertarget_arduinobase_interna obj_o;/* '<S41>/PWM' */
  e_codertarget_arduinobase_inter gobj_0;/* '<S42>/PWM' */
  e_codertarget_arduinobase_inter gobj_1;/* '<S42>/PWM' */
  e_codertarget_arduinobase_inter gobj_2;/* '<S42>/PWM' */
  e_codertarget_arduinobase_inter gobj_3;/* '<S42>/PWM' */
  e_codertarget_arduinobase_inter gobj_0_j;/* '<S41>/PWM' */
  e_codertarget_arduinobase_inter gobj_1_a;/* '<S41>/PWM' */
  e_codertarget_arduinobase_inter gobj_2_k;/* '<S41>/PWM' */
  e_codertarget_arduinobase_inter gobj_3_d;/* '<S41>/PWM' */
  Encoder_arduino_LabC_Compensato obj_g;/* '<S5>/Encoder' */
  soMPU6050Gyro_LabC_CompensatorO obj_gi;/* '<S5>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_c;/* '<S42>/Digital Output1' */
  codertarget_arduinobase_blocks_ obj_ow;/* '<S41>/Digital Output1' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S1>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_c;                    /* '<S2>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_a;                    /* '<S6>/FromWs' */

  struct {
    void *LoggedData[3];
  } Measurements_PWORK;                /* '<S7>/   Measurements' */

  struct {
    void *LoggedData[3];
  } FullObserver_PWORK;                /* '<S7>/Full Observer ' */

  struct {
    void *LoggedData[3];
  } ReducedObserver_PWORK;             /* '<S7>/Reduced Observer ' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S7>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S7>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S7>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S7>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S7>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S7>/To Workspace5' */

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                /* '<S7>/To Workspace6' */

  real32_T UD_DSTATE;                  /* '<S8>/UD' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T UD_DSTATE_o;                /* '<S9>/UD' */
  real32_T Internal_1_1_DSTATE;        /* '<S10>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE;        /* '<S10>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE;        /* '<S10>/Internal_3_3' */
  real32_T Internal_4_4_DSTATE;        /* '<S10>/Internal_4_4' */
  real32_T Internal_1_1_DSTATE_n;      /* '<S11>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE_o;      /* '<S11>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE_o;      /* '<S11>/Internal_3_3' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S1>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_l;                    /* '<S2>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_o;                    /* '<S6>/FromWs' */
} D_Work_LabC_CompensatorOverRobo;

/* Parameters (default storage) */
struct Parameters_LabC_CompensatorOver_ {
  real32_T Ad[16];                     /* Variable: Ad
                                        * Referenced by: '<S7>/Gain7'
                                        */
  real32_T Bd[4];                      /* Variable: Bd
                                        * Referenced by: '<S7>/Gain8'
                                        */
  real32_T Cd[8];                      /* Variable: Cd
                                        * Referenced by: '<S7>/Gain10'
                                        */
  real32_T Kd[4];                      /* Variable: Kd
                                        * Referenced by: '<S3>/controller'
                                        */
  real32_T Ld[8];                      /* Variable: Ld
                                        * Referenced by: '<S7>/Gain9'
                                        */
  real32_T Md1[9];                     /* Variable: Md1
                                        * Referenced by: '<S7>/Gain'
                                        */
  real32_T Md2[3];                     /* Variable: Md2
                                        * Referenced by: '<S7>/Gain1'
                                        */
  real32_T Md3[3];                     /* Variable: Md3
                                        * Referenced by: '<S7>/Gain2'
                                        */
  real32_T Md4[3];                     /* Variable: Md4
                                        * Referenced by: '<S7>/Gain3'
                                        */
  real32_T Md5[3];                     /* Variable: Md5
                                        * Referenced by: '<S7>/Gain4'
                                        */
  real32_T Md6[4];                     /* Variable: Md6
                                        * Referenced by: '<S7>/Gain5'
                                        */
  real32_T Md7[12];                    /* Variable: Md7
                                        * Referenced by: '<S7>/Gain6'
                                        */
  real32_T Nxd;                        /* Variable: Nxd
                                        * Referenced by: '<S3>/Gain3'
                                        */
  real32_T fGyroBias;                  /* Variable: fGyroBias
                                        * Referenced by: '<S4>/gyro bias'
                                        */
  real32_T fWheelRadius;               /* Variable: fWheelRadius
                                        * Referenced by: '<S4>/convert to meters'
                                        */
  real32_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S8>/UD'
                               */
  real32_T DiscreteDerivative_ICPrevScal_g;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_g
                               * Referenced by: '<S9>/UD'
                               */
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S41>/Saturation -Vsupply to Vsupply'
                               */
  real32_T M1V4MiddleMotorDriverPWM2D5FST_;
                              /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
                               * Referenced by: '<S42>/Saturation -Vsupply to Vsupply'
                               */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S43>/Constant'
                                        */
  real32_T Constant_Value_n;           /* Computed Parameter: Constant_Value_n
                                        * Referenced by: '<S44>/Constant'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S3>/Gain4'
                                        */
  real32_T converttoradians_Gain;   /* Computed Parameter: converttoradians_Gain
                                     * Referenced by: '<S4>/convert to  radians'
                                     */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S8>/TSamp'
                                        */
  real32_T DiscreteTimeIntegratorconvertfr;
                          /* Computed Parameter: DiscreteTimeIntegratorconvertfr
                           * Referenced by: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T DiscreteTimeIntegratorconvert_o;
                          /* Computed Parameter: DiscreteTimeIntegratorconvert_o
                           * Referenced by: '<S4>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T TSamp_WtEt_j;               /* Computed Parameter: TSamp_WtEt_j
                                        * Referenced by: '<S9>/TSamp'
                                        */
  real32_T Internal_1_1_A;             /* Computed Parameter: Internal_1_1_A
                                        * Referenced by: '<S10>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C;             /* Computed Parameter: Internal_1_1_C
                                        * Referenced by: '<S10>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition;
                            /* Computed Parameter: Internal_1_1_InitialCondition
                             * Referenced by: '<S10>/Internal_1_1'
                             */
  real32_T Internal_1_2_InitialCondition;
                            /* Computed Parameter: Internal_1_2_InitialCondition
                             * Referenced by: '<S10>/Internal_1_2'
                             */
  real32_T Internal_1_3_InitialCondition;
                            /* Computed Parameter: Internal_1_3_InitialCondition
                             * Referenced by: '<S10>/Internal_1_3'
                             */
  real32_T Internal_1_4_InitialCondition;
                            /* Computed Parameter: Internal_1_4_InitialCondition
                             * Referenced by: '<S10>/Internal_1_4'
                             */
  real32_T Internal_2_1_InitialCondition;
                            /* Computed Parameter: Internal_2_1_InitialCondition
                             * Referenced by: '<S10>/Internal_2_1'
                             */
  real32_T Internal_2_2_A;             /* Computed Parameter: Internal_2_2_A
                                        * Referenced by: '<S10>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C;             /* Computed Parameter: Internal_2_2_C
                                        * Referenced by: '<S10>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition;
                            /* Computed Parameter: Internal_2_2_InitialCondition
                             * Referenced by: '<S10>/Internal_2_2'
                             */
  real32_T Internal_2_3_InitialCondition;
                            /* Computed Parameter: Internal_2_3_InitialCondition
                             * Referenced by: '<S10>/Internal_2_3'
                             */
  real32_T Internal_2_4_InitialCondition;
                            /* Computed Parameter: Internal_2_4_InitialCondition
                             * Referenced by: '<S10>/Internal_2_4'
                             */
  real32_T Internal_3_1_InitialCondition;
                            /* Computed Parameter: Internal_3_1_InitialCondition
                             * Referenced by: '<S10>/Internal_3_1'
                             */
  real32_T Internal_3_2_InitialCondition;
                            /* Computed Parameter: Internal_3_2_InitialCondition
                             * Referenced by: '<S10>/Internal_3_2'
                             */
  real32_T Internal_3_3_A;             /* Computed Parameter: Internal_3_3_A
                                        * Referenced by: '<S10>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C;             /* Computed Parameter: Internal_3_3_C
                                        * Referenced by: '<S10>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition;
                            /* Computed Parameter: Internal_3_3_InitialCondition
                             * Referenced by: '<S10>/Internal_3_3'
                             */
  real32_T Internal_3_4_InitialCondition;
                            /* Computed Parameter: Internal_3_4_InitialCondition
                             * Referenced by: '<S10>/Internal_3_4'
                             */
  real32_T Internal_4_1_InitialCondition;
                            /* Computed Parameter: Internal_4_1_InitialCondition
                             * Referenced by: '<S10>/Internal_4_1'
                             */
  real32_T Internal_4_2_InitialCondition;
                            /* Computed Parameter: Internal_4_2_InitialCondition
                             * Referenced by: '<S10>/Internal_4_2'
                             */
  real32_T Internal_4_3_InitialCondition;
                            /* Computed Parameter: Internal_4_3_InitialCondition
                             * Referenced by: '<S10>/Internal_4_3'
                             */
  real32_T Internal_4_4_A;             /* Computed Parameter: Internal_4_4_A
                                        * Referenced by: '<S10>/Internal_4_4'
                                        */
  real32_T Internal_4_4_C;             /* Computed Parameter: Internal_4_4_C
                                        * Referenced by: '<S10>/Internal_4_4'
                                        */
  real32_T Internal_4_4_InitialCondition;
                            /* Computed Parameter: Internal_4_4_InitialCondition
                             * Referenced by: '<S10>/Internal_4_4'
                             */
  real32_T Internal_1_1_A_e;           /* Computed Parameter: Internal_1_1_A_e
                                        * Referenced by: '<S11>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C_i;           /* Computed Parameter: Internal_1_1_C_i
                                        * Referenced by: '<S11>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition_j;
                          /* Computed Parameter: Internal_1_1_InitialCondition_j
                           * Referenced by: '<S11>/Internal_1_1'
                           */
  real32_T Internal_1_2_InitialCondition_o;
                          /* Computed Parameter: Internal_1_2_InitialCondition_o
                           * Referenced by: '<S11>/Internal_1_2'
                           */
  real32_T Internal_1_3_InitialCondition_o;
                          /* Computed Parameter: Internal_1_3_InitialCondition_o
                           * Referenced by: '<S11>/Internal_1_3'
                           */
  real32_T Internal_2_1_InitialCondition_h;
                          /* Computed Parameter: Internal_2_1_InitialCondition_h
                           * Referenced by: '<S11>/Internal_2_1'
                           */
  real32_T Internal_2_2_A_k;           /* Computed Parameter: Internal_2_2_A_k
                                        * Referenced by: '<S11>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C_n;           /* Computed Parameter: Internal_2_2_C_n
                                        * Referenced by: '<S11>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition_f;
                          /* Computed Parameter: Internal_2_2_InitialCondition_f
                           * Referenced by: '<S11>/Internal_2_2'
                           */
  real32_T Internal_2_3_InitialCondition_d;
                          /* Computed Parameter: Internal_2_3_InitialCondition_d
                           * Referenced by: '<S11>/Internal_2_3'
                           */
  real32_T Internal_3_1_InitialCondition_a;
                          /* Computed Parameter: Internal_3_1_InitialCondition_a
                           * Referenced by: '<S11>/Internal_3_1'
                           */
  real32_T Internal_3_2_InitialCondition_i;
                          /* Computed Parameter: Internal_3_2_InitialCondition_i
                           * Referenced by: '<S11>/Internal_3_2'
                           */
  real32_T Internal_3_3_A_g;           /* Computed Parameter: Internal_3_3_A_g
                                        * Referenced by: '<S11>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C_i;           /* Computed Parameter: Internal_3_3_C_i
                                        * Referenced by: '<S11>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition_e;
                          /* Computed Parameter: Internal_3_3_InitialCondition_e
                           * Referenced by: '<S11>/Internal_3_3'
                           */
  real32_T converttoradianssec_Gain;
                                 /* Computed Parameter: converttoradianssec_Gain
                                  * Referenced by: '<S4>/convert to radians//sec'
                                  */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S41>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S41>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  real32_T SaturationVsupplytoVsupply_Lo_g;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lo_g
                           * Referenced by: '<S42>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconvertt_d;
                          /* Computed Parameter: conversiontodutycycleconvertt_d
                           * Referenced by: '<S42>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<Root>/Manual Switch'
                               */
  uint8_T ManualSwitch_CurrentSetting_e;
                            /* Computed Parameter: ManualSwitch_CurrentSetting_e
                             * Referenced by: '<S7>/Manual Switch'
                             */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<Root>/Manual Switch1'
                              */
  uint8_T ManualSwitch1_CurrentSetting_g;
                           /* Computed Parameter: ManualSwitch1_CurrentSetting_g
                            * Referenced by: '<S7>/Manual Switch1'
                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabC_CompensatorOverRob {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern Parameters_LabC_CompensatorOver LabC_CompensatorOverRobot_P;

/* Block signals (default storage) */
extern BlockIO_LabC_CompensatorOverRob LabC_CompensatorOverRobot_B;

/* Block states (default storage) */
extern D_Work_LabC_CompensatorOverRobo LabC_CompensatorOverRobot_DWork;

/* Model entry point functions */
extern void LabC_CompensatorOverRobot_initialize(void);
extern void LabC_CompensatorOverRobot_step(void);
extern void LabC_CompensatorOverRobot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabC_CompensatorOverRo *const LabC_CompensatorOverRobot_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'LabC_CompensatorOverRobot'
 * '<S1>'   : 'LabC_CompensatorOverRobot/Signal Builder'
 * '<S2>'   : 'LabC_CompensatorOverRobot/Signal Builder1'
 * '<S3>'   : 'LabC_CompensatorOverRobot/controller'
 * '<S4>'   : 'LabC_CompensatorOverRobot/measurement filter'
 * '<S5>'   : 'LabC_CompensatorOverRobot/plant'
 * '<S6>'   : 'LabC_CompensatorOverRobot/reference'
 * '<S7>'   : 'LabC_CompensatorOverRobot/controller/observer'
 * '<S8>'   : 'LabC_CompensatorOverRobot/controller/observer/Discrete Derivative'
 * '<S9>'   : 'LabC_CompensatorOverRobot/controller/observer/Discrete Derivative '
 * '<S10>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System'
 * '<S11>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator'
 * '<S12>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_1'
 * '<S13>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_2'
 * '<S14>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_3'
 * '<S15>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_1_4'
 * '<S16>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_1'
 * '<S17>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_2'
 * '<S18>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_3'
 * '<S19>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_2_4'
 * '<S20>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_1'
 * '<S21>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_2'
 * '<S22>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_3'
 * '<S23>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_3_4'
 * '<S24>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_1'
 * '<S25>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_2'
 * '<S26>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_3'
 * '<S27>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/IO Delay_4_4'
 * '<S28>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/Input Delay'
 * '<S29>'  : 'LabC_CompensatorOverRobot/controller/observer/LTI System/Output Delay'
 * '<S30>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_1'
 * '<S31>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_2'
 * '<S32>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_1_3'
 * '<S33>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_1'
 * '<S34>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_2'
 * '<S35>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_2_3'
 * '<S36>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_1'
 * '<S37>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_2'
 * '<S38>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/IO Delay_3_3'
 * '<S39>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/Input Delay'
 * '<S40>'  : 'LabC_CompensatorOverRobot/controller/observer/integrator/Output Delay'
 * '<S41>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S42>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST'
 * '<S43>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 * '<S44>'  : 'LabC_CompensatorOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST/Compare To Zero'
 */
#endif                             /* RTW_HEADER_LabC_CompensatorOverRobot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
