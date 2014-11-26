#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char * argv[])
{
  FILE * pFile;
  long lSize;
  char *buffer;
  int i;

  pFile = fopen (argv[1] , "rb" );
  if (pFile==NULL)
    perror("fopen error");
  fseek (pFile , 0 , SEEK_END);
  lSize = ftell (pFile);
  rewind (pFile);
  buffer = (char*) malloc (lSize);
  if (buffer==NULL)
    perror("malloc error");
  fread (buffer,1,lSize,pFile);
  buffer[strlen(buffer)-1] = '\0';
  for (i=strlen(buffer); i>=0; i--)
    printf("%c", buffer[i]);
  printf("\n");
  fclose (pFile);
  free (buffer);
  return 0;
}
