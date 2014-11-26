#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] ="This is a sample string,just testing.";
  char * pch;
  
  printf ("Splitting string \"%s\" in tokens:\n",str);
  pch = strtok (str," ");
  while (pch != NULL)  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.");
  }
  return 0;
}
