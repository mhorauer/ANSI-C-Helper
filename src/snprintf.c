#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[16];
  int len;

  len = snprintf(str, 16, "%s %d", "hello world", 1000);
  printf("%s\n", str);

  if (len >= 16)
    printf("length truncated (from %d)\n", len);

  return EXIT_SUCCESS;
}
