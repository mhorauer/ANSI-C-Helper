#include <string.h>
#include <stdio.h>

int main (void)
{
  char * pch;
  char str[] = "Example string";
  
  pch = (char*) memchr (str, 'l', strlen(str));
  if (pch!=NULL)   printf ("Character l was at position %d.\n", pch-str+1);
  else   printf ("Character l was not found");
  return 0;
}
