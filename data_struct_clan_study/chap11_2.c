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

	printf("a�� �̸��� �Է��ϼ��� >> ");
	scanf("%s", a.name, sizeof(a.name));
	printf("������ �Է��ϼ��� >> ");
	scanf("%s", a.sex, sizeof(a.sex));
	printf("����, ����, ü���� ���ʴ�� �Է��ϼ��� >> ");
	scanf("%d %d %d", &a.age, &a.height, &a.weight);

	printf("\n");

	printf("b�� �̸��� �Է��ϼ��� >> ");
	scanf("%s", b.name, sizeof(b.name));
	printf("������ �Է��ϼ��� >> ");
	scanf("%s", b.sex, sizeof(b.sex));
	printf("����, ����, ü���� ���ʴ�� �Է��ϼ��� >> ");
	scanf("%d %d %d", &b.age, &b.height, &b.weight);

	printf("\n");

	printf("�̸�\t����\t����\t����\tü��\n");
	printf("%s\t%d\t%s\t%d\t%d\n", a.name, a.age, a.sex, a.height, a.weight);
	printf("%s\t%d\t%s\t%d\t%d\n", b.name, b.age, b.sex, b.height, b.weight);

	return 0;
}