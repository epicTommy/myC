#include <stdio.h>

int main(void) {
  double width;
  double height;

  printf("Please enter the width of your rectangle: ");
  scanf("%lf", &width);

  printf("Please enter the height of your rectangle: ");
  scanf("%lf", &height);

  //calculates the perimeter of the rectangle
  double perimeter = 2 * (width + height);
  printf("The perimeter is: %.2f \n", perimeter);
  return 0;
}
