// matrix  multiplication
#include <stdio.h>

#define MAX_SIZE 10

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int row1, col1, row2, col2, i, j, k;

    printf("Enter the number of rows and columns for the first matrix (row1 col1): ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the number of rows and columns for the second matrix (row2 col2): ");
    scanf("%d %d", &row2, &col2);
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Check if matrix multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }
    // Multiply matrices
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
