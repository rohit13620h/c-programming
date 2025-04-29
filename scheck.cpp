#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* generateRandomNumbers() {
    static int numbers[5]; // Using static to ensure the array persists after function returns
    srand(time(NULL)); // Seed for random number generation

    for (int i = 0; i < 5; i++) {
        numbers[i] = rand() % 100; // Generates numbers between 0-99
    }

    return numbers; // Returning pointer to the array
}

int main() {
    int* randomNums = generateRandomNumbers();

    printf("Generated random numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", randomNums[i]);
    }

    return 0;
}

