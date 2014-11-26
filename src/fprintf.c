#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
  FILE * pFile;
  int n;
  char name[100];

  pFile = fopen (argv[1],"w");
  for (n=0 ; n<3 ; n++)  {
    printf("Enter a name> ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';
    fprintf (pFile, "Name %d [%-10.10s]\n",n,name);
  }
  fclose (pFile);
  return 0;
}

