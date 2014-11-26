#include <stdio.h>

int main (void)
{
  char buffer [L_tmpnam];
  char *pointer;
  
  tmpnam (buffer);
  printf ("Tempname #1: %s\n",buffer);
  pointer = tmpnam (NULL);
  printf ("Tempname #2: %s\n",pointer);
  return 0;
}
