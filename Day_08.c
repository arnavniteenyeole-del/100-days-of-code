// Day 8

#include <stdio.h>
#include <math.h>

int main() {
    // Q15: Character type (upper, lower, digit, special)
    printf("\n-- Q15 --\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') printf("Uppercase alphabet\n");
    else if (ch >= 'a' && ch <= 'z') printf("Lowercase alphabet\n");
    else if (ch >= '0' && ch <= '9') printf("Digit\n");
    else printf("Special character\n");

    // Q16: Largest of three numbers
    printf("\n-- Q16 --\n");
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    printf("Largest = %d\n", largest);

    return 0;
}
