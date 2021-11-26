/* Compute the sum of the squares of a vector of signed shorts

 * ARM DSP version
 * Copyright 2021 J. Silva
 * May be used under the terms of the GNU Lesser General Public License (LGPL)
 */
#include "arm_math.h"

unsigned long long sumsq_arm(signed short *in,int cnt){
  q63_t sum = 0;

  arm_dot_prod_q15((q15_t *)in, (q15_t *)in, (uint32_t)cnt, &sum);

  return (long long)sum;
}
