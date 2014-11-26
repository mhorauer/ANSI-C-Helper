#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, fractpart, intpart;

  param = M_PI;
  fractpart = modf(param , &intpart);
  printf ("%lf = %lf + %lf \n", param, intpart, fractpart);
  return 0;
}
