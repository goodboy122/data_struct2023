#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];

	int a;

	printf("ù��° �̸��� �Է��ϼ��� >>");
	scanf("%s", str1);
	printf("�ι�° �̸��� �Է��ϼ��� >>");
	scanf("%s", str2);

	a = strcmp(str1, str2);

	if (a < 0)
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", str1, str2);
	else if (a == 0)
		printf("%s�� %s�� �����ϴ�.\n", str1, str2);
	else
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", str1, str2);

}