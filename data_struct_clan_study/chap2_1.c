#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	int i;
	
	printf("��ASCII �ڵ� ǥ(10����, 16����, 8����, ����)��\n");
	
	printf("���� �빮�� A(65) ���� Z(90)����\n");
	for (i = 65; i <= 90; i++)
		printf("%d, %X, %o, %c\n", i, i, i, i);

	printf("���� �ҹ��� a(97) ���� z(122)����\n");
	for (i = 97; i <= 122; i++)
		printf("%d, %X, %o, %c\n", i, i, i, i);

	return 0;
}