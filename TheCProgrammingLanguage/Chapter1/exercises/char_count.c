#include <stdio.h>

int main()
{
  long nc;
  nc = 0;
  int c;

  while ((c = getchar()) != EOF) {
    ++nc;
    printf("%ld\n", nc);
  }
  return 0;
}
