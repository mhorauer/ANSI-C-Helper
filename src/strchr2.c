#include <stdio.h>
#include <string.h>

void find_comment(char *tline);

int main (void)
{
  char teststr[40]= {"remove the following text: # remove me"};

  printf("%s\n",teststr);
  find_comment(teststr);
  printf("%s\n",teststr);
  return 0;
}

void find_comment(char *tline)
{
  char *comment;

  comment = strchr(tline, '#');
  if (comment != 0) {
    *comment = '\0';
  }
  comment = strchr(tline, '\n');
  if (comment != 0) {
    *comment = '\0';
  }
}
