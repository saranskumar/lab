/*
Name:Saran S Kumar 
Class R2C
470
Aim:To print row and column sum of a matrix
*/
#include <stdio.h>

int main() {
    int row, col, i, j , rowSum = 0, colSum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < row; i++) {
    
        for (j = 0; j < col; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    for (j = 0; j < col; j++) {
       
        for (i = 0; i < row; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }

    return 0;
}

