#include <stdio.h>
#define size 5

int main(void) {
	int num[size][size];
	int sum = 0;
	int i;
	int j;

	printf("���� 25���� �Է��ϼ��� >> ");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
		scanf_s("%d", &num[i][j]);
	}
}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			sum += num[i][j];
		}

	}
	printf("�հ� = %d\n", sum);
	printf("��� = %d\n", sum / (size*size));
	return 0;
} 