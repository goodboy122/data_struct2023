#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int number_space(char str[], int length) {
	int count_space = 0;
	for (int i = 0; i < length; i++) {
		if (isspace(str[i])) {
			count_space++;
		}
	}
	return count_space;
}

void case_convert(char str[], int length) {
	for (int i = 0; i < length; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
		else if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
}

int main(void) {
	char str[256] = "";
	int length = 0;

	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	length = strlen(str);
	printf("���� ������ ���� = %d\n", number_space(str, length));

	printf("��ȯ �� : %s\n", str);
	case_convert(str, length);
	printf("��ȯ �� : ");
	puts(str);
	
	return 0;
}