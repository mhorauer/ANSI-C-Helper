/*
 * Purpose: Program to demonstrate the following functions:
 * isalpha, isdigit, isspace.
 * The same principles apply to isalnum, iscntrl, isgraph,
 * islower, isprint, ispunct, isupper, isxdigit
 */
#include <stdio.h>
#include <ctype.h>
#define FALSE 0
#define TRUE 1

/***************************************************** PROTOTYPES ***/
void char_type(char);


/****************************************************** FUNCTIONS ***/
int main(void)
{
  char ch;
  printf("Enter a charcater > ");

  ch = getc(stdin);
  char_type(ch);
  return 0;
}

void char_type(char ch)
{
  /* returns non zero if A-Z or a-z */
  if ( isalpha(ch) != FALSE)
    printf("%c is an Alpha character.\n",ch);
  /* returns non zero if 0-9 */
  if ( isdigit(ch) != FALSE)
    printf("%c is a numeric character.\n",ch);
  /* returns non zero if a space, CR, Tab, NL FF */
  if ( isspace(ch) != FALSE)
    printf("%c is a white-space character\n", ch);
}



