#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int n,m;

  n = labs(65537);
  m = labs(-100000);
  printf ("n=%d\n",n);
  printf ("m=%d\n",m);
  return 0;
}

