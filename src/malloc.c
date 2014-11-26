#include <stdlib.h>
#include <stdio.h>

int main (void)
{
  int i;
  int n;
  char * buffer;

  printf ("How long do you want the string? ");
  scanf ("%d", &i);
  buffer = (char*)malloc(i+1);
  if (buffer==NULL)
    exit (1);
  for (n=0; n<i; n++)  {
    buffer[n]=rand()%26+'a';
  }
  buffer[i]='\0';
  printf ("Random string: %s\n",buffer);
  free(buffer);
  buffer=NULL;
  return 0;
}

