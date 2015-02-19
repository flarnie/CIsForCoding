#include <stdio.h>


char c = 'A';

int main() {
  // ***Characters are actually numbers under the hood
  printf("This is char 'A': %c\n", c);
  printf("This is also char 'A': %d\n", c);

  // As we will see, most things in C can be thought of as a number
  // They are all really just bits and bytes being stored on the machine.

  // ***There is no 'True' or 'False':
  // 0 is our 'False' in C,
  // and
  // Anything else is 'True'

  if (!0) {
    puts("0 is falsey");
  }
  if (1) {
    puts("1 is truthy");
  }

  return 0;
}
