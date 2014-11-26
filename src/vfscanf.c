#include <stdio.h>
#include <stdarg.h>

#define MAX_LEN 80

int vread(FILE *stream, char *fmt, ...);

int main(int argc, char *argv[])
{
  FILE *stream;
  long l;
  float fp;
  char s[MAX_LEN + 1];
  char c;

  stream = fopen(argv[1], "r");
  vread(stream, "%s", &s[0]);
  vread(stream, "%ld", &l);
  vread(stream, "%c", &c);
  vread(stream, "%f", &fp);
  printf("string = %s\n", s);
  printf("long double = %ld\n", l);
  printf("char = %c\n", c);
  printf("float = %f\n", fp);
  return 0;
}

int vread(FILE *stream, char *fmt, ...)
{
  int rc;

  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  rc = vfscanf(stream, fmt, arg_ptr);
  va_end(arg_ptr);
  return(rc);
}

