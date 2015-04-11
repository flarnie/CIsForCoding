#include <stdio.h>
#include <stdlib.h>

int main() {
  char *line = malloc(sizeof(char));
  if (line == NULL) {
    // Always check for error when dynamically requesting memory
    printf("ERROR: Couldn't allocate the requested memory.");
    return 1;
  }

  // Loop through the user input one character at a time
  char c = getchar();
  int index = 0;
  while (c != EOF) {
    // store the character at the current index
    line[index] = c;
    // Up the index and get the next character
    index++;
    c = getchar();

    // Make room for the next character
    // TODO: why does the program still work with the following line commented
    // out?
    //!!! line = realloc(line, (index * sizeof(c)));

    // error checking again
    if (line == NULL) {
      return 1;
    }
  }

  printf("User input was %s.\n", line);
  free(line);
  return 0;
}

