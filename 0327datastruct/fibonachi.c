#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fibonachi(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonachi(n - 1) + fibonachi(n - 2);
	}
}
int main() {
	clock_t start,end;
	start = clock();
	fibonachi(40);
	end = clock();
	printf("시간 : %lf\n", (double)(end - start)/CLOCKS_PER_SEC);
	int size = sizeof(fibonachi(40));
	printf("공간 : %d\n", size);
}