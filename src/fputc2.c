#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;
  FILE *iFile;
  FILE *oFile;

  iFile = fopen(argv[1],"r");
  oFile = fopen(argv[2],"w");
  while ((c = fgetc(iFile)) != EOF)  {
    fputc(c, oFile);
  }
  fclose(iFile);
  fclose(oFile);
  return 0;
}
