#include <stdio.h>

int main (int argc, char * argv[])
{
  FILE * pFile;

  pFile = fopen (argv[1],"wt");
  if (pFile!=NULL)  {
    fputs ("fopen example\n",pFile);
    fclose (pFile);
  }
  return 0;
}

