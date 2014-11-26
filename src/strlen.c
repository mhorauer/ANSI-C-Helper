#include <string.h>
#include <stdio.h>

int main (void)
{
  char szInput[256];
  
  printf ("Enter a sentence> ");
  gets (szInput);
  printf ("The sentence entered is %u characters long.\n",strlen(szInput));
  return 0;
}
