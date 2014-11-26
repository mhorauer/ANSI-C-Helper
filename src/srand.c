#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (void)
{
  srand ( time(NULL) );
  printf ("A number between 0 and 100: %d\n", rand()%100);
  printf ("A number between 20 and 30: %d\n", rand()%10+20);
  return 0;
}
