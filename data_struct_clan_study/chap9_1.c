#include <stdio.h>
#define SIZE 5

int main(void) {

	int arr[SIZE];
	printf("���� 5���� �Է� >>");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	printf("�Է��� ���� >> ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int* ip = &arr[0];
	printf("�迭 : ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *ip);
	}
	printf("\n");

	ip = &arr[SIZE - 1];
	printf("���� : ");
	for (int i = 0; i < SIZE; i++, ip--) {
		printf("%d ", *ip);
	}
	printf("\n");

	return 0;
}