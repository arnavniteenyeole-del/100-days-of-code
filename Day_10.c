// Day 10

#include <stdio.h>
#include <math.h>

int main() {
    // Q19: Classify triangle by sides
    printf("\n-- Q19 --\n");
    int a,b,c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c) printf("Equilateral\n");
    else if (a==b || b==c || a==c) printf("Isosceles\n");
    else printf("Scalene\n");

    // Q20: Day of week using switch-case (1-7)
    printf("\n-- Q20 --\n");
    int d;
    printf("Enter day number (1-7): ");
    scanf("%d", &d);
    switch(d) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day number\n");
    }

    return 0;
}
