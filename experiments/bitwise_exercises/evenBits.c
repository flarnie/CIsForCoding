#include <stdio.h>

// challenge 6:
// Even-numbered bits set to 1
int evenBits() {
  int i;
  i = 1;
  i |= i << 2;
  i |= i << 4;
  i |= i << 8;
  i |= i << 16;
  return i;
};

int main() {
  int c = evenBits();

  printf("a number with even bits set to 1 would be %d\n", 0x55555555);

  printf("evenBits() -> %d\n", c);
}
