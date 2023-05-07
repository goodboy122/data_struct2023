#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	printf("성적을 입력하세요>>");
	scanf("%d", &a);

	b = a / 10;
	switch (b) {
	case 10:
	case 9:
		printf("%d점은 A입니다.", a);
		break;

	case 8:
		printf("%d점은 B입니다.", a);
		break;

	case 7:
		printf("%d점은 C입니다.", a);
		break;

	case 6:
		printf("%d점은 D입니다.", a);
		break;

	default:
		printf("%d점은 F입니다.", a);
		break;
	}
	return 0;
}