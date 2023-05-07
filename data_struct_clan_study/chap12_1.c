#include <stdio.h>

int main(void) {
	int a = 10, b = 20, c = 30, d = 40, e = 50;

	int* arr[5] = { &a, &b, &c, &d, &e };

	for (int i = 0; i <  5; i++) {
		printf("%d\n", *arr[i]);
	}
	printf("\n");

	for (int i = 0; i < 5 ; i++) {
		printf("%p\n", arr[i]);
	}
	printf("\n");

	return 0;
}