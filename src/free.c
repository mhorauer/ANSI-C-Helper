#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
  int i;
  char *buf;

  buf = (char*) malloc (100*sizeof(char));
  if (buf==NULL)
    perror("malloc error");
  printf("Enter some text> ");
  fgets(buf, 100, stdin);
  *(buf + strlen(buf) - 1) = '\0';
  for (i=strlen(buf); i>=0; i--)
    putc(*(buf+i), stdout);
  putc('\n',stdout);
  free(buf);
  buf = NULL;
  return 0;
}

