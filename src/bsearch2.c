#include <stdlib.h>
#include <stdio.h>
#define NUM 11

/***************************************************** PROTOTYPES ***/
static int func (void *, void *);

/****************************************************** FUNCTIONS ***/
int main(void)
{
  int numbers[NUM]= {3,4,7,9,11,13,15,17,19,21,23};
  int key=0;
  int *result;

  printf("Enter an integer number in the range 0-30 > ");
  scanf("%d", &key);

  result = bsearch (&key, numbers, NUM, sizeof(numbers[0]), (void *)func);
  printf("%d ", key);
  (result) ? puts("found") : puts("not found");
  return 0;
}

static int func (void *a, void *b)
{
  printf("%d %d \n", *(int *)a, *(int *)b);
  if (*(int *)a == *(int *)b)
    return(0);
  if (*(int *)a < *(int *)b)
    return(-1);
  return(1);
}

