#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  char * buffer;

  buffer = getenv ("PATH");
  if (buffer!=NULL)
    printf ("Current path is: %s\n",buffer);
  return 0;
}
