#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  ldiv_t divresult;
  
  divresult = ldiv (65537,179);
  printf ("65537 / 179 = %ld ( %ld\n", divresult.quot, divresult.rem);
  return 0;
}

