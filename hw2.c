#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	double km, mi;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	mi = km / 1.609;
	printf("%.1lf km is equal to %.1lf miles. \n", km, mi);
	return 0;
}
