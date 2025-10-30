// Day 36

#include <stdio.h>
#include <math.h>

int main() {
    // Q71: Read and print matrix.
    printf("\n-- Q71 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int mat[50][50];
    printf("Enter elements:\n");
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &mat[i][j]);
    printf("Matrix:\n");
    for (int i=0;i<r;i++){ for (int j=0;j<c;j++) printf("%d ", mat[i][j]); printf("\n"); }

    // Q72: Sum of all elements in matrix.
    printf("\n-- Q72 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int mat[50][50]; long sum=0;
    for (int i=0;i<r;i++) for (int j=0;j<c;j++){ scanf("%d", &mat[i][j]); sum += mat[i][j]; }
    printf("Sum of all elements = %ld\n", sum);

    return 0;
}
