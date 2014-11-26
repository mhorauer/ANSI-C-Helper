#include <stdio.h>

int main (int arghc, char *argv[])
{
  FILE * pFile;

  pFile = fopen (argv[1],"rb");
  if (pFile==NULL)  {
    perror ("fopen error");
  }  else  {
    fclose (pFile);
  }
  return 0;
}
