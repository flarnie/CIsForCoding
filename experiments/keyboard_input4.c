#include <stdio.h>

int main() {
  char name[11]; // We want to store 10 characters, plus the string terminator
  puts("Enter your name: ");
  // fgets will save the first 10 characters of input entered into 'name'
  // params: pointer to a buffer, max size, and the source of the data
  fgets(name, sizeof(name), stdin);
  // "stdin" just means the data will come from the keyboard
  printf("Hello %s!\n", name);

  return 0;
}
