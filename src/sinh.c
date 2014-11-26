#include <math.h>
#include <stdio.h>
int main (void)
{
  double param, result;

  param = 45;
  result = sinh(param*M_PI/180);
  printf ("Hyperbolic sine of %lf degrees is %lf\n", param, result );
  return 0;
}
