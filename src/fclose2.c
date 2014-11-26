#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int c;
  FILE *pFile;

  pFile = fopen(argv[1],"r");
  if (pFile==NULL) {
    printf("Error opening file.\n");
    exit(EXIT_FAILURE);
  }

  while ((c = fgetc(pFile)) != EOF) {
    printf("%c",c);
  }
  fclose(pFile);
  return 0;
}

