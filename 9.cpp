#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (str == NULL) {
        return; // Handle null pointer
    }

    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1; // Point to the last character

    while (start < end) {
        // Swap characters
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
