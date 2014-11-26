#include <stdio.h>

int main (int argc, char * argv[])
{
  FILE * pFile;
  char c;
  int n;

  n=0;
  pFile=fopen (argv[1],"r");
  if (pFile==NULL)   {
    perror ("Error opening file");
  } else {
    do {
      c = fgetc (pFile);
      if (c == 'a')
        n++;
    } while (c != EOF);
    fclose (pFile);
    printf ("File contains %d 'a' characters.\n",n);
  }
  return 0;
}

