//wap to take user input of two numbers and perform arithmetic operations and check if theres 0 in denominator
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2); 
    printf("Sum: %d\n", n1 + n2);
    printf("Difference: %d\n", n1 - n2);
    printf("multiply: %d\n", n1 * n2);
    if (n2 != 0) {
        printf("divide: %d\n", n1 / n2);
    } else {
        printf("Error: Denominator cannot be zero.\n");
    }
    return 0;
}