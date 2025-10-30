// Day 7

#include <stdio.h>
#include <math.h>

int main() {
    // Q13: Leap year check
    printf("\n-- Q13 --\n");
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap year\n", year);
    else
        printf("%d is not a Leap year\n", year);

    // Q14: Vowel or Consonant
    printf("\n-- Q14 --\n");
    char ch;
    printf("Enter a single alphabet: ");
    scanf(" %c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);

    return 0;
}
