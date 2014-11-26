#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void sfind( char* string, char* format, ... );

int main( void )
{
  int day, year;
  char weekday[10], month[12];

  sfind( "Monday June 28 1999",
         "%s %s %d %d",
         weekday, month, &day, &year );
  printf( "%s, %s %d, %d\n",
          weekday, month, day, year );
  return EXIT_SUCCESS;
}

void sfind( char* string, char* format, ... )
{
  va_list arglist;

  va_start( arglist, format );
  vsscanf( string, format, arglist );
  va_end( arglist );
}

