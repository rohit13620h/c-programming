//9. WAP to check whether a number is prime, Armstrong or perfect number using functions.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;
    while (original != 0) {
        int remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    return (sum == n);
}

// Function to check if a number is a perfect number
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

