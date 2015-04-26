#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

void person_print(struct Person who) {
  printf("Name: %s\n", who.name);
  printf("\tAge: %d\n", who.age);
  printf("\tHeight: %d\n", who.height);
  printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[]) {
  // make two people structures
  struct Person joe = { "Joe Alex", 32, 64, 140 };
  struct Person frank = { "Frank Blank", 20, 72, 180 };

  // print them out
  person_print(joe);
  person_print(frank);

  // Make everyone age 20 years and print them again
  joe.age += 20;
  joe.height -= 2;
  joe.weight += 40;

  frank.age += 20;
  frank.weight += 20;

  person_print(joe);
  person_print(frank);

  return 0;
}
