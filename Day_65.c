// Day 65

#include <stdio.h>
#include <math.h>

int main() {
    // Q115: Check if two strings are anagrams (lowercase)
    printf("\n-- Q115 --\n");
    char s[500], t[500]; printf("Enter s: \n"); scanf("%499[\n]", s); printf("Enter t: \n"); scanf("%499[\n]", t);
    int cs[26]={0}; for (int i=0;s[i];i++) if (s[i]>='a'&&s[i]<='z') cs[s[i]-'a']++;
    for (int i=0;t[i];i++) if (t[i]>='a'&&t[i]<='z') cs[t[i]-'a']--;
    int ok=1; for (int i=0;i<26;i++) if (cs[i]!=0) ok=0;
    printf(ok?"Anagram\n":"Not Anagram\n");

    return 0;
}
