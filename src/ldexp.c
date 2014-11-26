#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, result;
  int n;
  
  param = 0.95;
  n = 4;
  result = ldexp(param , n);
  printf ("%f * 2^%d = %f\n", param, n, result);
  return 0;
}
