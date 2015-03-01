#include <stdio.h>

float get_magic_number(); // declaration

int main()
{
  float magic_number = get_magic_number();

  printf("The magic number is %f\n", magic_number);

  return 0;
}

float get_magic_number() { // definition
  return 7.0;
}

