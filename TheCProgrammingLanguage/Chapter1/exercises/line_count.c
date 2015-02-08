#include <stdio.h>

int main()
{
  int nl = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      ++nl;
    printf("%d\n", nl);
  }

  return 0;
}
