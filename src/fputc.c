#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE *pFile;
  char c;

  pFile = fopen (argv[1],"w");
  if (pFile!=NULL)  {
    for (c = 'A' ; c <= 'Z' ; c++)    {
      fputc (c , pFile);
    }
    fputc('\n', pFile);
    fclose (pFile);
  }
  return 0;
}
