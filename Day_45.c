// Day 45

#include <stdio.h>
#include <math.h>

int main() {
    // Q89: Count frequency of a given character in a string.
    printf("\n-- Q89 --\n");
    char s[500]; char ch; printf("Enter string: \n"); scanf("%499[\n]", s);
    printf("Enter character to count: "); scanf(" %c", &ch);
    int cnt=0;
    for (int i=0; s[i]; i++) if (s[i]==ch) cnt++;
    printf("Frequency = %d\n", cnt);

    // Q90: Toggle case of each character.
    printf("\n-- Q90 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    for (int i=0; s[i]; i++){
        if (s[i]>='a' && s[i]<='z') s[i] = s[i] - 'a' + 'A';
        else if (s[i]>='A' && s[i]<='Z') s[i] = s[i] - 'A' + 'a';
    }
    printf("Toggled: %s\n", s);

    return 0;
}
