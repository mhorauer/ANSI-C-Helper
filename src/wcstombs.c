#include <stdlib.h>
#include <stdio.h>

int main( void )
{
  int i;
  char *pmbbuf = (char *)malloc( 100 );
  wchar_t *pwchello = L"Hello, world.";
  
  printf( "Convert wide-character string:\n" );
  i = wcstombs( pmbbuf, pwchello, 100 );
  printf( " Characters converted: %u\n", i );
  printf( " Multibyte character: %s\n\n", pmbbuf );
  return 0;
}
