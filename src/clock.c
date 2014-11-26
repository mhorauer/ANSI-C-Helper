#include <time.h>
#include <stdio.h>

#ifndef CLK_TCK
#define CLK_TCK 1000
#endif

void wait ( int seconds );

int main (void)
{
  int n;

  printf ("Starting countdown...\n");
  for (n=10; n>0; n--) {
    printf ("%d\n",n);
    wait (1);
  }
  printf ("FIRE!!!\n");
  return 0;
}

void wait ( int seconds )
{
  clock_t endwait;

  endwait = clock () + seconds * CLK_TCK ;
  while (clock() < endwait) {}
}

