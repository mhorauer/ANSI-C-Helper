#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;

  pFile = fopen(argv[1],"r");
  if (pFile==NULL)
    perror ("Error opening file");
  else {
    fputc ('x',pFile);
    if (ferror (pFile)) {
      printf ("Error Writing to %s.\n", argv[1]);
      clearerr (pFile);
    }
    fgetc (pFile);
    if (!ferror (pFile))
      printf ("No errors reading %s.\n", argv[1]);
    fclose (pFile);
  }
  return 0;
}

