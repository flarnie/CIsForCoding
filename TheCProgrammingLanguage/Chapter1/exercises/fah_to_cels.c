#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
  printf("Fahr.  |  Cels\n");
  float fahr, celsius;
  float lower, upper, step;

  lower = 0.0; /* lower limit of temperature table */
  upper = 300.0; /* upper limit */
  step = 20.0; /* step size */

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0)  * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
