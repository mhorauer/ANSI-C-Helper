#include <string.h>
#include <stdio.h>

int main (void)
{
  char str1[256];
  char str2[256];
  int n, len1, len2;
  
  printf ("Enter a sentence: ");
  fgets(str1,80,stdin);
  str1[strlen(str1)-1]='\0';
  printf ("Enter another sentence: ");
  fgets(str2,80,stdin);
  str2[strlen(str2)-1]='\0';  
  len1=strlen(str1);
  len2=strlen(str2);
  n = memcmp( str1, str2, len1>len2?len1:len2 );
  if (n>0)   {
    printf ("'%s' is greater than '%s'\n",str1,str2);
  }  else  {
    if (n<0)     {
      printf ("'%s' is less than '%s'\n",str1,str2);
    }    else    {
      printf ("'%s' is the same as '%s'\n",str1,str2);
    }
  }
  return 0;
}
