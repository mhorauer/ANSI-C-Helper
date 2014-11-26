#include <stdlib.h>
#include <stdio.h>

int main( void )
{
  int i;
  char *pmbhello = (char *)malloc( MB_CUR_MAX );
  wchar_t *pwchello = L"Hi";
  wchar_t *pwc;

  pwc = (wchar_t *)malloc( sizeof( wchar_t ));
  printf( "Convert to multibyte string:\n" );
  i = wcstombs( pmbhello, pwchello, MB_CUR_MAX );
  printf( " Characters converted: %u\n", i );
  printf( " Hex value of first" );
  printf( " multibyte character: %#.4x\n\n", pmbhello[0] );
  printf( "Convert back to wide-character string:\n" );
  i = mbstowcs( pwc, pmbhello, MB_CUR_MAX );
  printf( " Characters converted: %u\n", i );
  printf( " Hex value of first" );
  printf( " wide character: %#.4x\n\n", pwc[0] );
  return 0;
}
