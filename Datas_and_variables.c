//Program to calculate perimeter and area of rectangle

#include <stdio.h>

int main (){
  double width = 32.3;
  double length = 15.3;
  double perimeter = 0.0;
  double area = 0.0;

  //Perimeter - 2(l+w)
  //Area - l*w

  perimeter = 2.0 * (length + width);
  area = length * width;

  printf("Perimeter of rectangle is : %f\n", perimeter);
  printf("Area of rectangle is : %f", area);
  return 0;
}
