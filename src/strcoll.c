#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[1])
{

  char s[10] = "müller";

  if (!strcoll(s, argv[1]))
    printf("The strings are identical.\n");
  else
    printf("The strings are different.\n");

  return 0;
}
