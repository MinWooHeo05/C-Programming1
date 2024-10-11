#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printBi(int num) {
    if (num > 1)
        printBi(num / 2);
    printf("%d", num % 2);
    return 0;
}

int main(void) {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("You should enter a positive number. try again. \n");
        main();
    }
    printBi(num);
    return 0;
}
