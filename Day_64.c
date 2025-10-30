// Day 64

#include <stdio.h>
#include <math.h>

int main() {
    // Q114: Length of longest substring without repeating characters (brute force)
    printf("\n-- Q114 --\n");
    char s[500]; printf("Enter string: \n"); scanf("%499[\n]", s);
    int nlen=0; while (s[nlen]) nlen++;
    int best=0;
    for (int i=0;i<nlen;i++){
        int seen[256]={0};
        int len=0;
        for (int j=i;j<nlen;j++){
            if (seen[(unsigned char)s[j]]) break;
            seen[(unsigned char)s[j]] = 1; len++;
        }
        if (len>best) best=len;
    }
    printf("Length = %d\n", best);

    return 0;
}
