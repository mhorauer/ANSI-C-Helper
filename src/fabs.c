#include <math.h>
#include <stdio.h>

int main (void)
{
  float x;
  float y;

  x = 10.2;
  y = fabs(x);
  printf("fabs(%f) = %f\n", x, y);

  x = -3.6;
  y = fabs(x);
  printf("fabs(%f) = %f\n", x, y);
  return 0;
}

