#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;
  pFile = fopen (argv[1],"r");
  if (pFile==NULL) {
    printf ("Error opening file.\n");
    exit (EXIT_FAILURE);
  } else {
    printf("Operation successful.\n");
    exit(EXIT_SUCCESS);
  }
  fclose(pFile);
  return 0;
}

