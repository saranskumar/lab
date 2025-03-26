/*
Name:Saran S Kumar 
Class R2C
470
Aim:To check whether a matrix is symmetric or not

*/
#include <stdio.h>

int main() {
int  n, i, j, flag = 1;
printf("Enter size of square matrix (n x n): ");
scanf("%d", &n);
int mat[n][n],trans[n][n];
printf("Enter elements of the matrix:\n");
for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
}
for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            trans[j][i] = mat[i][j];
        }
}
for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != trans[i][j]) {
                flag = 0;
                break;
            }
        }
}

    if (flag!=0)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
