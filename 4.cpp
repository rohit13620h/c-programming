#include <stdio.h>

// Function to calculate the nth Fibonacci number (iterative approach)
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int fib[n + 1]; // Array to store Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}


int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);


 printf("Fibonacci(%d)  = %d\n", num, fibonacci(num));    

    return 0;
}
