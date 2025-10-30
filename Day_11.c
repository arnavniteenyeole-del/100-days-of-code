// Day 11

#include <stdio.h>
#include <math.h>

int main() {
    // Q21: Month name and days using switch-case
    printf("\n-- Q21 --\n");
    int m;
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    switch(m) {
        case 1: printf("January - 31 days\n"); break;
        case 2: printf("February - 28/29 days\n"); break;
        case 3: printf("March - 31 days\n"); break;
        case 4: printf("April - 30 days\n"); break;
        case 5: printf("May - 31 days\n"); break;
        case 6: printf("June - 30 days\n"); break;
        case 7: printf("July - 31 days\n"); break;
        case 8: printf("August - 31 days\n"); break;
        case 9: printf("September - 30 days\n"); break;
        case 10: printf("October - 31 days\n"); break;
        case 11: printf("November - 30 days\n"); break;
        case 12: printf("December - 31 days\n"); break;
        default: printf("Invalid month number\n");
    }

    // Q22: Profit or loss percentage
    printf("\n-- Q22 --\n");
    double cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);
    if (sp >= cp) {
        double profit = sp - cp;
        printf("Profit = %.2f (%.2f%%)\n", profit, (profit/cp)*100);
    } else {
        double loss = cp - sp;
        printf("Loss = %.2f (%.2f%%)\n", loss, (loss/cp)*100);
    }

    return 0;
}
