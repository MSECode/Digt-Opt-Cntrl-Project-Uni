/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_ObserverAndControllerOverRobot.h
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

#ifndef RTW_HEADER_LabB_ObserverAndControllerOverRobot_h_
#define RTW_HEADER_LabB_ObserverAndControllerOverRobot_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef LabB_ObserverAndControllerOverRobot_COMMON_INCLUDES_
# define LabB_ObserverAndControllerOverRobot_COMMON_INCLUDES_
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
#endif                /* LabB_ObserverAndControllerOverRobot_COMMON_INCLUDES_ */

#include "LabB_ObserverAndControllerOverRobot_types.h"

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
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

#define LabB_ObserverAndControllerOverRobot_M (LabB_ObserverAndControllerOv_M)

/* Block signals (default storage) */
typedef struct {
  real32_T Add3[4];                    /* '<S4>/Add3' */
  real32_T Add[3];                     /* '<S4>/Add' */
  real32_T Sum_h[2];                   /* '<S4>/Sum' */
  int16_T out[3];
  real32_T converttometers;            /* '<S2>/convert to meters' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T Sum1;                       /* '<S7>/Sum1' */
  real32_T Sum3;                       /* '<S7>/Sum3' */
  real32_T Add2[4];                    /* '<S4>/Add2' */
  real32_T Product1;                   /* '<S1>/Product1' */
  real32_T Sum2;                       /* '<S7>/Sum2' */
  real32_T TSamp_n;                    /* '<S6>/TSamp' */
  real32_T TSamp;                      /* '<S5>/TSamp' */
  int32_T rtb_Encoder_m;
} BlockIO_LabB_ObserverAndControl;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S39>/PWM' */
  codertarget_arduinobase_interna obj_f;/* '<S38>/PWM' */
  e_codertarget_arduinobase_inter gobj_0;/* '<S39>/PWM' */
  e_codertarget_arduinobase_inter gobj_1;/* '<S39>/PWM' */
  e_codertarget_arduinobase_inter gobj_2;/* '<S39>/PWM' */
  e_codertarget_arduinobase_inter gobj_3;/* '<S39>/PWM' */
  e_codertarget_arduinobase_inter gobj_0_p;/* '<S38>/PWM' */
  e_codertarget_arduinobase_inter gobj_1_f;/* '<S38>/PWM' */
  e_codertarget_arduinobase_inter gobj_2_l;/* '<S38>/PWM' */
  e_codertarget_arduinobase_inter gobj_3_o;/* '<S38>/PWM' */
  Encoder_arduino_LabB_ObserverAn obj_g;/* '<S3>/Encoder' */
  soMPU6050Gyro_LabB_ObserverAndC obj_fy;/* '<S3>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_n;/* '<S39>/Digital Output1' */
  codertarget_arduinobase_blocks_ obj_j;/* '<S38>/Digital Output1' */
  struct {
    void *LoggedData[3];
  } measuredx_wtheta_bandinputu_PWO;
                                  /* '<S4>/measured x_w, theta_b and input u' */

  struct {
    void *LoggedData[4];
  } x_w_hat_fulltheta_b_hat_fullx_w;
  /* '<S4>/x_w_hat_full, theta_b_hat_full, x_w_hat_reduced, theta_b_hat_reduced' */

  real32_T UD_DSTATE;                  /* '<S5>/UD' */
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T UD_DSTATE_o;                /* '<S6>/UD' */
  real32_T Internal_1_1_DSTATE;        /* '<S7>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE;        /* '<S7>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE;        /* '<S7>/Internal_3_3' */
  real32_T Internal_4_4_DSTATE;        /* '<S7>/Internal_4_4' */
  real32_T Internal_1_1_DSTATE_m;      /* '<S8>/Internal_1_1' */
  real32_T Internal_2_2_DSTATE_p;      /* '<S8>/Internal_2_2' */
  real32_T Internal_3_3_DSTATE_o;      /* '<S8>/Internal_3_3' */
} D_Work_LabB_ObserverAndControll;

/* Parameters (default storage) */
struct Parameters_LabB_ObserverAndCont_ {
  real32_T Ad[16];                     /* Variable: Ad
                                        * Referenced by: '<S4>/Gain7'
                                        */
  real32_T Bd[4];                      /* Variable: Bd
                                        * Referenced by: '<S4>/Gain8'
                                        */
  real32_T Cd[8];                      /* Variable: Cd
                                        * Referenced by: '<S4>/Gain10'
                                        */
  real32_T Kd[4];                      /* Variable: Kd
                                        * Referenced by: '<S1>/controller'
                                        */
  real32_T Ld[8];                      /* Variable: Ld
                                        * Referenced by: '<S4>/Gain9'
                                        */
  real32_T Md1[9];                     /* Variable: Md1
                                        * Referenced by: '<S4>/Gain'
                                        */
  real32_T Md2[3];                     /* Variable: Md2
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real32_T Md3[3];                     /* Variable: Md3
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real32_T Md4[3];                     /* Variable: Md4
                                        * Referenced by: '<S4>/Gain3'
                                        */
  real32_T Md5[3];                     /* Variable: Md5
                                        * Referenced by: '<S4>/Gain4'
                                        */
  real32_T Md6[4];                     /* Variable: Md6
                                        * Referenced by: '<S4>/Gain5'
                                        */
  real32_T Md7[12];                    /* Variable: Md7
                                        * Referenced by: '<S4>/Gain6'
                                        */
  real32_T fGyroBias;                  /* Variable: fGyroBias
                                        * Referenced by: '<S2>/gyro bias'
                                        */
  real32_T fWheelRadius;               /* Variable: fWheelRadius
                                        * Referenced by: '<S2>/convert to meters'
                                        */
  real32_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S5>/UD'
                               */
  real32_T DiscreteDerivative_ICPrevScal_n;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_n
                               * Referenced by: '<S6>/UD'
                               */
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S38>/Saturation -Vsupply to Vsupply'
                               */
  real32_T M1V4MiddleMotorDriverPWM2D5FST_;
                              /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
                               * Referenced by: '<S39>/Saturation -Vsupply to Vsupply'
                               */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S40>/Constant'
                                        */
  real32_T Constant_Value_c;           /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S41>/Constant'
                                        */
  real32_T converttoradians_Gain;   /* Computed Parameter: converttoradians_Gain
                                     * Referenced by: '<S2>/convert to  radians'
                                     */
  real32_T TSamp_WtEt;                 /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S5>/TSamp'
                                        */
  real32_T DiscreteTimeIntegratorconvertfr;
                          /* Computed Parameter: DiscreteTimeIntegratorconvertfr
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T DiscreteTimeIntegratorconvert_e;
                          /* Computed Parameter: DiscreteTimeIntegratorconvert_e
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T TSamp_WtEt_m;               /* Computed Parameter: TSamp_WtEt_m
                                        * Referenced by: '<S6>/TSamp'
                                        */
  real32_T Internal_1_1_A;             /* Computed Parameter: Internal_1_1_A
                                        * Referenced by: '<S7>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C;             /* Computed Parameter: Internal_1_1_C
                                        * Referenced by: '<S7>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition;
                            /* Computed Parameter: Internal_1_1_InitialCondition
                             * Referenced by: '<S7>/Internal_1_1'
                             */
  real32_T Internal_1_2_InitialCondition;
                            /* Computed Parameter: Internal_1_2_InitialCondition
                             * Referenced by: '<S7>/Internal_1_2'
                             */
  real32_T Internal_1_3_InitialCondition;
                            /* Computed Parameter: Internal_1_3_InitialCondition
                             * Referenced by: '<S7>/Internal_1_3'
                             */
  real32_T Internal_1_4_InitialCondition;
                            /* Computed Parameter: Internal_1_4_InitialCondition
                             * Referenced by: '<S7>/Internal_1_4'
                             */
  real32_T Internal_2_1_InitialCondition;
                            /* Computed Parameter: Internal_2_1_InitialCondition
                             * Referenced by: '<S7>/Internal_2_1'
                             */
  real32_T Internal_2_2_A;             /* Computed Parameter: Internal_2_2_A
                                        * Referenced by: '<S7>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C;             /* Computed Parameter: Internal_2_2_C
                                        * Referenced by: '<S7>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition;
                            /* Computed Parameter: Internal_2_2_InitialCondition
                             * Referenced by: '<S7>/Internal_2_2'
                             */
  real32_T Internal_2_3_InitialCondition;
                            /* Computed Parameter: Internal_2_3_InitialCondition
                             * Referenced by: '<S7>/Internal_2_3'
                             */
  real32_T Internal_2_4_InitialCondition;
                            /* Computed Parameter: Internal_2_4_InitialCondition
                             * Referenced by: '<S7>/Internal_2_4'
                             */
  real32_T Internal_3_1_InitialCondition;
                            /* Computed Parameter: Internal_3_1_InitialCondition
                             * Referenced by: '<S7>/Internal_3_1'
                             */
  real32_T Internal_3_2_InitialCondition;
                            /* Computed Parameter: Internal_3_2_InitialCondition
                             * Referenced by: '<S7>/Internal_3_2'
                             */
  real32_T Internal_3_3_A;             /* Computed Parameter: Internal_3_3_A
                                        * Referenced by: '<S7>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C;             /* Computed Parameter: Internal_3_3_C
                                        * Referenced by: '<S7>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition;
                            /* Computed Parameter: Internal_3_3_InitialCondition
                             * Referenced by: '<S7>/Internal_3_3'
                             */
  real32_T Internal_3_4_InitialCondition;
                            /* Computed Parameter: Internal_3_4_InitialCondition
                             * Referenced by: '<S7>/Internal_3_4'
                             */
  real32_T Internal_4_1_InitialCondition;
                            /* Computed Parameter: Internal_4_1_InitialCondition
                             * Referenced by: '<S7>/Internal_4_1'
                             */
  real32_T Internal_4_2_InitialCondition;
                            /* Computed Parameter: Internal_4_2_InitialCondition
                             * Referenced by: '<S7>/Internal_4_2'
                             */
  real32_T Internal_4_3_InitialCondition;
                            /* Computed Parameter: Internal_4_3_InitialCondition
                             * Referenced by: '<S7>/Internal_4_3'
                             */
  real32_T Internal_4_4_A;             /* Computed Parameter: Internal_4_4_A
                                        * Referenced by: '<S7>/Internal_4_4'
                                        */
  real32_T Internal_4_4_C;             /* Computed Parameter: Internal_4_4_C
                                        * Referenced by: '<S7>/Internal_4_4'
                                        */
  real32_T Internal_4_4_InitialCondition;
                            /* Computed Parameter: Internal_4_4_InitialCondition
                             * Referenced by: '<S7>/Internal_4_4'
                             */
  real32_T Internal_1_1_A_m;           /* Computed Parameter: Internal_1_1_A_m
                                        * Referenced by: '<S8>/Internal_1_1'
                                        */
  real32_T Internal_1_1_C_h;           /* Computed Parameter: Internal_1_1_C_h
                                        * Referenced by: '<S8>/Internal_1_1'
                                        */
  real32_T Internal_1_1_InitialCondition_e;
                          /* Computed Parameter: Internal_1_1_InitialCondition_e
                           * Referenced by: '<S8>/Internal_1_1'
                           */
  real32_T Internal_1_2_InitialCondition_o;
                          /* Computed Parameter: Internal_1_2_InitialCondition_o
                           * Referenced by: '<S8>/Internal_1_2'
                           */
  real32_T Internal_1_3_InitialCondition_b;
                          /* Computed Parameter: Internal_1_3_InitialCondition_b
                           * Referenced by: '<S8>/Internal_1_3'
                           */
  real32_T Internal_2_1_InitialCondition_e;
                          /* Computed Parameter: Internal_2_1_InitialCondition_e
                           * Referenced by: '<S8>/Internal_2_1'
                           */
  real32_T Internal_2_2_A_o;           /* Computed Parameter: Internal_2_2_A_o
                                        * Referenced by: '<S8>/Internal_2_2'
                                        */
  real32_T Internal_2_2_C_p;           /* Computed Parameter: Internal_2_2_C_p
                                        * Referenced by: '<S8>/Internal_2_2'
                                        */
  real32_T Internal_2_2_InitialCondition_b;
                          /* Computed Parameter: Internal_2_2_InitialCondition_b
                           * Referenced by: '<S8>/Internal_2_2'
                           */
  real32_T Internal_2_3_InitialCondition_h;
                          /* Computed Parameter: Internal_2_3_InitialCondition_h
                           * Referenced by: '<S8>/Internal_2_3'
                           */
  real32_T Internal_3_1_InitialCondition_m;
                          /* Computed Parameter: Internal_3_1_InitialCondition_m
                           * Referenced by: '<S8>/Internal_3_1'
                           */
  real32_T Internal_3_2_InitialCondition_k;
                          /* Computed Parameter: Internal_3_2_InitialCondition_k
                           * Referenced by: '<S8>/Internal_3_2'
                           */
  real32_T Internal_3_3_A_a;           /* Computed Parameter: Internal_3_3_A_a
                                        * Referenced by: '<S8>/Internal_3_3'
                                        */
  real32_T Internal_3_3_C_h;           /* Computed Parameter: Internal_3_3_C_h
                                        * Referenced by: '<S8>/Internal_3_3'
                                        */
  real32_T Internal_3_3_InitialCondition_d;
                          /* Computed Parameter: Internal_3_3_InitialCondition_d
                           * Referenced by: '<S8>/Internal_3_3'
                           */
  real32_T converttoradianssec_Gain;
                                 /* Computed Parameter: converttoradianssec_Gain
                                  * Referenced by: '<S2>/convert to radians//sec'
                                  */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S38>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S38>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  real32_T SaturationVsupplytoVsupply_Lo_g;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lo_g
                           * Referenced by: '<S39>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconvertt_b;
                          /* Computed Parameter: conversiontodutycycleconvertt_b
                           * Referenced by: '<S39>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S4>/Manual Switch'
                               */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S4>/Manual Switch1'
                              */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabB_ObserverAndControl {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

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
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern Parameters_LabB_ObserverAndCont LabB_ObserverAndControllerOve_P;

/* Block signals (default storage) */
extern BlockIO_LabB_ObserverAndControl LabB_ObserverAndControllerOve_B;

/* Block states (default storage) */
extern D_Work_LabB_ObserverAndControll LabB_ObserverAndControlle_DWork;

/* Model entry point functions */
extern void LabB_ObserverAndControllerOverRobot_initialize(void);
extern void LabB_ObserverAndControllerOverRobot_step(void);
extern void LabB_ObserverAndControllerOverRobot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabB_ObserverAndContro *const LabB_ObserverAndControllerOv_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/Data Type Duplicate' : Unused code path elimination
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
 * '<Root>' : 'LabB_ObserverAndControllerOverRobot'
 * '<S1>'   : 'LabB_ObserverAndControllerOverRobot/controller'
 * '<S2>'   : 'LabB_ObserverAndControllerOverRobot/measurement filter'
 * '<S3>'   : 'LabB_ObserverAndControllerOverRobot/plant'
 * '<S4>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer'
 * '<S5>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer/Discrete Derivative'
 * '<S6>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer/Discrete Derivative '
 * '<S7>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System'
 * '<S8>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator'
 * '<S9>'   : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_1_1'
 * '<S10>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_1_2'
 * '<S11>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_1_3'
 * '<S12>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_1_4'
 * '<S13>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_2_1'
 * '<S14>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_2_2'
 * '<S15>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_2_3'
 * '<S16>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_2_4'
 * '<S17>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_3_1'
 * '<S18>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_3_2'
 * '<S19>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_3_3'
 * '<S20>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_3_4'
 * '<S21>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_4_1'
 * '<S22>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_4_2'
 * '<S23>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_4_3'
 * '<S24>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/IO Delay_4_4'
 * '<S25>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/Input Delay'
 * '<S26>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/LTI System/Output Delay'
 * '<S27>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_1_1'
 * '<S28>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_1_2'
 * '<S29>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_1_3'
 * '<S30>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_2_1'
 * '<S31>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_2_2'
 * '<S32>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_2_3'
 * '<S33>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_3_1'
 * '<S34>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_3_2'
 * '<S35>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/IO Delay_3_3'
 * '<S36>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/Input Delay'
 * '<S37>'  : 'LabB_ObserverAndControllerOverRobot/controller/observer/integrator/Output Delay'
 * '<S38>'  : 'LabB_ObserverAndControllerOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S39>'  : 'LabB_ObserverAndControllerOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST'
 * '<S40>'  : 'LabB_ObserverAndControllerOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 * '<S41>'  : 'LabB_ObserverAndControllerOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST/Compare To Zero'
 */
#endif                   /* RTW_HEADER_LabB_ObserverAndControllerOverRobot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
