#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

void multiplyMatrices(int mat1[][COL1], int mat2[][COL2], int result[][COL2]) {
    int i, j, k;

    // Initialize result matrix with zeros
    for (i = 0; i < ROW1; ++i) {
        for (j = 0; j < COL2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (i = 0; i < ROW1; ++i) {
        for (j = 0; j < COL2; ++j) {
            for (k = 0; k < COL1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][COL2], int row, int col) {
    int i, j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROW1][COL1] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[ROW2][COL2] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int resultMatrix[ROW1][COL2];

    // Perform multiplication
    multiplyMatrices(matrix1, matrix2, resultMatrix);

    // Print the result matrix
    printf("Resultant Matrix:\n");
    printMatrix(resultMatrix, ROW1, COL2);

    return 0;
}