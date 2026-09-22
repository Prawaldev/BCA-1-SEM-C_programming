//wap to find the average of three numbers
#include <stdio.h>
int main() {
    float n1, n2, n3, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    average = (n1 + n2 + n3) / 3;
    printf("Average of %.2f, %.2f and %.2f is: %.2f\n", n1, n2, n3, average);
    return 0;
}