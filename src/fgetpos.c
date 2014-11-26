#include <stdio.h>

int main (int argc, char *argv[])
{
  FILE * pFile;
  char c;
  int n;
  fpos_t pos;
  
  pFile = fopen (argv[1],"r");
  if (pFile==NULL)   {
    perror ("Error opening file");
  }  else  {
    c = fgetc (pFile);
    printf ("1st character is %c\n",c);
    fgetpos (pFile,&pos);
    for (n=0; n < 3; n++)    {
      fsetpos (pFile,&pos);
      c = fgetc (pFile);
      printf ("2nd character is %c\n",c);
    }
    fclose (pFile);
  }
  return 0;
}
