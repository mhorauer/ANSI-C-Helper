#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, result;
  param = 45;

  result = sin(param*M_PI/180);
  printf ("Sine of %lf degrees is %lf\n", param, result );
  return 0;
}
