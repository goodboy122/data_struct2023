#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("������ �Է��ϼ���>>");
	scanf("%d", &a);

	b = a / 10;
	switch (b) {
	case 10:
	case 9:
		printf("%d���� A�Դϴ�.", a);
		break;

	case 8:
		printf("%d���� B�Դϴ�.", a);
		break;

	case 7:
		printf("%d���� C�Դϴ�.", a);
		break;

	case 6:
		printf("%d���� D�Դϴ�.", a);
		break;

	default:
		printf("%d���� F�Դϴ�.", a);
		break;
	}
	return 0;
}