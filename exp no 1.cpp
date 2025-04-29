//1. Write a C program to find the area and volume of sphere and display the results. Formulas are:-
//Area = 4*PI*R*R Volume = 4/3*PI*R*R*R.
//Note: Assume Pl=3.14 and take the value of R from user

#include <stdio.h>

int main() {
    float radius, area, volume;
    const float PI = 3.14;

    // Get the radius from the user
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the area
    area = 4 * PI * radius * radius;

    // Calculate the volume
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    // Display the results
    printf("The area of the sphere is: %.2f\n", area);
    printf("The volume of the sphere is: %.2f\n", volume);

    return 0;
}

