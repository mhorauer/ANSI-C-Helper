#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void catch_function(int);
void wait(int seconds);

int main(void)
{
  if(signal(SIGINT, catch_function)==SIG_ERR)  {
    printf("An error occured while setting a signal handler.\n");
    exit(EXIT_SUCCESS);
  }
  printf("Raising the interactive attention signal.\n");
  if(raise(SIGINT)!=0)  {
    printf("Error raising the signal.\n");
    exit(EXIT_SUCCESS);
  }
  wait(60);
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
