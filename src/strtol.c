#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  char szInput [256];
  char * pEnd;
  long l;

  printf ("Enter an integer value: ");
  gets (szInput);
  l = strtol (szInput,&pEnd,0);
  printf ("Value entered: %ld. Its double: %ld\n",l,l*2);
  return 0;
}
