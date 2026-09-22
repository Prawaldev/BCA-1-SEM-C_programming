//wap to find the remainder of two numbers
#include <stdio.h>
int main() {
    int n1, n2, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    remainder = n1 % n2;
    printf("Remainder of %d and %d is: %d\n", n1, n2, remainder);
    return 0;
}