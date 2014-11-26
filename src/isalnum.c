#include <ctype.h>
#include <stdio.h>

int main (void)
{
  unsigned char i;
  char *p;

  for (i = 45; i < 50; i++) {
    p = (isalnum (i) ? "YES" : "NO");
    printf ("isalnum (%c) %s\n", i, p);
  }
  return 0;
}

