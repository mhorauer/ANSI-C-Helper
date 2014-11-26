#include <string.h>
#include <stdio.h>

int main (void)
{
  char szKey[] = "apple";
  char szInput[80];
  
  do   {
    printf ("Which is my favourite fruit? ");
    gets (szInput);
  }   while (strcmp (szKey,szInput) != 0);
  printf ("Correct answer!\n");
  return 0;
}
