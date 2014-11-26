#include <math.h>
#include <stdio.h>

int main (void)
{
  double x;
  double y;

  printf("Enter a floating point value > ");
  scanf("%lf", &x);
  y = ceil(x);
  printf("CEIL(%f) = %f\n", x, y);
  return 0;
}

