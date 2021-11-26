/* ARM DSP version of peakval
 * Copyright 2021 J. Silva
 */
#include <stdlib.h>
#include "arm_math.h"
#include "fec.h"
int peakval_arm(signed short *b,int len){
  q15_t peak = 0;
  uint32_t peak_idx; // Not used

  arm_absmax_q15((q15_t *)b, len, &peak, &peak_idx);

  (void)peak_idx;

  return (int)peak;
}
