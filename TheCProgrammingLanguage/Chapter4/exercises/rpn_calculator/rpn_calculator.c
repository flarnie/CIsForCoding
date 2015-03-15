#include <stdio.h>
#include <stdlib.h> /* for atof() */

#define MAXOP 100 /* max size of operator */
#define NUMBER '0' /* signal that number was found */

int getop(char []);
void push(double);
double pop(void);

/* reverse Polish notation calculator */
int main()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {

    printf("s is %s\n", s);
    if (type == NUMBER) {
      printf("found a number: %f\n", atof(s));
      push(atof(s));
    }
    else if (type == '+') {
      printf("found a plus\n");
      push(pop() + pop());
    }
    else if (type == '\n') {
      printf("calculating result!:\n");
      printf("\t%.8g\n", pop());
    }
    else {
      return 1;
    }
  }
  return 0;
}

#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

/* push: push f onto value stack */
void push(double f)
{
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
  if (sp > 0)
    return val[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[]) /* s is an array of characters representing input */
{
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t') /* skip whitespace */
    ;

  s[1] = '\0'; /* trim whitespace */

  if (!isdigit(c) && c != '.')
    return c; /* not a number */

  i = 0;
  if (isdigit(c)) /* collect integer part */
      while (isdigit(s[++i] = c = getch()))
        ;

  if (c == '.') /* collect fraction part */
    while (isdigit(s[++i] = c = getch()))
      ;

  s[i] = '\0';
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE]; /* buffer for ungetch */
int bufp = 0; /* next free positin in buf */

int getch(void) /* get a (possibly pushed back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
