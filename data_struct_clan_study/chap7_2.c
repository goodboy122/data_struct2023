#include <stdio.h>
#define size 3

int main(void) {
	int num[size][size];
	int one[size * size];
	int index;
	int i;
	int j;

	printf("���� 9���� �Է��ϼ��� >>");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf_s("%d", &num[i][j]);
		}
	}

	printf("2���� �迭\n");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			index = i * size + j;
			one[index] = num[i][j];
		}
	}

	printf("1���� �迭 ���� ��\n ");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			index = i * size + j;
			printf("%d ", one[index]);
		}
	}
	printf("\n");

	return 0;
}
