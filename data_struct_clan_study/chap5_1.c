#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double principal = 0.0;
	double interest_rate = 0.0;
	int year = 0;

	printf("����(KRW) = ");
	scanf("%lf", &principal);

	printf("��������(%%) = ");
	scanf("%lf", &interest_rate);

	printf("���ڿ���(��) = ");
	scanf("%d", &year);

	for (int i = 1; i <= year; i++) {
		double interest = principal * interest_rate / 100;
		principal = principal + interest;
		printf("%2d��° ���� : %.2f, ���� �հ� : %.2f\n", i, interest, principal);
	}
	return 0;
}

