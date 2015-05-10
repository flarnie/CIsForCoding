#include <stdio.h>

// challenge 3:
// return a mask with position of least significant 1 bit marked
int copyLSB(int n) {
  return ((n & 1) << 8) + (-1);
};

int main() {
  int a = 7;
  int b = 0;

  int c = copyLSB(a);
  int d = copyLSB(b);

  printf("the LSB of %d is %d, and copy that everywhere to get %d\n", a,  1, 255);

  printf("leastBitPos(%d) -> %d\n", a, c);

  printf("the LSB of %d is %d, and copy that everywhere to get %d\n", b,  0, 0);

  printf("leastBitPos(%d) -> %d\n", b, d);
}
