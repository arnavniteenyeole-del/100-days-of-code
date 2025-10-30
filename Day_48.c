// Day 48

#include <stdio.h>
#include <math.h>

int main() {
    // Q95: Check if one string is rotation of another.
    printf("\n-- Q95 --\n");
    char s[500], t[500]; printf("Enter s: \n"); scanf("%499[\n]", s); printf("Enter t: \n"); scanf("%499[\n]", t);
    int ls=0, lt=0; while(s[ls]) ls++; while(t[lt]) lt++;
    if (ls!=lt) { printf("Not rotation\n"); }
    else {
        // check if t is substring of s+s
        char ss[1000]; for (int i=0;i<ls;i++) ss[i]=s[i]; for (int i=0;i<ls;i++) ss[ls+i]=s[i]; ss[2*ls]='\0';
        if (strstr(ss, t)) printf("Rotation\n"); else printf("Not rotation\n");
    }

    // Q96: Reverse each word in a sentence without changing order.
    printf("\n-- Q96 --\n");
    char s[1000]; printf("Enter sentence: \n"); fgets(s, 1000, stdin); if (s[0]=='\n') fgets(s,1000,stdin);
    int i=0;
    while (s[i]){
        int start=i;
        while (s[i] && s[i]!=' ' && s[i]!='\n') i++;
        for (int j=i-1;j>=start;j--) putchar(s[j]);
        if (s[i]==' ') putchar(' ');
        if (s[i]=='\n') break;
        if (s[i]) i++;
    }
    putchar('\n');

    return 0;
}
