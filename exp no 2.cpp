//2. Write a program to evaluate the area of triangle with 3 sides given and display the result (take the value of sides from user as input).
//[Hints: area=sqrt(s(s-a) (s-b) (s-c)) where a,b,c are the sides of the triangle and s=(a+b+c)/2]

#include <stdio.h>
#include <math.h> // Include math library for sqrt function

int main() {
    float a, b, c, s, area;

    // Get the sides from the user
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the semi-perimeter
    s = (a + b + c) / 2;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    printf("The area of the triangle is: %f\n", area);

    return 0;
}

