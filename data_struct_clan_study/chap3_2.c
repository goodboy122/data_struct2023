#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int h, m, s;

	printf("시간, 분, 초를 차례대로 입력하시오(시간:분:초)>>");
	scanf("%d %d %d", &h, &m, &s);

	printf("입력한 %d시간, %d분, %d초의 초 환산은 %d입니다.", h, m, s, 3600 * h + 60 * m + s);

	return 0;
}
