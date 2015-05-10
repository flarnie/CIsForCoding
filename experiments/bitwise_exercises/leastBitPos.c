#include <stdio.h>

// challenge 8:
// return a mask with position of least significant 1 bit marked
int leastBitPos(int n) {
  // check the first bit
  int mask = 1;
  int bitFound = mask & n;
  int answer = 0 | bitFound;
  // blank out the mask if we found the bit
  mask = (1 ^ bitFound) << 1;
  // repeat for subsequent bits
  int bitFound2 = mask & n;
  answer = answer | bitFound2;
  mask = (mask ^ bitFound2) << 1;

  int bitFound3 = mask & n;
  answer = answer | bitFound3;
  mask = (mask ^ bitFound3) << 1;

  int bitFound4 = mask & n;
  answer = answer | bitFound4;
  mask = (mask ^ bitFound4) << 1;

  int bitFound5 = mask & n;
  answer = answer | bitFound5;
  mask = (mask ^ bitFound5) << 1;

  int bitFound6 = mask & n;
  answer = answer | bitFound6;
  mask = (mask ^ bitFound6) << 1;

  int bitFound7 = mask & n;
  answer = answer | bitFound7;
  mask = (mask ^ bitFound7) << 1;

  int bitFound8 = mask & n;
  answer = answer | bitFound8;
  mask = (mask ^ bitFound8) << 1;

  return answer;
};

int main() {
  int a = 7;
  int b = 20;

  int c = leastBitPos(a);
  int d = leastBitPos(b);

  printf("least significant bit of %d is %d\n", a,  1);

  printf("leastBitPos(%d) -> %d\n", a, c);

  printf("least significant bit of %d is %d\n", b,  4);

  printf("leastBitPos(%d) -> %d\n", b, d);
}
