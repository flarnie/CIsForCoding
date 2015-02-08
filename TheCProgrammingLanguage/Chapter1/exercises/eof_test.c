#include <stdio.h>

int main() {
  int c;

  printf("Please enter some text.");
  c = getchar();
  int result;
  result = (c != EOF);
  if (result == 0)
    printf("result is 0\n");
  if (result == 1)
    printf("result is 1\n");
  printf("EOF is ");
  printf("%d\n", EOF);
  return 0;
}
