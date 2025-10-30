// Day 37

#include <stdio.h>
#include <math.h>

int main() {
    // Q73: Sum of each row and store in array.
    printf("\n-- Q73 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int mat[50][50]; int rowsum[50]={0};
    for (int i=0;i<r;i++){ for (int j=0;j<c;j++){ scanf("%d", &mat[i][j]); rowsum[i]+=mat[i][j]; } }
    for (int i=0;i<r;i++) printf("Sum of row %d = %d\n", i, rowsum[i]);

    // Q74: Transpose of a matrix.
    printf("\n-- Q74 --\n");
    int r,c; printf("Enter rows and cols: "); scanf("%d %d", &r, &c);
    int mat[50][50];
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) scanf("%d", &mat[i][j]);
    printf("Transpose:\n");
    for (int j=0;j<c;j++){ for (int i=0;i<r;i++) printf("%d ", mat[i][j]); printf("\n"); }

    return 0;
}
