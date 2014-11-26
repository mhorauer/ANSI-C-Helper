#include <math.h>
#include <stdio.h>

int main (void)
{
  double x;
  double y;

  printf("Enter a floating point number > ");
  scanf("%lf", &x);
  y = floor(x);
  printf("FLOOR(%lf) = %lf\n", x, y);
  return 0;
}
