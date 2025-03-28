/*
Name:Saran S Kumar 
Class R2C
470
Aim: remove duplicate elements from an array

*/
#include <stdio.h>

int main() {
int  n, i, j, k;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { // Duplicate found
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1]; // Shift elements left
                }
                n--; 
                j--; // Re-check at new position
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
