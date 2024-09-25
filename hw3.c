#include <stdio.h>

int main(void) {
	int row, blk, sta; //열 개수(row), 공백 반복횟수(blk), 별 반복횟수(sta) 인스턴스

	for (row = 0; row < 5; row++) {
		for (blk = 0; blk < 5 - row; blk++) {
			printf(" ");
		}
		for (sta = 0; sta < row * 2 + 1; sta++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
