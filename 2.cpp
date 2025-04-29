#include <stdio.h>

void swapCallByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapCallByReference: *a = %d, *b = %d\n", *a, *b); // Swapped globally
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapCallByReference: num1 = %d, num2 = %d\n", num1, num2);
    swapCallByReference(&num1, &num2); 
    printf("After swapCallByReference: num1 = %d, num2 = %d\n", num1, num2); // Original values are swapped

    return 0;
}
//done
