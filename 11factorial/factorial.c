/*
Name:Saran S Kumar 
Class R2C
470
Aim:To factorial of a number

*/
#include <stdio.h>
int main() {
int n, i,factorial = 1;
printf("Enter a number: ");
scanf("%d", &n);

    if (n < 0) {
        printf("ENtered number is -ve.");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial*i;
        }
        printf("Factorial of %d is %d", n, factorial);
    }

    return 0;
}
