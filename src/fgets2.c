#include <stdio.h>
#define LINE_LENGTH 80

int main(int argc, char *argv[])
{
  FILE* fp;
  char line[LINE_LENGTH];
  int count;

  count = 0;
  fp=fopen(argv[1],"r");
  while ( fgets(line, LINE_LENGTH, fp) != NULL)   {
    count++;
  }
  printf("File contains %d lines.\n", count);
  fclose(fp);
  return 0;
}

