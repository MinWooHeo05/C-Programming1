#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			if (num == i) {
				printf("It is a prime number.");
					break;
			}
			else {
				printf("It is not a prime number.");
				break;
			}
		}
	}
	return 0;
}
