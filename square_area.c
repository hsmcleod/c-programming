/* Takes the side of a square in inches as input and computes and prints out the area of the square
in  cm^2 as the output with 2 decimal places */

#include <stdio.h>
#define SCALE_FACTOR 2.54f

int main(void){
  float inches, centimeters, area;
  
  printf("Enter side length in inches: \n");
  scanf("%f", &inches);
  
  centimeters = inches * SCALE_FACTOR;
  area = centimeters * centimeters;
  
  printf("Area in cm^2: %.2f\n, area);
  return 0;
}
