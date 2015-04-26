#include <stdio.h>
#include <stdlib.h>

typedef enum { COUNT, WEIGHT, VOLUME } quantity_types;

// Create a struct with a nested union
typedef struct {
  const char* type;
  union {
    short count;
    float weight;
    float volume;
  } quantity;
  quantity_types quantity_type;
} fruit_order;

void print_fruit_order(fruit_order this_order) {
  if (this_order.quantity_type == COUNT) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %i\n", this_order.type, this_order.quantity.count);
  } else if (this_order.quantity_type == WEIGHT) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.weight);
  } else if (this_order.quantity_type == VOLUME) {
    printf("Fruit Order:\n  Type: %s\n  Quantity: %.2f\n", this_order.type, this_order.quantity.volume);
  }
};

// fruit order program
int main() {
  // create three fruit orders
  fruit_order apples = {"apples", 6, .quantity_type = COUNT};
  fruit_order strawberries = {"strawberries", .quantity.weight=1.5, .quantity_type = WEIGHT};
  fruit_order orange_juice = {"orange juice", .quantity.volume=0.5, .quantity_type = VOLUME};

  // print out the fruit orders
  print_fruit_order(apples);
  print_fruit_order(strawberries);
  print_fruit_order(orange_juice);

  return 0;
};
