#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  int i;

  printf("Trying to execute command '%s'.\n", argv[1]);
  i = system (argv[1]);
  if (i==-1)
    printf("Error executing '%s'.\n", argv[1]);
  else
    printf("Command '%s' successfully executed.\n", argv[1]);
  return 0;
}
