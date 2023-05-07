//¹è¿­
#include<stdio.h>

int main() {
	

	int a[10];

	int i;
	float avg;

	avg = 0;

	//char c[7] = {'h', 'e', 'l', 'l','o','w', '\0'};

	char c[7] = "hellow";
	char b[] = "hellow";
	printf("\n %s\n", c);
	printf("\n %s\n", b);


	 

	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
	}

	for (i = 0; i < 10; i++) {
		printf("\n a[%d] = %d", i, a[i]);
	}

	for (i = 0; i < 10; i++) {
		avg = avg + a[i];
	}
	avg = avg / 10;
	printf("\ntotal is : %f\n", avg);

	return 0;
}