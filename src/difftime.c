#include <time.h>
#include <stdio.h>

int main (void)
{
  time_t start,end;
  char szInput [256];
  double dif;

  time (&start);
  printf ("Please, enter your name: ");
  gets (szInput);

  time (&end);

  dif = difftime (end,start);

  printf ("Hi %s.\n", szInput);
  printf ("You have taken %.2lf seconds to type your name.\n", dif );
  return 0;
}

