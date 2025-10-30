// Day 13

#include <stdio.h>
#include <math.h>

int main() {
    // Q25: Basic calculator using switch-case (+ - * / %)
    printf("\n-- Q25 --\n");
    int a,b;
    char op;
    printf("Enter expression (a op b) e.g. 3 + 4: ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': if (b!=0) printf("%d\n", a / b); else printf("Division by zero\n"); break;
        case '%': if (b!=0) printf("%d\n", a % b); else printf("Division by zero\n"); break;
        default: printf("Invalid operator\n");
    }

    // Q26: Print numbers from 1 to n.
    printf("\n-- Q26 --\n");
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++) printf("%d ", i);
    printf("\n");

    return 0;
}
