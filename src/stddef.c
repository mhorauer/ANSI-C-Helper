#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct user  {
    char name[50];
    char alias[50];
    int level;
  };

  printf("level is at %d byte.\n",offsetof(struct user, level));
  return EXIT_SUCCESS;
}
