#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] ="This is a simple string.";
  char * pch;
  
  puts (str);
  pch = strstr (str,"simple");
  strncpy (pch,"sample",5);
  puts (str);
  return 0;
}
