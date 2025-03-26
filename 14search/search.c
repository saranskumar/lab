/*
Name:Saran S Kumar 
Class R2C
470
Aim:To search a element in an array

*/
#include <stdio.h>

int main() {
int  n, i, search;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}
printf("Enter the element to search: ");
scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d\n", search, i);
            break; 
        }
    }


    return 0;
}
