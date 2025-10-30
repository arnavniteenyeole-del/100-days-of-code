// Day 47

#include <stdio.h>
#include <math.h>

int main() {
    // Q93: Check anagrams (lowercase assumed)
    printf("\n-- Q93 --\n");
    char s[500], t[500]; printf("Enter string s: \n"); scanf("%499[\n]", s);
    printf("Enter string t: \n"); scanf("%499[\n]", t);
    int cnt[26]={0}; for (int i=0; s[i]; i++) if (s[i]>='a'&&s[i]<='z') cnt[s[i]-'a']++; 
    for (int i=0; t[i]; i++) if (t[i]>='a'&&t[i]<='z') cnt[t[i]-'a']--;
    int an=1; for (int i=0;i<26;i++) if (cnt[i]!=0) an=0;
    printf(an?"Anagram\n":"Not Anagram\n");

    // Q94: Find longest word in a sentence.
    printf("\n-- Q94 --\n");
    char s[1000]; printf("Enter sentence: \n"); scanf("%999[\n]", s);
    int maxlen=0, curlen=0, start=0, maxstart=0;
    for (int i=0; ; i++){
        if (s[i]!=' ' && s[i]!='\0') curlen++;
        else { if (curlen>maxlen){ maxlen=curlen; maxstart = i - curlen; } curlen=0; if (s[i]=='\0') break; }
    }
    char word[200]; int k=0; for (int i=0;i<maxlen;i++) word[k++]=s[maxstart+i]; word[k]='\0';
    printf("Longest word: %s\n", word);

    return 0;
}
