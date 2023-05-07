#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int GetFactorial(int n);

int main(void) {

	int x;
	printf("양의 정수를 입력하세요>>");
	scanf("%d", &x);

	while (x < 0) {
		printf("양의 정수를 입력하세요>>");
		scanf("%d", &x);
	}

	printf("%d! = %d\n", x, GetFactorial(x));

	return 0;
}

int GetFactorial(int n) {
	if (n == 0)
		return 1;
	else return n * GetFactorial(n - 1);
}