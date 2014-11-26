#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] = "This is a sample string";
  char * pch;
  
  printf ("Looking for 's' character in \"%s\"...\n",str);
  pch=strchr(str,'s');
  while (pch!=NULL) {
    printf ("found at %d\n",pch-str+1);
    pch=strchr(pch+1,'s');
  }
  return 0;
}
