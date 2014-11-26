#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int input,n;
  int count=0;
  int *pNum = NULL;
  
  do   {
    printf ("Enter an integer value (0 to end): ");
    scanf ("%d", &input);
    count++;
    pNum = (int*) realloc (pNum, count * sizeof(int));
    if (pNum==NULL)    {
      puts ("Error (re)allocating memory");
      exit (1);
    }
    pNum[count-1]=input;
  }   while (input!=0);
  printf ("Numbers entered: ");
  for (n=0; n<count; n++)   {
    printf ("%d ",pNum[n]);
  }
  putchar('\n');
  free (pNum);
  pNum = NULL;
  return 0;
}
