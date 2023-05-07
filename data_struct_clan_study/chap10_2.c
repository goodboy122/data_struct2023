#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void PrintArray(int* arr, int size);
int GetProductOfArrary(int* arr, int size);

int main(void) {

	int x[5] = { 1,2,3,4,5 };

	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("합계 : %d\n\n", GetProductOfArrary(x, 5));

	return 0;
}

void PrintArray(int* arr, int size){
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}

int GetProductOfArrary(int* arr, int size) {
	int i;
	int total;
	for (i = 0, total = 1; i < size; i++)
		total *= arr[i];
	return total;
}