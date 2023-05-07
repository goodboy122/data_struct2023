#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person {
	char n[20];
	char s[10];
	int a;
	int h;
	int w;
};

int main(void) {
	struct person x;
	struct person y = { "홍길동", "남자", 20, 180,70 };

	strcpy_s(x.n, sizeof(x.n), "박영희");
	strcpy_s(x.s, sizeof(x.s), "여자");
	x.a = 24;
	x.h = 160;
	x.w = 50;

	printf("이름 : %s(나이 : %d, 성별 : %s, 신장/체중 : %d/%d)\n", x.n, x.a, x.s, x.h, x.w);

	printf("이름 : %s(나이 : %d, 성별 : %s, 신장/체중 : %d/%d)\n", y.n, y.a, y.s, y.h, y.w);

	return 0;
}