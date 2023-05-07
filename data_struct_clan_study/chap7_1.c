#include <stdio.h>
#define size 5

int main(void) {
	int num[size][size];
	int sum = 0;
	int i;
	int j;

	printf("정수 25개를 입력하세요 >> ");
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
	printf("합계 = %d\n", sum);
	printf("평균 = %d\n", sum / (size*size));
	return 0;
} 