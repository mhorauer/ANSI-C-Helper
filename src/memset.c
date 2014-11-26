#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] = "almost every programmer should know memset.";
  
  puts(str);
  memset (str,'-',6);
  puts (str);
  return 0;
}
