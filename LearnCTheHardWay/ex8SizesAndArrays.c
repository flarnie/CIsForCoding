#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = { 10, 12, 13, 14, 20 };
  areas[0] = 100;
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.',
    'S', 'h', 'a', 'w', '\0'
  };
  name[0] = 'F';
  full_name[0] = 'F';

  // Warning: on some systems you will have to change the %ld to a %u since it
  // will use unsigned ints.
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas is (int[]): %ld\n", sizeof(areas));
  printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]);
  printf("The size of char: %ld\n", sizeof(char));
  printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
  printf("name=\"%s\" and full_name = \"%s\"\n", name, full_name);

  return 0;
}
