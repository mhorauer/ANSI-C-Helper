#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE * pFile;
  char string [100];

  pFile = fopen (argv[1] , "r");
  if (pFile == NULL)   {
    perror ("Error opening file");
  }  else   {
    fgets (string , 100 , pFile);
    puts (string);
    fclose (pFile);
  }
  return 0;
}

