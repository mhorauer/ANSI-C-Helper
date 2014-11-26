#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *ptr;
  char line[256];

  ptr = fopen(argv[1], "w");
  if (ptr==NULL)
    perror("fopen error");
  while(1) {
    fgets(line, sizeof(line),stdin);
    if (line[0] == '\n')
      break;
    line[strlen(line)-1] = '\0';
    fprintf(ptr, "%s\n", line);
  }
  fclose(ptr);
  return 0;
}
