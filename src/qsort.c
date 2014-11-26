#include <stdlib.h>
#include <stdio.h>

int compare (const void * a, const void * b);

int main (void)
{
  int n;
  int values[] = { 40, 10, 100, 90, 20, 25 };

  for (n=0; n<6; n++)  {
    printf ("%d ",values[n]);
  }
  putchar('\n');
  qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)  {
    printf ("%d ",values[n]);
  }
  putchar('\n');
  return 0;
}

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

