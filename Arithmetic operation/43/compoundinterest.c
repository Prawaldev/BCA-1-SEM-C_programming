//wap to calculate compound interest
#include <stdio.h>
int main() {
    float principal, rate, time, compound_interest;
    printf("Enter principal amount, rate of interest and time (in years): ");
    scanf("%f %f %f", &principal, &rate, &time);
    compound_interest = principal * (1 + rate / 100) * time - principal;
    printf("Compound Interest is: %.2f\n", compound_interest);
    return 0;
}