#include <time.h>
#include <stdio.h>
#define PST (-8)
#define CET (1)
#define HKG (8)

int main (void)
{
  time_t rawtime;
  struct tm * ptm;

  time ( &rawtime );
  ptm = gmtime ( &rawtime );
  printf ("Time in Los Angeles: %2d:%02d\n", ptm->tm_hour+PST, ptm->tm_min);
  printf ("Time in Berlin: %2d:%02d\n", ptm->tm_hour+CET, ptm->tm_min);
  printf ("Time in Hong Kong: %2d:%02d\n", ptm->tm_hour+HKG, ptm->tm_min);
  return 0;
}
