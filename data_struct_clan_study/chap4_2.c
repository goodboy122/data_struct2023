#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;

	printf("점수를 입력하세요>>");
	scanf("%d", &a);


	if (90 <= a) {
		printf("%d점은 A입니다\n", a);
		printf("시험 합격! 축하드립니다.");
	}

	else if (80 <=a ) {
		printf("%d점은 B입니다\n", a);
		printf("시험 합격! 축하드립니다.");
	}

	else if (70 <= a) {
		printf("%d점은 C입니다\n", a);
		printf("시험 합격! 축하드립니다.");
	}

	else if (60 <= a) {
		printf("%d점은 D입니다\n", a);
		printf("시험 합격! 축하드립니다.");
	}

	else if (a < 60) {
		printf("%d점은 F입니다\n", a);
		printf("시험 불합격, 다음 기회에. . .");
	}

	return 0;
}