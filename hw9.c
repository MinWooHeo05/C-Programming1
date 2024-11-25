#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convStr(char str[]) {
    int i = 0;
    int dis = 32;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + dis;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - dis;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Input> ");
    fgets(str, sizeof(str), stdin);

    convStr(str);

    printf("Output> %s", str);

    return 0;
}
