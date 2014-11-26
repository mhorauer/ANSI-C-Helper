#include <stdio.h>
#include <stdarg.h>

void error (char *fmt, ...);
void test_vprintf (void);

int main (void)
{
  test_vprintf();
  return 0;
}

void error (char *fmt, ...)
{
  va_list arg_ptr;
  va_start (arg_ptr, fmt);
  vprintf (fmt, arg_ptr);
  va_end (arg_ptr);
}

void test_vprintf (void)
{
  int i;
  i = 1000;
  
  error ("Error: '%d' number too large\n", i);
  error ("Syntax Error\n");
}

