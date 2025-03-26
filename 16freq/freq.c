/*
Name:Saran S Kumar 
Class R2C
470
Aim: frequency of an element in an array
*/

#include <stdio.h>

int main() {
int n, i, find, count=0;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}
printf("Enter number to find frequency of: ");
scanf("%d", &find);
for (i = 0; i < n; i++) {
    if (arr[i] == find) {
             count++;
             }
    }
printf("frequency of element %d is %d",find,count);

    

    
}
