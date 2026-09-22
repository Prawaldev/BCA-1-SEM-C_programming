//wap to calcualte area of rectangle
#include <stdio.h>
int main() {
    float length, width, area;  
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    area = length * width;  
    printf("Area of rectangle is: %.2f\n", area);
    return 0;
}