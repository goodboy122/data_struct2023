#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;

	printf("������ �Է��ϼ���>>");
	scanf("%d", &a);


	if (90 <= a) {
		printf("%d���� A�Դϴ�\n", a);
		printf("���� �հ�! ���ϵ帳�ϴ�.");
	}

	else if (80 <=a ) {
		printf("%d���� B�Դϴ�\n", a);
		printf("���� �հ�! ���ϵ帳�ϴ�.");
	}

	else if (70 <= a) {
		printf("%d���� C�Դϴ�\n", a);
		printf("���� �հ�! ���ϵ帳�ϴ�.");
	}

	else if (60 <= a) {
		printf("%d���� D�Դϴ�\n", a);
		printf("���� �հ�! ���ϵ帳�ϴ�.");
	}

	else if (a < 60) {
		printf("%d���� F�Դϴ�\n", a);
		printf("���� ���հ�, ���� ��ȸ��. . .");
	}

	return 0;
}