#include <stdio.h>

int main() {
  char name[11]; // We want to store 10 characters, plus the string terminator
  puts("Enter your name: ");
  // scanf will save the first 10 characters of input entered into 'name'
  scanf("%10s", name);
  printf("Hello %s!\n", name);

  return 0;
}
