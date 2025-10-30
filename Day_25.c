// Day 25

#include <stdio.h>
#include <math.h>

int main() {
    // Q49: Pattern 5,45,345,2345,12345
    printf("\n-- Q49 --\n");
    for (int start=5; start>=1; start--){ for (int k=start;k<=5;k++) printf("%d", k); putchar('\n'); }

    // Q50: Inverted right triangle with increasing spaces
    printf("\n-- Q50 --\n");
    for (int i=0;i<5;i++){ for(int s=0;s<i;s++) putchar(' '); for(int j=5;j>i;j--) putchar('*'); putchar('\n'); }

    return 0;
}
