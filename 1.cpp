#include <stdio.h>

void swapCallByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapCallByValue: a = %d, b = %d\n", a, b); // Swapped locally
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapCallByValue: num1 = %d, num2 = %d\n", num1, num2);
    swapCallByValue(num1, num2);
    printf("After swapCallByValue: num1 = %d, num2 = %d\n", num1, num2); // Original values unchanged


    return 0;
}
//done
