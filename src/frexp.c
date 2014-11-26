#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, result;
  int n;

  param = 15.2;
  result = frexp(param , &n);
  printf ("%f * 2^%d = %f\n", result, n, param);
  return 0;
}

