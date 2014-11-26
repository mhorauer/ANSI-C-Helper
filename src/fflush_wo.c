#include <stdio.h>

int main(int argc, char *argv[])
{
  char buffer[100];
  FILE *pFile;

  // open file for both reading and writing
  pFile = fopen(argv[1], "rt+");
  if (pFile!=NULL) {
    fprintf(pFile, "something");

    fgets(buffer, 10, pFile);
    printf("Read %s from file.\n", buffer);

    fprintf(pFile, "something");

    while(1)
      ;
    fclose(pFile);
  }
  return 0;
}
