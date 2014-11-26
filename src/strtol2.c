#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char num[10];
  
  strcpy(num,"13");
  printf("%s(Oct) is %li(Dec)\n", num, strtol(num, NULL, 8));
  printf("%s(Dec) is %li(Dec)\n", num, strtol(num, NULL, 10));
  printf("%s(hex) is %li(Dec)\n", num, strtol(num, NULL, 16));
  puts("----------------------------------");
  strcpy(num, "13hzcd");
  printf("%s(Oct) is %li(Dec)\n", num, strtol(num, NULL, 8));
  printf("%s(Dec) is %li(Dec)\n", num, strtol(num, NULL, 10));
  printf("%s(hex) is %li(Dec)\n", num, strtol(num, NULL, 16));
  puts("----------------------------------");
  strcpy(num, "hzcd");
  printf("%s(Oct) is %li(Dec)\n", num, strtol(num, NULL, 8));
  printf("%s(Dec) is %li(Dec)\n", num, strtol(num, NULL, 10));
  printf("%s(hex) is %li(Dec)\n", num, strtol(num, NULL, 16));
  puts("----------------------------------");
  strcpy(num, "13");
  printf("%s is %li(Dec)\n", num, strtol(num, NULL, 0));
  strcpy(num, "013");
  printf("%s is %li(Dec)\n", num, strtol(num, NULL, 0));
  strcpy(num, "0x13");
  printf("%s is %li(Dec)\n", num, strtol(num, NULL, 0));
  return 0;
}
