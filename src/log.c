#include <math.h>
#include <stdio.h>

int main (void)
{
  double param, result;
  
  param = 5.5;
  result = log(param);
  printf ("ln(%lf) = %lf\n", param, result );
  return 0;
}

