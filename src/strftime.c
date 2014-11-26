#include <time.h>
#include <stdio.h>

int main (void)
{
  struct tm *ptr;
  time_t tm;
  char str[60];
  
  tm = time(NULL);
  ptr = localtime(&tm);
  strftime(str ,100 , "It is %A.\n",ptr);
  printf(str);
  return 0;
}
