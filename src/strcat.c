#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[80];
  
  strcpy (str,"strings ");
  strcat (str,"have been ");
  strcat (str,"concatenated.");
  puts (str);
  return 0;
}
