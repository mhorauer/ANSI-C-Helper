#include <string.h>
#include <stdio.h>

int main (void)
{
  char str1[20];
  char str2[20];
  
  strcpy(str1,"To be ");
  strcpy(str2,"or not to be.\n");
  strncat(str1, str2, 6);
  strcat(str1," ...");
  puts (str1);
  return 0;
}
