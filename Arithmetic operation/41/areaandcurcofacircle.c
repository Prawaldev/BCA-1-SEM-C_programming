//wap to calculate the area and circumference of a circle
#include <stdio.h>
int main() {
   float pi = 3.14159, radius, area, circumference;
   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);
   area = pi * radius * radius;
   circumference = 2 * pi * radius;
   printf("Area of the circle is: %.2f\n", area);
   printf("Circumference of the circle is: %.2f\n", circumference);
   return 0;
}