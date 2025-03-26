/*
Name:Saran S Kumar 
Class R2C
470
Aim:To even and odd digits
*/
#include <stdio.h>
int main() {
int num, digit, evenSum = 0, oddSum = 0;
printf("Enter a number: ");
scanf("%d", &num);
while (num > 0) {
    digit = num % 10;
    if (digit % 2 == 0) {
            evenSum += digit;
    } else {
            oddSum += digit;
    }
        num /= 10;
}

    printf("Sum of even digits: %d\n", evenSum);
    printf("Sum of odd digits: %d\n", oddSum);

    return 0;
}