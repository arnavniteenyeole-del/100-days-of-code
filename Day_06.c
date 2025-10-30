// Day 6

#include <stdio.h>
#include <math.h>

int main() {
    // Q11: Even or odd
    printf("\n-- Q11 --\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("%d is Even\n", num);
    else printf("%d is Odd\n", num);

    // Q12: Positive, Negative or Zero
    printf("\n-- Q12 --\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) printf("Positive\n");
    else if (num < 0) printf("Negative\n");
    else printf("Zero\n");

    return 0;
}
