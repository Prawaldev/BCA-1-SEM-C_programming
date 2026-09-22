//wap to convert farenheit into celcius
#include <stdio.h>
int main() {
    float farenheit, celcius;
    printf("Enter temperature in farenheit: ");
    scanf("%f", &farenheit);
    celcius = (farenheit - 32) * 5 / 9;
    printf("Temperature in celcius is: %.2f\n", celcius);
    return 0;
}