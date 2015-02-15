#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("The value of FLT_MAX is %f\n", FLT_MAX);
  printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
  printf("A float takes %zd bytes\n", sizeof(float));

  printf("The value of INT_MAX is %d\n", INT_MAX);
  printf("The value of INT_MIN is %d\n", INT_MIN);
  printf("An int takes %zd bytes\n", sizeof(int));

  printf("The value of CHAR_MAX is %d\n", CHAR_MAX);
  printf("The value of CHAR_MIN is %d\n", CHAR_MIN);
  printf("A char takes %zd bytes\n", sizeof(char));

  printf("The value of SHRT_MAX is %d\n", SHRT_MAX);
  printf("The value of SHRT_MIN is %d\n", SHRT_MIN);
  printf("A short takes %zd bytes\n", sizeof(short));

  printf("The value of DBL_MAX is %g\n", DBL_MAX);
  printf("The value of DBL_MIN is %g\n", DBL_MIN);
  printf("A double takes %zd bytes\n", sizeof(double));
  return 0;
}
