#include <stdio.h>

// Define the pi constant
#define PI 3.14159

int main() {
  // Get the radius from the user
  float radius;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Calculate the area of the circle
  float area = PI * radius * radius;

  // Print the area of the circle
  printf("The area of the circle is %.2f square units.\n", area);

  return 0;
}
