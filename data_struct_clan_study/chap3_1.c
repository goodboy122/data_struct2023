#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;

	printf("�� ���� ������ �Է��Ͻÿ�>>");
	scanf("%d %d", &a, &b);

	printf("ū ���� %d\n", a > b ? a : b);
	return 0;
}