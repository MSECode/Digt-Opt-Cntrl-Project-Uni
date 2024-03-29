/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: LabB_CheckCommunications.h
 *
 * Code generated for Simulink model 'LabB_CheckCommunications'.
 *
 * Model version                  : 1.467
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Nov 19 22:06:52 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_LabB_CheckCommunications_h_
#define RTW_HEADER_LabB_CheckCommunications_h_
#include <math.h>
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef LabB_CheckCommunications_COMMON_INCLUDES_
# define LabB_CheckCommunications_COMMON_INCLUDES_
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
#endif                           /* LabB_CheckCommunications_COMMON_INCLUDES_ */

#include "LabB_CheckCommunications_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_defines.h"
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
  real_T Gain;                         /* '<S2>/Gain' */
  real_T Gain_j;                       /* '<S3>/Gain' */
  real_T SineWave;                     /* '<Root>/Sine Wave' */
  int32_T M2V3LeftConnector1819;       /* '<S1>/M2V3 Left Connector 18, 19' */
} BlockIO_LabB_CheckCommunication;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S6>/PWM' */
  codertarget_arduinobase_interna obj_g;/* '<S5>/PWM' */
  e_codertarget_arduinobase_inter gobj_0;/* '<S6>/PWM' */
  e_codertarget_arduinobase_inter gobj_1;/* '<S6>/PWM' */
  e_codertarget_arduinobase_inter gobj_2;/* '<S6>/PWM' */
  e_codertarget_arduinobase_inter gobj_3;/* '<S6>/PWM' */
  e_codertarget_arduinobase_inter gobj_0_j;/* '<S5>/PWM' */
  e_codertarget_arduinobase_inter gobj_1_g;/* '<S5>/PWM' */
  e_codertarget_arduinobase_inter gobj_2_f;/* '<S5>/PWM' */
  e_codertarget_arduinobase_inter gobj_3_a;/* '<S5>/PWM' */
  soMPU6050Accel_LabB_CheckCommun obj_ge;/* '<S1>/Accelerometer' */
  soMPU6050Gyro_LabB_CheckCommuni obj_p;/* '<S1>/Gyroscope' */
  codertarget_arduinobase_blocks_ obj_f;/* '<S6>/Digital Output1' */
  codertarget_arduinobase_blocks_ obj_e;/* '<S5>/Digital Output1' */
  Encoder_arduino_LabB_CheckCommu obj_c;/* '<S1>/M2V3 Left Connector 18, 19' */
  real_T angularvelocitytoangle_DSTATE;/* '<S1>/angular velocity to angle' */
  real_T lastSin;                      /* '<Root>/Sine Wave' */
  real_T lastCos;                      /* '<Root>/Sine Wave' */
  struct {
    void *LoggedData;
  } accelerometer_PWORK;               /* '<Root>/accelerometer' */

  struct {
    void *LoggedData;
  } encoder_PWORK;                     /* '<Root>/encoder' */

  struct {
    void *LoggedData;
  } gyro_PWORK;                        /* '<Root>/gyro' */

  struct {
    void *LoggedData;
  } motor_PWORK;                       /* '<Root>/motor' */

  int32_T systemEnable;                /* '<Root>/Sine Wave' */
} D_Work_LabB_CheckCommunications;

/* Parameters (default storage) */
struct Parameters_LabB_CheckCommunicat_ {
  real32_T M1V4LeftMotorDriverPWM6D8FST_Vs;
                              /* Mask Parameter: M1V4LeftMotorDriverPWM6D8FST_Vs
                               * Referenced by: '<S5>/Saturation -Vsupply to Vsupply'
                               */
  real32_T M1V4MiddleMotorDriverPWM2D5FST_;
                              /* Mask Parameter: M1V4MiddleMotorDriverPWM2D5FST_
                               * Referenced by: '<S6>/Saturation -Vsupply to Vsupply'
                               */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S7>/Constant'
                                        */
  real_T Constant_Value_m;             /* Expression: 0
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T angleoffset_Value;            /* Expression: pi/2
                                        * Referenced by: '<S1>/angle offset'
                                        */
  real_T rawyaccelerationtog_y_Gain;   /* Expression: 1 / 2048
                                        * Referenced by: '<S1>/raw y acceleration to g_y'
                                        */
  real_T rawzaccelerationtog_z_Gain;   /* Expression: 1 / 2048
                                        * Referenced by: '<S1>/raw z acceleration to g_z'
                                        */
  real_T accelerometeranglebias_Value; /* Expression: 0
                                        * Referenced by: '<S1>/accelerometer angle bias'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S2>/Gain'
                                        */
  real_T angularvelocitytoangle_gainval;
                           /* Computed Parameter: angularvelocitytoangle_gainval
                            * Referenced by: '<S1>/angular velocity to angle'
                            */
  real_T angularvelocitytoangle_IC;    /* Expression: 0
                                        * Referenced by: '<S1>/angular velocity to angle'
                                        */
  real_T Gain_Gain_o;                  /* Expression: 180/pi
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T SineWave_Amp;                 /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: pi/3
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Hsin;                /* Computed Parameter: SineWave_Hsin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_HCos;                /* Computed Parameter: SineWave_HCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PSin;                /* Computed Parameter: SineWave_PSin
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_PCos;                /* Computed Parameter: SineWave_PCos
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T rawxvelocitytodegsec_Gain;    /* Expression: 1 / 131
                                        * Referenced by: '<S1>/raw x velocity to deg. // sec.'
                                        */
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S4>/Gain1'
                                        */
  real_T gyrovelocitybias_Value;       /* Expression: 0
                                        * Referenced by: '<S1>/gyro velocity bias'
                                        */
  real32_T SaturationVsupplytoVsupply_Lowe;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lowe
                           * Referenced by: '<S5>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconverttou;
                          /* Computed Parameter: conversiontodutycycleconverttou
                           * Referenced by: '<S5>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
  real32_T SaturationVsupplytoVsupply_Lo_j;
                          /* Computed Parameter: SaturationVsupplytoVsupply_Lo_j
                           * Referenced by: '<S6>/Saturation -Vsupply to Vsupply'
                           */
  real32_T conversiontodutycycleconvertt_k;
                          /* Computed Parameter: conversiontodutycycleconvertt_k
                           * Referenced by: '<S6>/conversion to dutycycle (convert to uint8, overflow will provide reverse polairty magnitued)'
                           */
};

/* Real-time Model Data Structure */
struct tag_RTM_LabB_CheckCommunication {
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
extern Parameters_LabB_CheckCommunicat LabB_CheckCommunications_P;

/* Block signals (default storage) */
extern BlockIO_LabB_CheckCommunication LabB_CheckCommunications_B;

/* Block states (default storage) */
extern D_Work_LabB_CheckCommunications LabB_CheckCommunications_DWork;

/* Model entry point functions */
extern void LabB_CheckCommunications_initialize(void);
extern void LabB_CheckCommunications_step(void);
extern void LabB_CheckCommunications_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LabB_CheckCommunicatio *const LabB_CheckCommunications_M;

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
 * '<Root>' : 'LabB_CheckCommunications'
 * '<S1>'   : 'LabB_CheckCommunications/Balancing Robot'
 * '<S2>'   : 'LabB_CheckCommunications/Radians to Degrees'
 * '<S3>'   : 'LabB_CheckCommunications/Radians to Degrees1'
 * '<S4>'   : 'LabB_CheckCommunications/Balancing Robot/Degrees to Radians'
 * '<S5>'   : 'LabB_CheckCommunications/Balancing Robot/M1V4 Left Motor Driver PWM6, D8 FST'
 * '<S6>'   : 'LabB_CheckCommunications/Balancing Robot/M1V4 Middle Motor Driver PWM2, D5 FST'
 * '<S7>'   : 'LabB_CheckCommunications/Balancing Robot/M1V4 Left Motor Driver PWM6, D8 FST/Compare To Zero'
 * '<S8>'   : 'LabB_CheckCommunications/Balancing Robot/M1V4 Middle Motor Driver PWM2, D5 FST/Compare To Zero'
 */
#endif                              /* RTW_HEADER_LabB_CheckCommunications_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
