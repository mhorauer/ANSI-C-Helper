#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main (int argc, char *argv[])
{
  int j,k;

  if (argc!=2) {
    printf("A single number as argument is required.\n");
    abort();
  }
  j = atoi(argv[1]);
  if ( j <= INT_MIN || j >= INT_MAX ) {
    printf("Number out of range.\n");
    exit(EXIT_FAILURE);
  }
  k = abs(j);
  printf ("The number you entered %d.\n",j);
  printf ("The absolute value is %d.\n",k);
  return 0;
}
