#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;
  FILE *ptr;

  ptr = fopen(argv[1],"r");
  while ((c = fgetc(ptr)) != EOF) {
    printf("%c",c);
  }
  fclose(ptr);
  return 0;
}

