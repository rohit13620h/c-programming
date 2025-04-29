#include <stdio.h>

#define ROWS 2 
#define COLS 2 
void printmx(int a[ROWS][COLS]);
int main() {
    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
    int sumMatrix[ROWS][COLS];
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

printmx(sumMatrix);
    return 0;
}

void printmx(int a[ROWS][COLS]){
	for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
