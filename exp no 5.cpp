//5. Write a program to compute amount of electric bill as per charge below:
//No of Units Consumed
//500 and above 
//200-500
//100-200
//Less than 100
//Rates (In Rs.)
//5.50
//3.50
//2.50
//1.50

#include <stdio.h>

int main() {
    int units;
    float billAmount;

    // Get the number of units consumed from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill amount based on the given rates
    if (units >= 500) {
        billAmount = (units-499)*5.50 + 148.5 + 250 + 1050;
    } else if (units >= 200) {
        billAmount =(units-199) * 3.50 + 148.5 + 250;
    } else if (units >= 100) {
        billAmount = (units-99) * 2.50 + 148.5;
    } else {
        billAmount = units * 1.50;
    }

    // Display the bill amount
    printf("The total electric bill is: Rs. %.2f\n", billAmount);

    return 0;
}

