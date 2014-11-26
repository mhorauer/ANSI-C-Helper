#include <string.h>
#include <stdio.h>

int main (void)
{
  int i;
  char strtext[] = "129th";
  char cset[] = "1234567890";
  
  i = strspn (strtext,cset);
  printf ("Length of initial number is %d.\n",i);
  return 0;
}
