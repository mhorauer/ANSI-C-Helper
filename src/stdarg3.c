#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int set(char *item, int num, ...);
int main(void)
{
  char *item="pear";
  int ret;
  
  ret = set (item,4, "apple", "pear", "banana", "grape");
  if (ret)  {
    printf ("%s found\n", item);
  }  else  {
    printf("%s not found\n", item);
  }
  return EXIT_SUCCESS;
}

int set(char *item, int num, ...)
{
  va_list ap;
  int ret=0;
  int inc=0;

  va_start(ap, num);
  do  {
    if ( item == va_arg(ap, char *))    {
      ret = 1;
    }
  }   while ( (ret==0) && (++inc < num));
  va_end(ap);
  return (ret);
}
