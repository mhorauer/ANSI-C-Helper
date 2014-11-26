#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wait(int seconds);

void catch_function(int);

int main(void)
{
  if(signal(SIGINT, catch_function)==SIG_ERR)  {
    printf("An error occured while setting a signal handler.\n");
    exit(0);
  }
  printf("Raising the interactive attention signal.\n");
  if(raise(SIGINT)!=0)  {
    printf("Error raising the signal.\n");
    exit(0);
  }
  wait(5);
  printf("Exiting.\n");
  return 0;
}

void catch_function(int signal)
{
  printf("Interactive attention signal caught.\n");
}

void wait(int seconds)
{
  int t;

  t=0;
  while (t < seconds)
    t = clock()/CLOCKS_PER_SEC;
}

