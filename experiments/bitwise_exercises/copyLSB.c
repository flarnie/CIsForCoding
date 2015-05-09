#include <stdio.h>

// challenge 3:
// Word with all bits set to LSB of x
int copyLSB(char *word) {
  return word; // TODO: fill in the code here to return the correct answer.
};

int main() {
  int a = 60;
  int b = 13;

  int c = bitOr(a, b);

  printf("%d&%d should be %d\n", a, b, 61);

  printf("bitAnd(%d, %d) -> %d\n", a, b, c);
}
