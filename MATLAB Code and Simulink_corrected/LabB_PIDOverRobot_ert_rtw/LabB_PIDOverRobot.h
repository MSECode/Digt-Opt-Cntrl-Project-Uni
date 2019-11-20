/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_PIDOverRobot.h
 *
 * Code generated for Simulink model 'LabB_PIDOverRobot'.
 *
 * Model version                  : 1.573
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Nov 19 23:59:32 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LabB_PIDOverRobot_h_
#define RTW_HEADER_LabB_PIDOverRobot_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef LabB_PIDOverRobot_COMMON_INCLUDES_
# define LabB_PIDOverRobot_COMMON_INCLUDES_
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
#endif                                 /* LabB_PIDOverRobot_COMMON_INCLUDES_ */

#include "LabB_PIDOverRobot_types.h"

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

/* Block signals (default storage) */
typedef struct {
  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T converttometers;            /* '<S2>/convert to meters' */
  real32_T Gain;                       /* '<S1>/Gain' */
} BlockIO_LabB_PIDOverRobot;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S50>/PWM' */
  codertarget_arduinobase_interna obj_a;/* '<S49>/PWM' */
  e_codertarget_arduinobase_inter gobj_0;/* '<S50>/PWM' */
  e_codertarget_arduinobase_inter gobj_1;/* '<S50>/PWM' */
  e_codertarget_arduinobase_inter gobj_2;/* '<S50>/PWM' */
  e_codertarget_arduinobase_inter gobj_3;/* '<S50>/PWM' */
  e_codertarget_arduinobase_inter gobj_0_p;/* '<S49>/PWM' */
  e_codertarget_arduinobase_inter gobj_1_a;/* '<S49>/PWM' */
  e_codertarget_arduinobase_inter gobj_2_d;/* '<S49>/PWM' */
  e_codertarget_arduinobase_inter gobj_3_n;/* '<S49>/PWM' */
  Encoder_arduino_LabB_PIDOverRob obj_l;/* '<S3>/Encoder' */
  soMPU6050Gyro_LabB_PIDOverRobot obj_ls;/* '<S3>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_n;/* '<S50>/Digital Output1' */
  codertarget_arduinobase_blocks_ obj_i;/* '<S49>/Digital Output1' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S1>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S1>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S1>/To Workspace2' */

  struct {
    void *LoggedData[3];
  } x_wtheta_bu_PWORK;                 /* '<S1>/x_w, theta_b, u' */

  real32_T DiscreteTimeIntegratorconvertfr;
    /* '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)' */
  real32_T Integrator_DSTATE;          /* '<S34>/Integrator' */
  real32_T Filter_DSTATE;              /* '<S29>/Filter' */
} D_Work_LabB_PIDOverRobot;

/* Parameters (default storage) */
struct Parameters_LabB_PIDOverRobot_ {
  real32_T fGyroBias;                  /* Variable: fGyroBias
                                        * Referenced by: '<S2>/gyro bias'
                                        */
  real32_T fWheelRadius;               /* Variable: fWheelRadius
                                        * Referenced by: '<S2>/convert to meters'
                                        */
  real32_T PIDController_D;            /* Mask Parameter: PIDController_D
                                        * Referenced by: '<S28>/Derivative Gain'
                                        */
  real32_T PIDController_I;            /* Mask Parameter: PIDController_I
                                        * Referenced by: '<S31>/Integral Gain'
                                        */
  real32_T PIDController_InitialConditionF;
                              /* Mask Parameter: PIDController_InitialConditionF
                               * Referenced by: '<S29>/Filter'
                               */
  real32_T PIDController_InitialConditio_n;
                              /* Mask Parameter: PIDController_InitialConditio_n
                               * Referenced by: '<S34>/Integrator'
                               */
  real32_T PIDController_Kb;           /* Mask Parameter: PIDController_Kb
                                        * Referenced by: '<S27>/Kb'
                                        */
  real32_T PIDController_LowerSaturationLi;
                              /* Mask Parameter: PIDController_LowerSaturationLi
                               * Referenced by: '<S41>/Saturation'
                               */
  real32_T PIDController_N;            /* Mask Parameter: PIDController_N
                                        * Referenced by: '<S37>/Filter Coefficient'
                                        */
  real32_T PIDController_P;            /* Mask Parameter: PIDController_P
                                        * Referenced by: '<S39>/Proportional Gain'
                                        */
  real32_T PIDController_UpperSaturationLi;
                              /* Mask Parameter: PIDController_UpperSaturationLi
                               * Referenced by: '<S41>/Saturation'
                               */
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S49>/Saturation -Vsupply to Vsupply'
                               */
  real32_T M1V4MiddleMotorDriverPWM2D5FST_;
                              /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
                               * Referenced by: '<S50>/Saturation -Vsupply to Vsupply'
                               */
  real32_T Constant_Value;             /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S51>/Constant'
                                        */
  real32_T Constant_Value_k;           /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S52>/Constant'
                                        */
  real32_T DiscreteTimeIntegratorconvertfr;
                          /* Computed Parameter: DiscreteTimeIntegratorconvertfr
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T DiscreteTimeIntegratorconvert_o;
                          /* Computed Parameter: DiscreteTimeIntegratorconvert_o
                           * Referenced by: '<S2>/Discrete-Time  Integrator (convert from theta_b_dot to theta_b)'
                           */
  real32_T converttoradians_Gain;   /* Computed Parameter: converttoradians_Gain
                                     * Referenced by: '<S2>/convert to  radians'
                                     */
  real32_T Integrator_gainval;         /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S34>/Integrator'
                                        */
  real32_T Filter_gainval;             /* Computed Parameter: Filter_gainval
                                        * Referenced by: '<S29>/Filter'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S1>/Gain'
                                        */
  real32_T converttoradianssec_Gain;
                                 /* Computed Parameter: converttoradianssec_Gain
                                  * Referenced by: '<S2>/convert to radians//sec'
                                  */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S49>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S49>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  real32_T SaturationVsupplytoVsupply_Lo_h;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lo_h
                           * Referenced by: '<S50>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconvertt_i;
                          /* Computed Parameter: conversiontodutycycleconvertt_i
                           * Referenced by: '<S50>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabB_PIDOverRobot {
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
extern Parameters_LabB_PIDOverRobot LabB_PIDOverRobot_P;

/* Block signals (default storage) */
extern BlockIO_LabB_PIDOverRobot LabB_PIDOverRobot_B;

/* Block states (default storage) */
extern D_Work_LabB_PIDOverRobot LabB_PIDOverRobot_DWork;

/* Model entry point functions */
extern void LabB_PIDOverRobot_initialize(void);
extern void LabB_PIDOverRobot_step(void);
extern void LabB_PIDOverRobot_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabB_PIDOverRobot *const LabB_PIDOverRobot_M;

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
 * '<Root>' : 'LabB_PIDOverRobot'
 * '<S1>'   : 'LabB_PIDOverRobot/controller'
 * '<S2>'   : 'LabB_PIDOverRobot/measurement filter'
 * '<S3>'   : 'LabB_PIDOverRobot/plant'
 * '<S4>'   : 'LabB_PIDOverRobot/controller/PID Controller'
 * '<S5>'   : 'LabB_PIDOverRobot/controller/PID Controller/Anti-windup'
 * '<S6>'   : 'LabB_PIDOverRobot/controller/PID Controller/D Gain'
 * '<S7>'   : 'LabB_PIDOverRobot/controller/PID Controller/Filter'
 * '<S8>'   : 'LabB_PIDOverRobot/controller/PID Controller/Filter ICs'
 * '<S9>'   : 'LabB_PIDOverRobot/controller/PID Controller/I Gain'
 * '<S10>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain'
 * '<S11>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain Fdbk'
 * '<S12>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator'
 * '<S13>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator ICs'
 * '<S14>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Copy'
 * '<S15>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Gain'
 * '<S16>'  : 'LabB_PIDOverRobot/controller/PID Controller/P Copy'
 * '<S17>'  : 'LabB_PIDOverRobot/controller/PID Controller/Parallel P Gain'
 * '<S18>'  : 'LabB_PIDOverRobot/controller/PID Controller/Reset Signal'
 * '<S19>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation'
 * '<S20>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation Fdbk'
 * '<S21>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum'
 * '<S22>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum Fdbk'
 * '<S23>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode'
 * '<S24>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode Sum'
 * '<S25>'  : 'LabB_PIDOverRobot/controller/PID Controller/postSat Signal'
 * '<S26>'  : 'LabB_PIDOverRobot/controller/PID Controller/preSat Signal'
 * '<S27>'  : 'LabB_PIDOverRobot/controller/PID Controller/Anti-windup/Back Calculation'
 * '<S28>'  : 'LabB_PIDOverRobot/controller/PID Controller/D Gain/Internal Parameters'
 * '<S29>'  : 'LabB_PIDOverRobot/controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S30>'  : 'LabB_PIDOverRobot/controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S31>'  : 'LabB_PIDOverRobot/controller/PID Controller/I Gain/Internal Parameters'
 * '<S32>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S33>'  : 'LabB_PIDOverRobot/controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S34>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator/Discrete'
 * '<S35>'  : 'LabB_PIDOverRobot/controller/PID Controller/Integrator ICs/Internal IC'
 * '<S36>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Copy/Disabled'
 * '<S37>'  : 'LabB_PIDOverRobot/controller/PID Controller/N Gain/Internal Parameters'
 * '<S38>'  : 'LabB_PIDOverRobot/controller/PID Controller/P Copy/Disabled'
 * '<S39>'  : 'LabB_PIDOverRobot/controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S40>'  : 'LabB_PIDOverRobot/controller/PID Controller/Reset Signal/Disabled'
 * '<S41>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation/Enabled'
 * '<S42>'  : 'LabB_PIDOverRobot/controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S43>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum/Sum_PID'
 * '<S44>'  : 'LabB_PIDOverRobot/controller/PID Controller/Sum Fdbk/Disabled'
 * '<S45>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode/Disabled'
 * '<S46>'  : 'LabB_PIDOverRobot/controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S47>'  : 'LabB_PIDOverRobot/controller/PID Controller/postSat Signal/Forward_Path'
 * '<S48>'  : 'LabB_PIDOverRobot/controller/PID Controller/preSat Signal/Forward_Path'
 * '<S49>'  : 'LabB_PIDOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S50>'  : 'LabB_PIDOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST'
 * '<S51>'  : 'LabB_PIDOverRobot/plant/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 * '<S52>'  : 'LabB_PIDOverRobot/plant/M1V4 Middle Motor Driver PWM2, D5 FST/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_LabB_PIDOverRobot_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
