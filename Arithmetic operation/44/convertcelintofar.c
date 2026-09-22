//wap to convert celcius into farenheit
#include <stdio.h>
int main() {
    float celcius, farenheit;
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    printf("Temperature in farenheit is: %.2f\n", farenheit);
    return 0;
}