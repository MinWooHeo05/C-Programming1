#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct City {
    char Name[30];
    char Country[30];
    int Population;
};

int main() {
    struct City City[3];

    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name> ");
        scanf("%s", City[i].Name);
        printf("Country> ");
        scanf("%s", City[i].Country);
        printf("Population> ");
        scanf("%d", &City[i].Population);
    }

    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; i++)
        printf("%d. %s in %s with a population of %d people\n", i + 1, City[i].Name, City[i].Country, City[i].Population);

    return 0;
}
