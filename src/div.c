#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int n, d;
  div_t divresult;

  printf("Enter two integers separated by a space > ");
  scanf("%d %d", &n, &d);
  divresult = div (n,d);
  printf ("%d / %d = %d ( %d\n", n, d, divresult.quot, divresult.rem);
  return 0;
}

