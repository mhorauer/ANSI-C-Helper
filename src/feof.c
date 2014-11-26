#include <stdio.h>

int main (int argc, char*argv[])
{
  FILE * pFile;
  long n;

  n = 0;
  pFile = fopen (argv[1],"rb");
  if (pFile==NULL) {
    perror ("Error opening file");
  } else {
    while (!feof(pFile)) {
      fgetc (pFile);
      n++;
    }
    fclose (pFile);
    printf ("Total number of bytes: %ld\n",n);
  }
  return 0;
}

