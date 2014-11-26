#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
  char str [80];
  float f;
  FILE * pFile;

  pFile = fopen (argv[1],"w+");
  if (pFile==NULL)
    perror("fopen error");
  fprintf (pFile, "%f %s\n", M_PI, "PI");
  rewind (pFile);
  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}
