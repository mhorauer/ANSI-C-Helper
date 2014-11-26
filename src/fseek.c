#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;

  pFile = fopen (argv[1],"w");
  fputs ("This is an apple.\n",pFile);
  fseek (pFile,9,SEEK_SET);
  fputs (" sam",pFile);
  fclose (pFile);
  return 0;
}

