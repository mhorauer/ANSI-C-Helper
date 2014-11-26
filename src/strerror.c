#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main (int argc, char *argv[])
{
  FILE * pFile;

  pFile = fopen(argv[1],"r");
  if (pFile == NULL) {
    printf ("Error opening file %s: %s\n",argv[1], strerror(errno));
    exit(EXIT_FAILURE);
  }
  fclose(pFile);
  return 0;
}
