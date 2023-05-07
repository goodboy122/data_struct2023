#include <stdio.h>
#define SIZE 5

int main(void) {

	int arr[SIZE];
	printf("정수 5개를 입력 >>");
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	printf("입력한 정수 >> ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int* ip = &arr[0];
	printf("배열 : ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", *ip);
	}
	printf("\n");

	ip = &arr[SIZE - 1];
	printf("역순 : ");
	for (int i = 0; i < SIZE; i++, ip--) {
		printf("%d ", *ip);
	}
	printf("\n");

	return 0;
}