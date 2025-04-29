//4. Write a program to swap two variables values with or without using third Variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Get the values of a and b from the user
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display the results
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

