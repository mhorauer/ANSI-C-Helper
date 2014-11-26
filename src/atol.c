#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int i;
  char szInput [256];

  printf ("Enter a long number: ");
  gets ( szInput );
  i = atol (szInput);
  printf ("Value entered is %d, and its double %d.\n",i,i*2);
  return 0;
}

