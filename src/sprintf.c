#include <stdio.h>

int main (void)
{
  char buffer [50];
  int n;
  int a;
  int b;

  a = 5;
  b = 3;
  n = sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a %d chars string\n",buffer,n);
  return 0;
}
