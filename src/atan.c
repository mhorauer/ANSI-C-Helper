#include <math.h>
#include <stdio.h>

int main (void)
{
  float x;
  float y;

  for (x = -10.0; x <= 10.0; x = x + 1)  {
    y = atan(x);
    printf ("ATAN(%f) = %f\n", x, y);
  }
  return 0;
}

