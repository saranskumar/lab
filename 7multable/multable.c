/*
Name:Saran S Kumar 
Class R2C
470
Aim:To print multiplication table of a number

*/
#include <stdio.h>
int main() {
int n, i;
printf("Enter a number: ");
scanf("%d", &n);
printf("Multiplication Table of %d:\n", n);
for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
return 0;
}
