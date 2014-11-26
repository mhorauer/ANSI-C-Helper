#include <stdio.h>

int main (int argc, char *argv[])
{
  if( remove(argv[1]) == -1 )
    perror( "Error deleting file" );
  else
    puts( "File successfully deleted" );
  return 0;
}
