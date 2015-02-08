#include <stdio.h>

int main()
{
  int blanks = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if ((c == '\n') || (c == '\t') || (c == '\v') || (c == ' '))
      blanks++;
    printf("%d\n", blanks);
  }

  return 0;
}
