#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] = "This is a sample string.\n";
  char * pch;

  pch = strrchr(str,'s');
  printf ("Last occurrence of 's' found at position %d.\n",pch-str+1);
  return 0;
}
