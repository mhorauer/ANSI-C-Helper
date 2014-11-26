#include <stdio.h>
#include <string.h>

int main(void)
{
  char buff[80];

  printf("Enter text > ");
  fgets(buff, sizeof(buff), stdin);
  buff[strlen(buff)-1] = '\0';
  printf("Stripped (minus \\n) length is %d -%s-\n", strlen(buff), buff);
  return 0;
}
