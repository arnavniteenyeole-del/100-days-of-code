// Day 70

#include <stdio.h>
#include <math.h>

int main() {
    // Q120: Change string to sentence case (first letter uppercase rest lowercase)
    printf("\n-- Q120 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int i=0; while (s[i]){ if (i==0 && s[i]>='a'&&s[i]<='z') s[i]=s[i]-'a'+'A'; else if (i>0 && s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a'; i++; }
    printf("Result: %s\n", s);

    return 0;
}
