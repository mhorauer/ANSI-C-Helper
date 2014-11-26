#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char src[] = { "Müller Bäcker" };
char dst[20];

int main( void )
{
  size_t len;

  setlocale( LC_ALL, "C" );
  printf( "%s\n", src );
  len = strxfrm( dst, src, strlen(src) );
  printf( "%s (%u)\n", dst, len );
  return EXIT_SUCCESS;
}
