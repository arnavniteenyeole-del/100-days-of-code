// Day 27

#include <stdio.h>
#include <math.h>

int main() {
    // Q53: Diamond-like star pattern
    printf("\n-- Q53 --\n");
    int n=5;
    for (int i=1;i<=n;i+=2){
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    for (int i=n-2;i>=1;i-=2){
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }

    // Q54: Pyramid star pattern
    printf("\n-- Q54 --\n");
    int rows=4;
    for (int i=0;i<rows;i++){
        for(int s=0;s<rows-i-1;s++) putchar(' ');
        for(int k=0;k<2*i+1;k++) putchar('*');
        putchar('\n');
    }
    for (int i=rows-2;i>=0;i--){
        for(int s=0;s<rows-i-1;s++) putchar(' ');
        for(int k=0;k<2*i+1;k++) putchar('*');
        putchar('\n');
    }

    return 0;
}
