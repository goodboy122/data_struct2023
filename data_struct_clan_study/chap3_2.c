#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int h, m, s;

	printf("�ð�, ��, �ʸ� ���ʴ�� �Է��Ͻÿ�(�ð�:��:��)>>");
	scanf("%d %d %d", &h, &m, &s);

	printf("�Է��� %d�ð�, %d��, %d���� �� ȯ���� %d�Դϴ�.", h, m, s, 3600 * h + 60 * m + s);

	return 0;
}
