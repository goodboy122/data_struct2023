#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double principal = 0.0;
	double interest_rate = 0.0;
	int year = 0;

	printf("원금(KRW) = ");
	scanf("%lf", &principal);

	printf("연이자율(%%) = ");
	scanf("%lf", &interest_rate);

	printf("투자연수(년) = ");
	scanf("%d", &year);

	for (int i = 1; i <= year; i++) {
		double interest = principal * interest_rate / 100;
		principal = principal + interest;
		printf("%2d년째 이자 : %.2f, 원리 합계 : %.2f\n", i, interest, principal);
	}
	return 0;
}

