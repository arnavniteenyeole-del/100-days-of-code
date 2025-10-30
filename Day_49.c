// Day 49

#include <stdio.h>
#include <math.h>

int main() {
    // Q97: Print initials of a name.
    printf("\n-- Q97 --\n");
    char name[200]; printf("Enter full name: \n"); scanf("%199[\n]", name);
    int i=0; if (name[0]){ printf("%c.", name[0]); }
    while (name[i]){ if (name[i]==' ' && name[i+1]) printf("%c.", name[i+1]); i++; }
    printf("\n");

    // Q98: Print initials with surname in full.
    printf("\n-- Q98 --\n");
    char name[200]; printf("Enter full name: \n"); scanf("%199[\n]", name);
    // assume last token is surname
    int len=0; while (name[len]) len++;
    int i=0;
    while (name[i] && name[i]!=' ') { printf("%c", name[i]); i++; }
    printf(" ");
    int lastStart=0; for (int j=0;j<len;j++) if (name[j]==' ' && name[j+1]) lastStart = j+1;
    for (int j=0;j<lastStart-1;j++) if (name[j]==' ' && name[j+1]) printf("%c.", name[j+1]);
    printf("%s\n", &name[lastStart]);

    return 0;
}
