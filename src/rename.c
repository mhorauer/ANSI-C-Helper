#include <stdio.h>

int main (int argc, char *argv[1])
{
  int result;

  result = rename( argv[1] , argv[2] );
  if (result != 0)
    perror( "Error renaming file" );
  return 0;
}
