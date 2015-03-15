#include <stdio.h>

int main()
{
  char c;
  c = getchar();
  while (c != EOF) {
    printf("%c ", c);
    c = getchar();
  }

  return 0;
}
