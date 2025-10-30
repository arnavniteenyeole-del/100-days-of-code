// Day 30

#include <stdio.h>
#include <math.h>

int main() {
    // Q59: Count even and odd in array.
    printf("\n-- Q59 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int arr[100], even=0, odd=0;
    for (int i=0;i<n;i++){ scanf("%d", &arr[i]); if (arr[i]%2==0) even++; else odd++; }
    printf("Even = %d, Odd = %d\n", even, odd);

    // Q60: Count positive, negative, zero elements.
    printf("\n-- Q60 --\n");
    int n; printf("Enter number of elements: "); scanf("%d", &n);
    int pos=0, neg=0, zero=0, v;
    for (int i=0;i<n;i++){ scanf("%d", &v); if (v>0) pos++; else if (v<0) neg++; else zero++; }
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);

    return 0;
}
