#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
  printf("Fahr.  |  Cels\n");
  float fahr, celsius;

  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    celsius = (5.0/9.0)  * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
  }

  return 0;
}
