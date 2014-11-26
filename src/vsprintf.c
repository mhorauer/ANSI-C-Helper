#include <stdio.h>
#include <stdarg.h>

char etxt[30];

void error (char *fmt, ...)
{
  va_list arg_ptr;
  va_start (arg_ptr, fmt);
  vsprintf (etxt, fmt, arg_ptr);
  va_end (arg_ptr);
}
int main (void)
{
  int i;
  i = 1000;
  error("Error: '%d' number too large\n", i);
  printf(">>>> %s", etxt);
  error("Syntax Error\n");
  printf(">>>> %s", etxt);
  return 0;
}

