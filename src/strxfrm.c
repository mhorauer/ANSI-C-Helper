#include <stdio.h>
#include <string.h>

int main(void)
{
  char str[] = "Hello Mister Müller";

  printf("The length of str = %d\n",strxfrm(NULL, str, 0));
  printf("The content of str = %s\n", str);
  return 0;
}

