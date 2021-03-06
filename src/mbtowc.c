#include <stdlib.h>
#include <stdio.h>

int main( void )
{
  int i;
  char *pmbc = (char *)malloc( sizeof( char ) );
  wchar_t wc = L'a';
  wchar_t *pwcnull = NULL;
  wchar_t *pwc;
  
  pwc = (wchar_t *)malloc( sizeof( wchar_t ) );
  printf( "Convert a wide character to multibyte character:\n" );
  i = wctomb( pmbc, wc );
  printf( " Characters converted: %u\n", i );
  printf( " Multibyte character: %x\n\n", *pmbc );
  printf( "Convert multibyte character back to a wide " "character:\n" );
  i = mbtowc( pwc, pmbc, MB_CUR_MAX );
  printf( " Bytes converted: %u\n", i );
  printf( " Wide character: %x\n\n", *pwc );
  printf( "Attempt to convert when target is NULL\n" );
  printf( " returns the length of the multibyte character:\n" );
  i = mbtowc( pwcnull, pmbc, MB_CUR_MAX );
  printf( " Length of multibyte character: %u\n\n", i );
  printf( "Attempt to convert a NULL pointer to a" );
  printf( " wide character:\n" );
  pmbc = NULL;
  i = mbtowc( pwc, pmbc, MB_CUR_MAX );
  printf( " Bytes converted: %u\n", i );
  return 0;
}
