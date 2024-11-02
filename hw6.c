#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
		int arr[5], odd[5] = { 0 }, even[5] = { 0 };
		int i;
		int j = 0, k = 0;
		printf("Please input five integers: ");
		scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
		for (i = 0; i < 5; i++) {
			if (arr[i] % 2 == 0) {
				even[j] = arr[i]; j++;
			}
			else {
				odd[k] = arr[i]; k++;
			}
		}
		printf("Odd numbers: ");
		for (i = 0; i < k; i++) {
			printf("%d ", odd[i]);
		}
		printf("\n");
		printf("Even numbers: ");
		for (i = 0; i < j; i++) {
			printf("%d ", even[i]);
		}
		printf("\n"); return 0;
	}
