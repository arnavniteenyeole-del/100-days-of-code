// Day 46

#include <stdio.h>
#include <math.h>

int main() {
    // Q91: Remove vowels from a string.
    printf("\n-- Q91 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    char out[500]; int idx=0;
    for (int i=0; s[i]; i++){
        char low = tolower(s[i]);
        if (!(low=='a'||low=='e'||low=='i'||low=='o'||low=='u')) out[idx++]=s[i];
    }
    out[idx]='\0'; printf("Result: %s\n", out);

    // Q92: Find first repeating lowercase alphabet.
    printf("\n-- Q92 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int seen[26]={0}; char found='\0';
    for (int i=0; s[i]; i++){
        if (s[i]>='a' && s[i]<='z'){ if (seen[s[i]-'a']){ found=s[i]; break; } seen[s[i]-'a']=1; }
    }
    if (found) printf("First repeating lowercase alphabet: %c\n", found); else printf("None\n");

    return 0;
}
