//wap to convert meter into kilometer
#include <stdio.h>
int main() {
    float meter, kilometer;
    printf("Enter distance in meter: ");
    scanf("%f", &meter);
    kilometer = meter / 1000;
    printf("Distance in kilometer is: %.2f\n", kilometer);
    return 0;
}