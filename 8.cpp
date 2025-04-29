#include <stdio.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 and numbers less than 1 are not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);


    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite number.\n", number);
    }

    return 0; // Indicate successful execution
}
