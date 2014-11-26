#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[][5] = { "R2D2" , "C3PO" , "V4DR" , "C3A4" , "LUKE" };
  int n;
  
  printf ("Looking for human relations robots...\n");
  for (n=0 ; n < 5 ; n++)  {
    if (strncmp (str[n],"C3**",2) == 0) {
      printf ("found %s\n",str[n]);
    }
  }
  return 0;
}
