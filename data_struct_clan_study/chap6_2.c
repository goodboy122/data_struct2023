#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));

	int random = 0; 

	for (int i = 0; i < 3; i++) { 

		random = rand() % 10 + 1; 

		printf("%d\n", random); 

	}
}