#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  char szInput [256];
  char * pEnd;
  unsigned long ul;

  printf ("Enter an integer value: ");
  gets (szInput);
  ul = strtoul (szInput,&pEnd,0);
  printf ("Value entered: %lu. Its double: %lu\n",ul,ul*2);
  return 0;
}
