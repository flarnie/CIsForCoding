#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  if (argc == 1) {
    printf("You have not enough arguments. Meow.\n");
  } else if (argc > 1 && argc < 4) {
    printf("Here's your arguments: \n");

    for(i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
    printf("\n");
  } else {
    printf("You have too many arguments. Meow.\n");
  }

  return 0;
}
