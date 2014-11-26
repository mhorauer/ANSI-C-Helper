#include <time.h>
#include <stdio.h>

int main (void)
{
  time_t seconds;
  
  seconds = time (NULL);
  printf ("%ld hours since January 1, 1970\n", seconds/3600);
  return 0;
}
