#include <stdio.h>


int main (void)
{
  FILE * pFile;
  int i;
  
  pFile = tmpfile ();
  if (pFile==NULL)
    perror("fopen error");

  /* perform some operations involving the tmpfile */

  fclose (pFile);
  return 0;
}

