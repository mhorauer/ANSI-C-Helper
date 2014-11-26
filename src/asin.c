#include <math.h>
#include <stdio.h>

int main (void)
{
  float x;
  float y;
  for (x = -1.0; x <= 1.0; x = x + 0.1)  {
    y = asin(x);
    printf ("ASIN(%f) = %f\n", x, y);
  }
  return 0;
}

