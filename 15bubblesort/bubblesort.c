/*
Name:Saran S Kumar 
Class R2C
470
Aim: bubblesort an array

*/
#include <stdio.h>
int main() {
int  n, i, j, temp;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}
    for (i = 0; i <n-1 ; i++) {
        for (j = 0; j < n - 1 -i ; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
