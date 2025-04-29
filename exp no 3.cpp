//3. Write a C program to find the sum of individual digits of a 3 digit number.

#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10; 
        sum += digit;
        number = number / 10; 
    }

    printf("The sum of the individual digits is: %d\n", sum);

    return 0;
}

