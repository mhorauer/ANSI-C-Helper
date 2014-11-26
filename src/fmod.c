#include <math.h>
#include <stdio.h>

int main (void)
{
  double x;
  double y;
  double z;

  printf("Enter two floating point numbers separated by a space > ");
  scanf("%lf %lf", &x, &y);
  z = fmod(x,y);
  printf("FMOD(%f/%f) = %f\n", x, y, z);
  return 0;
}

