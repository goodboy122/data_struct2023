#include <stdio.h>
#define SIZE 10

void print_array(const int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void get_min_max(const int* arr, int size, int* min, int* max) {
	*min = *max = arr[0];
	for (int i = 0; i < 10; i++) {
			if (arr[i] < *min)
				*min = arr[i];
			if (arr[i] > *max)
				*max = arr[i];
		}
}
	int main(void) {
		int arr[SIZE];
		printf("정수 10개를 입력하시오 : ");
		for (int i = 0; i < SIZE; i++) {
			scanf_s("%d", &arr[i]);
		}

		printf("배열 : ");
		print_array(arr, SIZE);

		int min, max;
		
		get_min_max(arr, SIZE, &min, &max);
	    printf("최대값 : %d\n최소값 : %d\n", max, min);

	return 0;
}