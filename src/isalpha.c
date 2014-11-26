#include <ctype.h>
#include <stdio.h>

int main (void)
{
  unsigned char i;
  char *p;
  for (i = 63; i < 67; i++)   {
    p = (isalpha (i) ? "YES" : "NO");
    printf ("isalpha (%c) %s\n", i, p);
  }
  return 0;
}

