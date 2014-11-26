#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int seconds);

int main(void)
{
  char buf[4] = "123";

  if(setvbuf(stdout, buf, _IOFBF, sizeof(buf))!=0) {
    perror("failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }
  putc(buf[0],stdout);
  /* The buffer contains 1; nothing is written yet to stdout */
  wait(3);
  fflush(stdout); /* 1 is actually written to stdout */

  if(setvbuf(stdout, NULL, _IONBF, 0)!=0) {
    perror("failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }
  putc('2',stdout); /* 2 is written immediately */
  wait(6);

  if(setvbuf(stdout, buf, _IOLBF, sizeof(buf))!=0) {
    perror("failed to change the buffer of stdout");
    return EXIT_FAILURE;
  }
  putc('3',stdout); /* 3 is _not_ written here */
  wait(9);
  puts("..."); /* 3 is written here along with the \n */

  return EXIT_SUCCESS;
}

void wait(int seconds)
{
  int t;

  t=0;
  while (t < seconds)
    t = clock()/CLOCKS_PER_SEC;
}

