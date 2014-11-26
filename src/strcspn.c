#include <string.h>
#include <stdio.h>

int main (void)
{
  char str1[] = "fcba73";
  char str2[] = "1234567890";
  int i;
  
  printf("str1 = %s\n", str1);
  printf("          ^ \n");
  printf("pos....0...4 \n");
  printf("str2 = %s\n", str2);
  i = strcspn (str1,str2);
  printf("-----------------\n");
  printf ("The first character of str2 found in str1 is at position %d\n.",i);
  return 0;
}
