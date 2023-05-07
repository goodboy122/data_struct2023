#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80];
	char str2[80];

	int a;

	printf("첫번째 이름을 입력하세요 >>");
	scanf("%s", str1);
	printf("두번째 이름을 입력하세요 >>");
	scanf("%s", str2);

	a = strcmp(str1, str2);

	if (a < 0)
		printf("%s가 %s보다 앞에 있습니다.\n", str1, str2);
	else if (a == 0)
		printf("%s가 %s와 같습니다.\n", str1, str2);
	else
		printf("%s가 %s보다 뒤에 있습니다.\n", str1, str2);

}