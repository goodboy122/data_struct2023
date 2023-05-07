#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetFactorial(int n);
double Add(double x, double y);

int main(void) {
	int (*pGetFactorial)(int n) = &GetFactorial;
	double (*pAdd)(double, double) = Add;

	int num;
	printf("정수를 입력하세요 >>");
	scanf("%d", &num);

	printf("%d! = %d\n", num, (*pGetFactorial)(num));
	printf("0.5 + 1.3 = %f\n", pAdd(0.5, 1.3));

	return 0;
}

int GetFactorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) { fact *= i; }
	return fact;
}

double Add(double x, double y) { return x + y; }