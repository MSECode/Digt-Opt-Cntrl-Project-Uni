#ifndef __EBrmIeKF42JWzSSn4953bC_h__
#define __EBrmIeKF42JWzSSn4953bC_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_soMPU6050Accel
#define typedef_soMPU6050Accel

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} soMPU6050Accel;

#endif                                 /*typedef_soMPU6050Accel*/

#ifndef typedef_InstanceStruct_EBrmIeKF42JWzSSn4953bC
#define typedef_InstanceStruct_EBrmIeKF42JWzSSn4953bC

typedef struct {
  SimStruct *S;
  soMPU6050Accel sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  int16_T *b_y0;
  int16_T *b_y1;
  int16_T *y2;
  covrtInstance *covInst_CONTAINER_BLOCK_INDEX;
} InstanceStruct_EBrmIeKF42JWzSSn4953bC;

#endif                                 /*typedef_InstanceStruct_EBrmIeKF42JWzSSn4953bC*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_EBrmIeKF42JWzSSn4953bC(SimStruct *S, int_T method,
  void* data);

#endif
