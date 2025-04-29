#include <stdio.h>

int main() {
    int num = 10;
    int *ptr1 = &num;   // Pointer to an integer
    int **ptr2 = &ptr1; // Pointer to a pointer to an integer

    // Accessing the value of 'num' using pointers
    printf("Value of num: %d\n", num);
    printf("Value of num using ptr1: %d\n", *ptr1);
    printf("Value of num using ptr2: %d\n", **ptr2);

    // Accessing the address of 'num'
    printf("Address of num: %p\n", &num);
    printf("Address of num using ptr1: %p\n", ptr1);
    printf("Address of num using ptr2: %p\n", *ptr2);

    // Accessing the address of ptr1
    printf("Address of ptr1: %p\n", &ptr1);
    printf("Address of ptr1 using ptr2: %p\n", ptr2);

    // Modifying the value of 'num' using ptr2
    **ptr2 = 20;
    printf("Modified value of num: %d\n", num);

    return 0;
}
