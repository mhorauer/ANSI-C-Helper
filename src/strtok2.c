#include <stdio.h>
#include <string.h>

int main(void)
{
  char test_string[50]="string to split up";
  char *sub_string;

  printf("%s\n",test_string);
  printf("------------------\n");
  printf("%s\n", strtok(test_string, " "));
  while ( (sub_string = strtok(NULL, " ")) != NULL)  {
    printf("%s\n", sub_string);
  }
  return 0;
}
