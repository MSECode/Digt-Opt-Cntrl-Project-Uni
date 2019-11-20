/* Include files */

#include "LabB_CheckCommunications_cgxe.h"
#include "m_EBrmIeKF42JWzSSn4953bC.h"

unsigned int cgxe_LabB_CheckCommunications_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1916113174 &&
      ssGetChecksum1(S) == 1806179118 &&
      ssGetChecksum2(S) == 2011063855 &&
      ssGetChecksum3(S) == 2180596236) {
    method_dispatcher_EBrmIeKF42JWzSSn4953bC(S, method, data);
    return 1;
  }

  return 0;
}
