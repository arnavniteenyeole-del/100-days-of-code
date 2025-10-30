// Day 50

#include <stdio.h>
#include <math.h>

int main() {
    // Q99: Change date format from dd/04/yyyy to dd-Apr-yyyy.
    printf("\n-- Q99 --\n");
    char date[20]; printf("Enter date (dd/mm/yyyy): "); scanf("%19s", date);
    int d,m,y; sscanf(date, "%d/%d/%d", &d, &m, &y);
    const char* months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%04d\n", d, months[m-1], y);

    // Q100: Print all substrings of a string.
    printf("\n-- Q100 --\n");
    char s[200]; printf("Enter string: \n"); scanf("%199[\n]", s);
    int n = 0; while (s[n]) n++;
    for (int i=0;i<n;i++){ for (int len=1; i+len<=n; len++){ for (int k=i;k<i+len;k++) putchar(s[k]); putchar('\n'); } }

    return 0;
}
