/* reverse Polish notation calculator */
#include <stdio.h>
#include <stdlib.h> /* for atof() */
#include <math.h> /* for fmod() and others */
#include "calc.h"

int main()
{
  int type;
  double op2, op1;
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {

    switch(type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        push((pop() - pop()));
        break;
      case '*':
        push(pop() * pop());
        break;
      case '/':
        op2 = pop();
        if (op2 != 0.0)
          push(pop() / op2);
        else
          printf("error: cannot divide by 0\n");
        break;
      case '%':
        op2 = pop();
        op1 = pop();
        if (op2 == 0 && op1 < 0)
          printf("error: cannot find the power of %f to %f", op2, op1);
        else
          push(fmod(op2, pop()));
        break;
      case 's': /* sin(x) */
        push(sin(pop()));
        break;
      case 'c': /* cos(x) */
        push(cos(pop()));
        break;
      case 't': /* tan(x) */
        push(tan(pop()));
        break;
      case 'p': /* pow(x, y) */
        op2 = pop();
        push(pow(pop(), op2));
        break;
      case '\n':
        printf("calculating result: %.8g\n", pop());
        break;
      default:
        printf("error: unknown command %c\n", type);
        return 1;
        break;
    }
  }
  return 0;
}
