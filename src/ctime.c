#include <time.h>
#include <stdio.h>

int main (void)
{
  time_t rawtime;

  time (&rawtime);
  printf ( "Current date and time are: %s", ctime(&rawtime) );
  return 0;
}

