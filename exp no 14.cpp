//14. Write a C program to compute the monthly pay of employee using each employee's name, basic pay. The DA is computed as 52% of the basic pay. Gross-salary (basic pay + DA). Print the employees name and gross salary.

#include <stdio.h>

int main() {
    char name[50];
    float basic_pay, da, gross_salary;

    printf("Enter the employee's name: ");
    scanf("%s", name);
    
    printf("Enter the basic pay: ");
    scanf("%f", &basic_pay);

    // Calculate DA as 52% of the basic pay
    da = 0.52 * basic_pay;

    // Calculate gross salary
    gross_salary = basic_pay + da;

    // Print the employee's name and gross salary
    printf("Employee's Name: %s\n", name);
    printf("Gross Salary: %.2f\n", gross_salary);

    return 0;
}

