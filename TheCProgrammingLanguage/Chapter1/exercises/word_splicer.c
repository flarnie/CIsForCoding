#include <stdio.h>

#define IN 1 /* in a word */
#define OUT 0 /* out of a word */
#define MAX 45 /* max number of letters allowed in a word */

/* Write a program that prints its input one word per line */

int main()
{
  char c;
  int state = OUT;
  char current_word[MAX];
  int current_index = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t'){
      if (state == IN) {
        state = OUT;
        current_word[(current_index + 1)] = '\0';
        printf("New word found: %s\n", current_word);
        // TODO: clear out the current_word array or make new array.
        current_index = 0;
      }
    }
    else {
      if (state == OUT) {
        state = IN;
      }
      current_word[current_index] = c;
    }
    ++current_index;
  }
  return 0;
}
