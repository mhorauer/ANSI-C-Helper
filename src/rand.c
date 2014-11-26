#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
  srand(time(NULL));
  printf ("A number between 0 and RAND_MAX (%d): %d\n", RAND_MAX, rand());
  printf ("A number between 0 and 99: %d\n", rand()%100);
  printf ("A number between 20 and 29: %d\n", rand()%10+20);
  return 0;
}
