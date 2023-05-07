#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;

	printf("두 개의 정수를 입력하시오>>");
	scanf("%d %d", &a, &b);

	printf("큰 수는 %d\n", a > b ? a : b);
	return 0;
}