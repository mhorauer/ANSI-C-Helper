#include <math.h>
#include <stdio.h>

int main (void)
{
  double param;
  double result;

  param = 1000.0;
  result = log10(param);
  printf ("log10(%lf) = %lf\n", param, result );
  return 0;
}
