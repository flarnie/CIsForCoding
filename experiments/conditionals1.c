#include <stdio.h>

int main() {
  if (1) {
    printf("WITHbrackets\n");
    printf("second line WITH brackets\n");
  }
  else {
    printf("else WITH brackets\n");
    printf("else second line WITH brackets\n");
  }


  if (1)
    printf("I will print if 1 is truthy\n");
  else
    printf("I will print if 1 is falsey\n");
    printf("I will always print\n");

  return 0;
}
