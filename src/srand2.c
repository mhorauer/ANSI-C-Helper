#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int rolls=4;

  srand((unsigned int)time((time_t *)NULL));
  while(rolls--)  {
    printf("Dice value is %d\n", (rand()%6)+1);
  }
  return 0;
}
