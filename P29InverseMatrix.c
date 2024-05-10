#include <stdio.h>

#define N 3

void printMatrix(float matrix[N][N]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void inverseMatrix(float matrix[N][N], float inverse[N][N]) {
    // Initialize the inverse matrix as an identity matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            inverse[i][j] = (i == j) ? 1 : 0;
        }
    }

    // Perform Gaussian elimination
    for (int i = 0; i < N; i++) {
        float pivot = matrix[i][i];
        // Scale the current row to make the diagonal element 1
        for (int j = 0; j < N; j++) {
            matrix[i][j] /= pivot;
            inverse[i][j] /= pivot;
        }
        // Subtract multiples of the current row from other rows
        for (int k = 0; k < N; k++) {
            if (k != i) {
                float factor = matrix[k][i];
                for (int j = 0; j < N; j++) {
                    matrix[k][j] -= factor * matrix[i][j];
                    inverse[k][j] -= factor * inverse[i][j];
                }
            }
        }
    }
}

int main() {
    float matrix[N][N] = {{2, 1, -1},
                          {0, -1, 2},
                          {1, 1, 1}};
    float inverse[N][N];

    printf("Original Matrix:\n");
    printMatrix(matrix);

    inverseMatrix(matrix, inverse);

    printf("\nInverse Matrix:\n");
    printMatrix(inverse);

    return 0;
}