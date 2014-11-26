#include <math.h>
#include <stdio.h>


int main (void)
{
  double param, result;
  
  param = 45;
  result = tanh(param*M_PI/180);
  printf ("Hyperbolic tangent of %lf degrees is %lf\n", param, result );
  return 0;
}
