#include <stdio.h>
#include "fizz.h"
#include "buzz.h"

int main()
{
  int did_fizz_or_buzz = 0;

  int i;
  for(i = 0; i < 100; i++) {
    printf("i = %d\n", i);
    if (i % 3 == 0) {
      fizz();
      did_fizz_or_buzz = 1;
    }
    if (i % 5 == 0) {
      buzz();
      did_fizz_or_buzz = 1;
    }

    if (!did_fizz_or_buzz) {
      printf("%d", i);
    }

    printf("\n");
  }
}
