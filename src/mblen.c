#include <stdio.h>
#include <stdlib.h>


int main(void)
{
  int length;
  char string [6] = "w";
  wchar_t arr[6];

  /* Initialize internal state variable */
  length = mblen(NULL, MB_CUR_MAX);

  /* Set string to point to a multibyte character  */
  length = mblen(string, MB_CUR_MAX);
  mbtowc(arr,string,length);
  arr[1] = L'\0';
  printf("wide character string: %ls\n", arr);
  return 0;
}
