#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  char szInput [256];
  char * pEnd;
  double dbl;
  
  printf ("Enter a floating-point value> ");
  gets (szInput);
  dbl = strtod (szInput,&pEnd);
  printf ("Value entered: %lf. Its square: %lf\n",dbl,dbl*dbl);
  return 0;
}
