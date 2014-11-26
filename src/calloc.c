#include <stdlib.h>
#include <stdio.h>

struct data {
  char item[20];
};

int main (void)
{
  int i, n;
  struct data *d;

  /* How many items will be input? */
  printf ("Enter number of items to be remembered: ");
  scanf ("%d", &i);

  /* Memory allocation */
  d = (struct data *) calloc (i,sizeof(struct data));
  if (d == NULL)
    exit (EXIT_FAILURE);

  /* Input */
  for (n=0; n<i; n++)  {
    printf ("Enter item #%d: ",n);
    scanf ("%s", (char *)d);
    getchar();
    d++;
  }

  /* Output */
  d = d - n;                          // move the pointer to the first element
  printf ("You have entered: ");
  for (n=0; n<i; n++)
    printf ("%s ",(char *)d++);
  printf("\n");

  /* Free the allocated memory */
  d = d - n;                          // move the pointer to the first element
  free (d);
  return 0;
}

