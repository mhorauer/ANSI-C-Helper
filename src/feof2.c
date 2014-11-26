#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char data[80];
  FILE *ptr;
  int i;

  i=0;
  ptr = fopen(argv[1],"r");
  if (ptr == 0) {
    printf("%s open failure.\n", argv[1]);
    exit(1);
  }
  while (1) {
    fgets(data, 80, ptr);
    if (feof(ptr) != 0)
      break;
    i = i + 1;
  }
  printf("The file contains %d lines.\n",i);
  fclose(ptr);
  return 0;
}
