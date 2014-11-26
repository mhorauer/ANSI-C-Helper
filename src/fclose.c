#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  FILE * pFile;

  pFile = fopen (argv[1],"wt");
  if (pFile==NULL) {
    printf("Error opening file.\n");
    exit(EXIT_FAILURE);
  }
  fprintf (pFile, "fclose example");
  fclose (pFile);
  return 0;
}

