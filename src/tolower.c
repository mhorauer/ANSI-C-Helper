#include <ctype.h>
#include <stdio.h>

int main (void)
{
  unsigned char i;
  
  for (i = 'A'; i < 'D'; i++) {
    printf ("tolower(%c) = %c\n", i, tolower(i));
  }
  return 0;
}

