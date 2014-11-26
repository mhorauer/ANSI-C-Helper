#include <stdio.h>

int main (int argc, char *argv[])
{
  char buffer[BUFSIZ];
  FILE *pFile1, *pFile2;
  
  pFile1=fopen (argv[1],"w");
  if (pFile1==NULL)
    perror("fopen error");
  pFile2=fopen (argv[2],"a");
  if (pFile2==NULL)
    perror("fopen error");
  setbuf(pFile1 , buffer );
  fputs("This is sent to a buffered stream.\n",pFile1);
  fflush(pFile1);
  setbuf( pFile2 , NULL );
  fputs("This is sent to an unbuffered stream.\n",pFile2);
  fclose(pFile1);
  fclose(pFile2);
  return 0;
}
