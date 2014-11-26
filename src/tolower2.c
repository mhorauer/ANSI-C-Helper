#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char k = 'A';
  
  putchar(k);
  if (isupper (k)) 
    k = _tolower (k);
  putchar(k);
  putchar('\n');
  return EXIT_SUCCESS;
}

