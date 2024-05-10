#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS], sum[MAX_ROWS][MAX_COLS];
    int rows, cols;
    
    // Input for matrix 1
    printf("Enter the number of rows and columns for matrix 1 (max 10 each): ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter the elements of matrix 1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input for matrix 2
    printf("\nEnter the elements of matrix 2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d,%d): ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Adding matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Displaying the sum matrix
    printf("\nThe sum of the matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}