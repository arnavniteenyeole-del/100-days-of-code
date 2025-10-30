// Day 41

#include <stdio.h>
#include <math.h>

int main() {
    // Q81: Count characters in a string without strlen.
    printf("\n-- Q81 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s); // read line
    int count=0; for (int i=0; s[i]; i++) count++;
    printf("Length = %d\n", count);

    // Q82: Print each character of a string on a new line.
    printf("\n-- Q82 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    for (int i=0; s[i]; i++) printf("%c\n", s[i]);

    return 0;
}
