//wap to subtract two numbers
#include <stdio.h>
int main() {
    int n1, n2, difference;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    difference = n1 - n2;   
    printf("Difference of %d and %d is: %d\n", n1, n2, difference);
    return 0;
}