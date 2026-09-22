//wap to convert hours into minutes
#include <stdio.h>
int main() {
    float hours, minutes;
    printf("Enter time in hours: ");
    scanf("%f", &hours);
    minutes = hours * 60;
    printf("Time in minutes is: %.2f\n", minutes);
    return 0;
}