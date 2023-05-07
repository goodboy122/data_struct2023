#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fact(double n);

int main(void) {
	double n;
	printf("정수 입력 후 Enter >> ");
	scanf("%lf", &n);
	printf("1부터 %.f까지의 곱 = %.f\n", n, fact(n));
	return 0;
}

double fact(double n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
