//wap to convert kilometer into meter
#include <stdio.h>
int main() {
    float kilometer, meter;
    printf("Enter distance in kilometer: ");
    scanf("%f", &kilometer);
    meter = kilometer * 1000;
    printf("Distance in meter is: %.2f\n", meter);
    return 0;
}