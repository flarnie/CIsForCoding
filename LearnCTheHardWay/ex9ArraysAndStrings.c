#include <stdio.h>

int main()
{
  int numbers[4] = {1};
  char name[4] = {'a'};

  // first, print then out raw
  puts("Uninitialized: \n");
  printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);

  printf("name: %s\n", name);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  // then print them out initialized
  puts("Initialized: \n");
  printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);

  printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);

  printf("name: %s\n", name);

  char *another = "Zed";

  printf("another %s\n", another);
  printf("another each: %c %c %c %c\n",
      another[0] ,another[1],
      another[2], another[3]);

// 'another' is a string literal, and cannot be updated.
// The below example will cause a 'bus error'.
//  puts("Changing another:");

//  another[0] = 'N';
//  printf("another %s\n", another);

  return 0;
}
