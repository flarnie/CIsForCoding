#include <stdio.h>

int main()
{
int current_temperature = 90;

switch (current_temperature) {
  case -10: case -9: case -8: case -7: case -6: case -5: case -4: case -3: case-2: case -1: case 0:
   printf("Brrrrrr!\n");
   break;
 case 50:
 case 60:
 case 70:
   printf("Mmmm - just right.\n");
   break;
 case 90:
   printf("Getting toasty!\n");
   break;
 default:
   printf("It's a fine day.\n");
   break;
 }

 printf("Outside the switch~\n");
  return 0;
}
