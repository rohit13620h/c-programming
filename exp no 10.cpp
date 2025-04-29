//10.WAP that uses functions to perform Matrix addition and subtraction on two Matrices.

#include <stdio.h>

void matrixAddition(int a[10][10], int b[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrixSubtraction(int a[10][10], int b[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10], row, col;

    // Input matrix dimensions
    printf("Enter rows and columns for the matrices: ");
    scanf("%d %d", &row, &col);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    matrixAddition(a, b, result, row, col);
    printf("Resultant matrix after addition:\n");
    displayMatrix(result, row, col);

    // Subtract matrices
    matrixSubtraction(a, b, result, row, col);
    printf("Resultant matrix after subtraction:\n");
    displayMatrix(result, row, col);

    return 0;
}

