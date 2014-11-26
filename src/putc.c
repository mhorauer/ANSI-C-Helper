#include <stdio.h>

int main (int argc, char*argv[])
{
  FILE * pFile;
  char c;

  pFile=fopen(argv[1],"wt");
  if (pFile==NULL)
    perror("fopen error");
  for (c = 'A' ; c <= 'Z' ; c++) {
    putc (c , pFile);
  }
  putc('\n',pFile);
  fclose (pFile);
  return 0;
}

