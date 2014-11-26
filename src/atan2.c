/* z approaches -pi as y goes from -10 to 0 */
/* z approaches +pi as y goes from +10 to 0 */
#include <math.h>
#include <stdio.h>

int main (void)
{
  float x;
  float y;
  float z;
  x = -1.0;
  for (y = -10.0; y < 10.0; y = y + 1)  {
    z = atan2(y,x);
    printf ("ATAN2(%f/%f) = %f\n", y, x, z);
  }
  return 0;
}

