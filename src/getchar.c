#include <stdio.h>

int main (void)
{
  char c;

  puts ("Enter some text ...");
  do {
    c = getchar();
    putchar (c);
  } while (c != '\n');
  return 0;
}

