/*
Name:Saran S Kumar 
Class R2C
470
Aim:To print multiplication table of a number

*/
#include <stdio.h>
int main() {
int n, i;
int a = 0, b = 1, c;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series: ");
for (i = 0; i < n; i++) {
    if (i <= 1) {
            c = i;
    } else {
            c =a + b;
            a = b;
            b = c;
    }
        printf("%d,", c);
}
    

    return 0;
}