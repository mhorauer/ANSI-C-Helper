#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, result;

  param = 60;
  result = tan(param*M_PI/180);
  printf ("Tangent of %lf degrees is %lf\n", param, result );
  return 0;
}
