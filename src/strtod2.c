#include <stdlib.h>
#include <stdio.h>

int main( void )
{
  char *string, *stopstring;
  double x;
  long l;
  int base;
  unsigned long ul;
  
  string = "3.1415926This stopped it";
  x = strtod( string, &stopstring );
  printf( "string = %s\n", string );
  printf(" strtod = %f\n", x );
  printf(" Stopped scan at: %s\n\n", stopstring );
  string = "-10110134932This stopped it";
  l = strtol( string, &stopstring, 10 );
  printf( "string = %s\n", string );
  printf(" strtol = %ld\n", l );
  printf(" Stopped scan at: %s\n\n", stopstring );
  string = "10110134932";
  printf( "string = %s\n", string );
  for( base = 2; base <= 8; base *= 2 ) {
    ul = strtoul( string, &stopstring, base );
    printf( " strtol = %ld (base %d)\n", ul, base );
    printf( " Stopped scan at: %s\n", stopstring );
  }
  return 0;
}
