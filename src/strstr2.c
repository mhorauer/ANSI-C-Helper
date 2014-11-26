#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char string[]="string to search";
  char test[20];

  printf("Enter a search string> ");
  scanf("%s",test);
  if (strstr(string, test)) {
    puts("String found.");
  } else {
    puts("String not found.");
  }
  return 0;
}
