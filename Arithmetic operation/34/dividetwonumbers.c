//wap to divide two numbers
#include <stdio.h>
int main() {
  float n1,n2,q;
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);
    q = n1 / n2;
    printf("Quotient of %.2f and %.2f is: %.2f\n", n1, n2, q);
    return 0;
}