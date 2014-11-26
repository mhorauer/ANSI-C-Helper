#include <stdarg.h>
#include <stdio.h>

void vout(char *string, char *fmt, ...);
char fmt1 [] = "%s  %s  %s\n";

int main(void)
{
  char string[100];

  vout(string, fmt1, "Sat", "Sun", "Mon");
  printf("The string is:  %s\n", string);
  return 0;
}

void vout(char *string, char *fmt, ...)
{
  va_list arg_ptr;

  va_start(arg_ptr, fmt);
  vsnprintf(string, 8, fmt, arg_ptr);
  va_end(arg_ptr);
}

