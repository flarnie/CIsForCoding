#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv
  int i = 0;
  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // make our own array of strings
  char *states[] = {
    "Minnesota", "Massachusetts",
    "Florida", "California"
  };
  int num_states = 4;

  int j = 0;
  while (j < num_states) {
    printf("state %d: %s\n", j, states[j]);
    j++;
  }

  return 0;
}
