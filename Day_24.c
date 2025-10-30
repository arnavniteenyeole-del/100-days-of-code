// Day 24

#include <stdio.h>
#include <math.h>

int main() {
    // Q47: Right-angled triangle increasing
    printf("\n-- Q47 --\n");
    for (int i=1;i<=5;i++){ for(int j=0;j<i;j++) putchar('*'); putchar('\n'); }

    // Q48: Print numeric triangle 1..n per row
    printf("\n-- Q48 --\n");
    for (int i=1;i<=5;i++){ for(int j=1;j<=i;j++) printf("%d", j); putchar('\n'); }

    return 0;
}
