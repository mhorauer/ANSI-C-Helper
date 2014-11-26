#include <stdio.h>
#include <string.h>

void print_errs(void);


int main(void)
{
  print_errs();
  return 0;
}

void print_errs(void)
{
  int i;

  for( i = 0; i < sys_nerr; i++ ) {
    printf( "Error #%3d: %s\n", i, strerror(i) );
  }
}

