//wap to calcualte perimeter of rectangle
#include <stdio.h>
int main() {
    float length, width, perimeter;  
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    perimeter = 2 * (length + width);  
    printf("Perimeter of rectangle is: %.2f\n", perimeter);
    return 0;
}