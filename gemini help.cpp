#include <stdio.h>
#include <math.h>

int fibo(int a);
int checkprime(int a);

int main() {
    int num, fibonum = 0, check;
    printf("enter the position of the number you want to check: ");
    scanf("%d", &num);

    fibonum = fibo(num);
    check = checkprime(fibonum);

    if (check == 1) { // Corrected the if condition
        printf("the %dth term is %d is prime\n", num, fibonum);
    } else {
        printf("the %dth term is %d is not a prime no\n", num, fibonum);
    }
    return 0;
}

int fibo(int a) {
    int b = 0, c = 1, d = 1, e = 2; // Corrected initial values and logic
    if (a <= 0) {
        return 0;
    } else if (a == 1) {
        return 1;
    }

    for (int i = 2; i <= a; i++) {
        b = c;
        c = d;
        d = e;
        e = c + d;
    }
    return c; // Corrected return value to return the correct fibonacci number
}

int checkprime(int a) {
    if (a <= 1) {
        return 0;
    }
    int b = sqrt(a);
    for (int i = 2; i <= b; i++) { // Corrected loop condition
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}
