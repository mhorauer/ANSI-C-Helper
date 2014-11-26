#include <stdio.h>

int main (int argc, char * argv[])
{
  FILE * pFile;
  fpos_t position;

  pFile = fopen (argv[1],"w");
  fgetpos (pFile, &position);
  fputs ("That is a sample.\n",pFile);
  fsetpos (pFile, &position);
  fputs ("This",pFile);
  fclose (pFile);
  return 0;
}
