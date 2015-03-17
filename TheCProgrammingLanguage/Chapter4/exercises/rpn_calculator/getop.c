#include <stdio.h>
#include <ctype.h>
#include "calc.h"

void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[]) /* s is an array of characters representing input */
{
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t') /* skip whitespace */
    ;

  s[1] = '\0'; /* trim whitespace */

  if (!isdigit(c) && c != '.' && c != '-')
    return c; /* not a number */

  i = 0;
  if (isdigit(c)) /* collect integer part */
      while (isdigit(s[++i] = c = getch()))
        ;

  if (c == '.' || c == '-') /* collect fraction part */
    while (isdigit(s[++i] = c = getch()))
      ;

  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}
