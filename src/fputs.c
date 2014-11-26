#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE *pFile;
  char sentence [256];

  printf ("Enter sentence to append> ");
  fgets (sentence,255,stdin);
  pFile = fopen (argv[1],"at");
  if (pFile==NULL)
    perror("fopen error");
  fputs(sentence,pFile);
  fclose (pFile);
  return 0;
}

