#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int i;
  char szInput [256];

  printf ("Enter a number: ");
  gets ( szInput );
  i = atoi (szInput);
  printf ("Value entered is %d, and its double %d.\n",i,i*2);
  return 0;
}

