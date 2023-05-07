#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 1, b = 1;
	char c = ' ';
	
	while (1) {
	printf("수식을 입력하세요 (0 0 0 입력시 종료) >>");
	scanf("%d %c %d", &a, &c, &b);
	
	if (a == 0 && b == 0 && c == '0')
		break;

		switch (c) {
			case '+':
				printf("%d + %d = %d\n", a, b, a + b);
				break;
			case '*':
				printf("%d * %d = %d\n", a, b, a * b);
				break;
			case '-':
				printf("%d - %d = %d\n", a, b, a - b);
				break;
			case '/':
				printf("%d / %d = %d\n", a, b, a / b);
				break;
		}
	}
	return 0;
}
