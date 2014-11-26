#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;
  char c;
  char buffer [256];

  pFile = fopen (argv[1],"rt");
  if (pFile==NULL)
    perror ("Error opening file");
  else   {
    c = fgetc(pFile); // read the first character
    printf("%c\n",c); // output c
    ungetc(c, pFile); // push the character back
    fgets (buffer,255,pFile);  // read the first
    printf ("[%c] %s",c,buffer);
  }
  return 0;
}
