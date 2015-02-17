#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("ERROR: You need one argument.\n");
    // this is how you abort a program
    return 1;
  }

  int i = 0;
  for(i = 0; argv[1][i] != '\0'; i++) {

    char c, letter;
    letter = argv[1][i];
    int not_a_vowel = 0;
    switch(letter) {
      case 'a': //fallthrough
      case 'A':
        c = 'A';
        break;
      case 'e': //fallthrough
      case 'E':
        c = 'E';
        break;
      case 'i': //fallthrough
      case 'I':
        c = 'I';
        break;
      case 'o': //fallthrough
      case 'O':
        c = 'O';
        break;
      case 'u': //fallthrough
      case 'U':
        c = 'U';
        break;
      case 'y': //fallthrough
      case 'Y':
        c = 'Y';
        break;
      default:
        not_a_vowel = 1;
    }
    if (not_a_vowel)
      printf("%d: %c is not a vowel\n", i, letter);
    else
      printf("%d: %c\n", i, c);
  }

  return 0;
}
