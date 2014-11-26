#include <stdio.h>

int main (int argc, char *argv[])
{
  int n;
  FILE * pFile;
  char buffer [27];
  
  pFile = fopen (argv[1],"w+");
  for ( n='A' ; n<='Z' ; n++)
    fputc (n, pFile);
  fputc('\n', pFile);
  rewind(pFile);
  fread (buffer,1,26,pFile);
  fclose (pFile);
  buffer[26]='\0';
  puts (buffer);
  return 0;
}
