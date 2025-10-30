// Day 16

#include <stdio.h>
#include <math.h>

int main() {
    // Q31: Decimal to binary representation.
    printf("\n-- Q31 --\n");
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num==0) printf("0\n");
    else {
        char bin[65]; int idx=0;
        unsigned int t = (unsigned int)num;
        while (t>0){ bin[idx++] = (t%2) + '0'; t/=2; }
        bin[idx] = '\0';
        // reverse
        for (int i=idx-1;i>=0;i--) putchar(bin[i]);
        putchar('\n');
    }

    // Q32: Check palindrome number.
    printf("\n-- Q32 --\n");
    int num; printf("Enter integer: "); scanf("%d", &num);
    int t = abs(num), rev=0;
    while(t){ rev = rev*10 + t%10; t/=10; }
    if (rev == abs(num)) printf("Palindrome\n"); else printf("Not Palindrome\n");

    return 0;
}
