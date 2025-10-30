// Day 42

#include <stdio.h>
#include <math.h>

int main() {
    // Q83: Count vowels and consonants in a string.
    printf("\n-- Q83 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int v=0, c=0;
    for (int i=0; s[i]; i++){
        char ch = s[i];
        if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            char low = tolower(ch);
            if (low=='a'||low=='e'||low=='i'||low=='o'||low=='u') v++; else c++;
        }
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);

    // Q84: Convert lowercase string to uppercase without built-ins.
    printf("\n-- Q84 --\n");
    char s[500]; printf("Enter lowercase string: \n"); scanf("%499[\n]", s);
    for (int i=0; s[i]; i++) if (s[i]>='a' && s[i]<='z') s[i] = s[i] - 'a' + 'A';
    printf("Uppercase: %s\n", s);

    return 0;
}
