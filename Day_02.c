// Day 2

#include <stdio.h>
#include <math.h>

int main() {
    // Q3: Area and perimeter of rectangle.
    printf("\n-- Q3 --\n");
    float length, breadth;
    printf("Enter length and breadth: ");
    scanf("%f %f", &length, &breadth);
    printf("Area = %.2f\n", length * breadth);
    printf("Perimeter = %.2f\n", 2*(length + breadth));

    // Q4: Area and circumference of a circle.
    printf("\n-- Q4 --\n");
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Area = %.2f\n", M_PI * r * r);
    printf("Circumference = %.2f\n", 2 * M_PI * r);

    return 0;
}
