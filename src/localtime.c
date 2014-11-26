#include <time.h>
#include <stdio.h>

int main (void)
{
  time_t rawtime;
  struct tm * timeinfo;
  
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current date and time are: %s", asctime (timeinfo) );
  return 0;
}
