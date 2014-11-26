#include <math.h>
#include <stdio.h>

int main (void)
{
  float x;
  float y;

  for (x = 0; x < (2 * M_PI); x = x + 1)  {
    y = cosh(x);
    printf("cosh(%f) = %f\n", x, y);
  }
  return 0;
}

