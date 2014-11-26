#include <stdio.h>
#include <stdlib.h>

void fn_exit1 (void)
{
  printf ("Exit function 1.\n");
}

void fn_exit2 (void)
{
  printf ("Exit function 2.\n");
}

int main (void)
{
  atexit (fn_exit1);
  atexit (fn_exit2);
  printf ("Main function.\n");
  return 0;
}
