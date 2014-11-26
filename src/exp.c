#include <math.h>
#include <stdio.h>

int main (void)
{
  double x;
  double y;

  x = 4.605170186;
  y = exp(x);
  printf("EXP(%f) = %f\n", x, y);
  return 0;
}

