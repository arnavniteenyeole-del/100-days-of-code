// Day 26

#include <stdio.h>
#include <math.h>

int main() {
    // Q51: Right-aligned numeric triangle
    printf("\n-- Q51 --\n");
    for (int i=1;i<=5;i++){ for(int s=0;s<5-i;s++) putchar(' '); for(int k=i;k>=1;k--); for(int j=6-i;j<=5;j++) printf("%d", j); putchar('\n'); }

    // Q52: Complex pattern (as lines of single stars groups)
    printf("\n-- Q52 --\n");
    printf("*\n\n*\n*\n\n*\n*\n*\n*\n*\n\n*\n*\n\n*\n");

    return 0;
}
