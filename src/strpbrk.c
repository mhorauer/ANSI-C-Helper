#include <string.h>
#include <stdio.h>

int main (void)
{
  char str[] = "This is a sample string";
  char key[] = "aeiou";
  char * pch;
  
  printf ("Vowels in '%s': ",str);
  pch = strpbrk (str, key);
  while (pch != NULL)  {
    printf ("%c " , *pch);
    pch = strpbrk (pch+1,key);
  }
  printf ("\n");
  return 0;
}
