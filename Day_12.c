// Day 12

#include <stdio.h>
#include <math.h>

int main() {
    // Q23: Library fine based on late days
    printf("\n-- Q23 --\n");
    int days;
    printf("Enter number of late days: ");
    scanf("%d", &days);
    if (days > 30) {
        printf("Membership Cancelled\n");
    } else {
        int fine = 0;
        if (days > 0) {
            int d = days;
            int take = d < 5 ? d : 5; fine += take * 2; d -= take;
            if (d > 0) { take = d < 5 ? d : 5; fine += take * 4; d -= take; }
            if (d > 0) { take = d < 20 ? d : 20; fine += take * 6; d -= take; }
        }
        printf("Fine = Rs %d\n", fine);
    }

    // Q24: Electricity bill based on units
    printf("\n-- Q24 --\n");
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    int u = units;
    double bill = 0;
    if (u > 300) { bill += (u-300)*12; u = 300; }
    if (u > 200) { bill += (u-200)*10; u = 200; }
    if (u > 100) { bill += (u-100)*7; u = 100; }
    if (u > 0) { bill += u*5; }
    printf("Electricity bill = Rs %.2f\n", bill);

    return 0;
}
