//wap to display the character corresponding to the ASCII value entered by the user
#include<stdio.h>
int main() {
    int asciiValue;
    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &asciiValue);
    if(asciiValue >= 0 && asciiValue <= 127) {
        printf("The character corresponding to ASCII value %d is '%c'\n", asciiValue, asciiValue);
    } else {
        printf("Invalid ASCII value. Please enter a value between 0 and 127.\n");
    }
    return 0;
}