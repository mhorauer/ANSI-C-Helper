#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  FILE * pFile;
  char buffer[] = "This buffer contains some characters.\n";

  pFile = fopen (argv[1] , "w");
  fwrite (buffer , 1 , strlen(buffer) , pFile);
  fclose (pFile);
  return 0;
}
