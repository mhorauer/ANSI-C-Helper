#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;

  pFile= fopen (argv[1],"r");
  if (pFile == NULL) {
    printf ("Error opening file \"%s\".\n",argv[1]);
    abort();
  }
  fclose (pFile);
  return 0;
}

