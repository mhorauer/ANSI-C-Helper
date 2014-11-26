#include <stdio.h>

int main (int argc, char *argv[])
{
  freopen (argv[1],"w",stdout);
  printf ("This sentence is redirected to a file.\n");
  fclose (stdout);
  return 0;
}

