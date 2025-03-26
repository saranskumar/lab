/*
Name:Saran S Kumar 
Class R2C
470
Aim:To find largest and smallest element in an array

*/
#include <stdio.h>

int main() {
int  n, i, smallest, largest;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements: ");
for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
}

smallest = largest = arr[0];
for (i = 1; i < n; i++) {
 if (arr[i] < smallest) {
            smallest = arr[i];
    }
if (arr[i] > largest) {
            largest = arr[i];
        }
}

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
