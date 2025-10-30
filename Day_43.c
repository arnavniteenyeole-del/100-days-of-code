// Day 43

#include <stdio.h>
#include <math.h>

int main() {
    // Q85: Reverse a string.
    printf("\n-- Q85 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int len=0; while (s[len]) len++;
    for (int i=len-1;i>=0;i--) putchar(s[i]); putchar('\n');

    // Q86: Check if string is palindrome.
    printf("\n-- Q86 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int len=0; while (s[len]) len++;
    int pal=1;
    for (int i=0;i<len/2;i++) if (s[i]!=s[len-1-i]){ pal=0; break; }
    printf(pal?"Palindrome\n":"Not Palindrome\n");

    return 0;
}
