// Day 44

#include <stdio.h>
#include <math.h>

int main() {
    // Q87: Count spaces, digits, special characters in a string.
    printf("\n-- Q87 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int spaces=0, digits=0, special=0;
    for (int i=0; s[i]; i++){
        if (s[i]==' ') spaces++;
        else if (s[i]>='0' && s[i]<='9') digits++;
        else if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) ;
        else special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    // Q88: Replace spaces with hyphens in a string.
    printf("\n-- Q88 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    for (int i=0; s[i]; i++) if (s[i]==' ') s[i]='-';
    printf("Result: %s\n", s);

    return 0;
}
