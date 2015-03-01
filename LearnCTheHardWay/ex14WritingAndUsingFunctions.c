#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int arglength);
void print_digits(char arg[], int arglength);
void print_arguments(int argc, char *argv[]);

void print_arguments(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++) {
    char *argument = argv[i];
    int arglength = strlen(argument);

    print_letters(argument, arglength);
    print_digits(argument, arglength);
  }
};

void print_letters(char arg[], int arglength)
{
  int i;

  for(i = 0; i < arglength; i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d\n", ch, ch);
    }
  }
}

void print_digits(char arg[], int arglength)
{
  int i;

  for(i = 0; i < arglength; i++) {
    char ch = arg[i];

    if(isdigit(ch)) {
      printf("found the digit %c\n", ch);
    }
  }
}

int can_print_it(char ch) {
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[]) {
  print_arguments(argc, argv);
  return 0;
}
