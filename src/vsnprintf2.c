#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#define FIRSTSIZE 1

intpasprintf(char **ret, const char *fmt, ...)
{
  va_list args;
  char *buf;
  size_t bufsize;
  char *newbuf;
  size_t nextsize;
  int outsize;
  bufsize = 0;
  for (;;) {
    if (bufsize == 0)     {
      if ((buf = (char *)malloc(FIRSTSIZE)) == NULL)       {
        *ret = NULL;
        return -1;
      }
      bufsize = 1;
    }     else     {
      if ((newbuf = (char *)realloc(buf, nextsize)) != NULL)       {
        buf = newbuf;
        bufsize = nextsize;
      }       else       {
        free(buf);
        *ret = NULL;
        return -1;
      }
    }
    va_start(args, fmt);
    outsize = vsnprintf(buf, bufsize, fmt, args);
    va_end(args);
    if (outsize == -1)     {
      nextsize = bufsize * 2;
    }     else     {
      if (outsize == bufsize)       {
        nextsize = bufsize * 2;
      }       else      {
        if (outsize > bufsize)         {
          nextsize = outsize + 2;
        }         else        {
          if (outsize == bufsize - 1)           {
            nextsize = bufsize * 2;
          }           else           {
            break;
          }
        }
      }
    }  *ret = buf;
    return 0;
  }
