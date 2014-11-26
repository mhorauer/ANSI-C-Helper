#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  double n,m;
  char szInput [256];

  printf ( "Enter degrees: " );
  gets ( szInput );
  n = atof ( szInput );
  m = sin (n*M_PI/180);
  printf ( "sine of %f degrees is %f\n" , n, m );
  return 0;
}

