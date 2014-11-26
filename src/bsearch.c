#include <stdlib.h>
#include <stdio.h>

/***************************************************** PROTOTYPES ***/
int compare (const void * a, const void * b);

/******************************************************** GLOBALS ***/
int values[] = { 10, 20, 25, 40, 90, 100 };

/****************************************************** FUNCTIONS ***/
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main (int argc, char *argv[])
{
  int * pItem;
  int key = 0;

  printf("Enter an integer number in the range 0-100 > ");
  scanf("%d", &key);

  pItem = (int*) bsearch(&key, values, 6, sizeof (int), compare);
  if (pItem!=NULL)
    printf ("%d is in the array.\n",*pItem);
  else
    printf ("%d is not in the array.\n",key);
  return 0;
}

