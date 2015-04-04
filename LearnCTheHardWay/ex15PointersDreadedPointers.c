#include <stdio.h>

int main(int argc, char *argv[]) {
  // create two arrays we care about
  int ages[] = {1, 2, 3, 4, 5};
  char *names[] = {
    "Libby", "Jennifer", "Brenda", "Nicole", "Tam"
  };

  // safely get the size of the ages
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way using indexing
  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n", names[i], ages[i]);
  }

  printf("-----\n");

  // setup the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;

  // second way using pointers;
  for(i = 0; i < count; i++) {
    printf("%s second time has %d years.\n", *(cur_name+i), *(cur_age+i));
  }

  printf("-----\n");

  // third way; pointers are just arrays;
  for(i = 0; i < count; i++) {
    printf("%s third time has %d years.\n", cur_name[i], cur_age[i]);
  }

  printf("-----\n");

  // fourth way is stupidly complex
  for(cur_name = names, cur_age = ages;
        (cur_age - ages) < count;
        cur_name++, cur_age++)
  {
    printf("%s lived %d years the fourth time.\n",
          *cur_name, *cur_age);
  }


  return 0;
}
