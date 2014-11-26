#include <stdlib.h>
#include <stdio.h>

int main( void )
{
  int i;
  wchar_t wc = L'a';
  char *pmbnull = NULL;
  char *pmb = (char *)malloc( sizeof( char ) );
  
  printf( "Convert a wide character:\n" );
  i = wctomb( pmb, wc );
  printf( " Characters converted: %u\n", i );
  printf( " Multibyte character: %.1s\n\n", pmb );
  printf( "Attempt to convert when target is NULL:\n" );
  i = wctomb( pmbnull, wc );
  printf( " Characters converted: %u\n", i );
  printf( " Multibyte character: %.1s\n", pmbnull );
  return 0;
}
