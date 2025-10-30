// Day 20

#include <stdio.h>
#include <math.h>

int main() {
    // Q39: Product of odd digits of a number.
    printf("\n-- Q39 --\n");
    int n; printf("Enter integer: "); scanf("%d", &n);
    long long prod=1; int found=0; int t=abs(n);
    while(t){ int d = t%10; if (d%2==1){ prod*=d; found=1; } t/=10; }
    if (!found) printf("No odd digits\n"); else printf("Product of odd digits = %lld\n", prod);

    // Q40: 1's complement of a binary number (string)
    printf("\n-- Q40 --\n");
    char bin[129];
    printf("Enter binary number: ");
    scanf("%s", bin);
    for (int i=0; bin[i]; i++) {
        if (bin[i]=='0') putchar('1');
        else if (bin[i]=='1') putchar('0');
        else { putchar('\n'); printf("Invalid binary digit encountered\n"); break; }
    }
    putchar('\n');

    return 0;
}
