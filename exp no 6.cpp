//6. Write a C program which takes two integer operands and one operator from the user, performs the operation and then prints the result. (Consider the operators +,-,*, /, % and use Switch Statement)

#include <stdio.h>

int main() {
    int operand1, operand2, result;
    char operatorr;

    // Get the operands and the operator from the user
    printf("Enter the first operand: ");
    scanf("%d", &operand1);
    printf("Enter the second operand: ");
    scanf("%d", &operand2);
    printf("Enter the operator (+, -, *, /, %): ");
    scanf(" %c", &operatorr);

    // Perform the operation based on the operator using switch statement
    switch (operatorr) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        case '%':
            if (operand2 != 0) {
                result = operand1 % operand2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    // Display the result
    printf("The result of %d %c %d is: %d\n", operand1, operatorr, operand2, result);

    return 0;
}

