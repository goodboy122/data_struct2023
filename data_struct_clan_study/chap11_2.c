#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person {
	char name[60];
	char sex[60];
	int age;
	int height;
	int weight;
};

int main(void) {

	struct person a, b;

	printf("a의 이름을 입력하세요 >> ");
	scanf("%s", a.name, sizeof(a.name));
	printf("성별을 입력하세요 >> ");
	scanf("%s", a.sex, sizeof(a.sex));
	printf("나이, 신장, 체중을 차례대로 입력하세요 >> ");
	scanf("%d %d %d", &a.age, &a.height, &a.weight);

	printf("\n");

	printf("b의 이름을 입력하세요 >> ");
	scanf("%s", b.name, sizeof(b.name));
	printf("성별을 입력하세요 >> ");
	scanf("%s", b.sex, sizeof(b.sex));
	printf("나이, 신장, 체중을 차례대로 입력하세요 >> ");
	scanf("%d %d %d", &b.age, &b.height, &b.weight);

	printf("\n");

	printf("이름\t나이\t성별\t신장\t체중\n");
	printf("%s\t%d\t%s\t%d\t%d\n", a.name, a.age, a.sex, a.height, a.weight);
	printf("%s\t%d\t%s\t%d\t%d\n", b.name, b.age, b.sex, b.height, b.weight);

	return 0;
}