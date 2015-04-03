#include <stdio.h>
#include <errno.h>


void bad_recursion() {
  bad_recursion();
};
int main() {
  bad_recursion();
  return 0;
}
