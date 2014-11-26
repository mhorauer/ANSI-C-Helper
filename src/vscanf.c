#include <stdio.h>
#include <stdarg.h>

int vread(char *fmt, ...);

int main(void)
{
  int i, rc;
  float fp;
  char c, s[81];

  printf("Enter an integer, a real number, a character "
         "and a string: \n");
  rc = vread("%d %f %c %s", &i, &fp, &c, s);
  if (rc != 4)
    printf("Not all fields are assigned\n");
  else {
    printf("integer = %d\n", i);
    printf("real number = %f\n", fp);
    printf("character = %c\n", c);
    printf("string = %s\n",s);
  }
  return 0;
}

int vread(char *fmt, ...)
{
  int rc;
  va_list arg_ptr;
  va_start(arg_ptr, fmt);
  rc = vscanf(fmt, arg_ptr);
  va_end(arg_ptr);
  return(rc);
}


