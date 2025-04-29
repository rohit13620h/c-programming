//8. WAP to determine if the given string is a palindrome or not. 
//(A string is palindrome if its half is mirror by itself eg: abcdcba).

#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);
int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);}

    return 0;
}
int isPalindrome(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}
