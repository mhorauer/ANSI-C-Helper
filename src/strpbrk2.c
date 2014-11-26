#include <stdio.h>
#include <string.h>
#include <strings.h>
#define LINE_BUF 100

void find_comment(char *);

int main(void)
{
  char line[LINE_BUF];
  char *sep;

  printf("Enter a sentence - press ENTER twice to terminate.\n");
  while (fgets(line, LINE_BUF, stdin))  {
    sep = line;
    while (sep != 0)  {
      sep = strpbrk(line, ";.&:,");
      if (sep != NULL)    {
        *sep = ' ';
      }
    }
    if (strlen(line)==1)
      break;
    fputs(line, stdout);
  }
  return 0;
}
