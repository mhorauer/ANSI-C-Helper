#include <stdio.h>
#include <stdarg.h>

void echo_err_printf(char *format, ...)
{
  va_list arg_ptr;
  va_start(arg_ptr, format);
  vfprintf(stderr, format, arg_ptr);
  va_end(arg_ptr);
  
  va_start(arg_ptr, format);
  vprintf(format, arg_ptr);
  va_end(arg_ptr);
}

int main(void)
{
  echo_err_printf("Error: %d\n", 12);
  return 0;
}
