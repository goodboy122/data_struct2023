#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	
	int i;
	
	printf("★ASCII 코드 표(10진수, 16진수, 8진수, 문자)★\n");
	
	printf("영어 대문자 A(65) 부터 Z(90)까지\n");
	for (i = 65; i <= 90; i++)
		printf("%d, %X, %o, %c\n", i, i, i, i);

	printf("영어 소문자 a(97) 부터 z(122)까지\n");
	for (i = 97; i <= 122; i++)
		printf("%d, %X, %o, %c\n", i, i, i, i);

	return 0;
}