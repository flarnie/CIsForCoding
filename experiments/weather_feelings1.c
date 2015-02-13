#include <stdio.h>

int main()
{
  int current_temperature = 90;
  if (current_temperature == -10)
    printf("Brrrrrr!\n");
  else if ((current_temperature > 50) && (current_temperature < 70))
    printf("Mmmm - just right.\n");
  else
    printf("Getting toasty!\n");

  return 0;
}
