#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] = "memmove can be very useful......";
  
  puts(str);
  memmove (str+20,str+15,11);
  puts (str);
  return 0;
}
