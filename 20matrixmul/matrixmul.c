/*
Name:Saran S Kumar 
Class R2C
470
Aim:Matrix Multiplication

*/
#include <stdio.h>
int main() {
int m,n,o;
int  i, j, k;
printf("Enter values of m ,n, o(mxn: 1st matrix and nxo: 2nd matrix): ");
scanf("%d %d%d", &m, &n,&o);
int mat1[m][n], mat2[n][o], result[m][o];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < o; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < o; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j]= result[i][j]+ mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < o; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
