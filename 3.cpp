#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 89, 34, 56}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int greatest = arr[0]; 

    if (size == 0) {
        printf("Array is empty.\n");
        return 1; 
    }

    for (int i = 1; i < size; i++) {
        if (arr[i] > greatest) {
            greatest = arr[i]; 
        }
    }

    printf("The greatest element in the array is: %d\n", greatest);

    return 0; 
}
//done
