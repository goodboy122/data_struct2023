#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// ������ ����ִ��� Ȯ���ϴ� �Լ�
int is_empty() {
    if (top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

// ������ ���� �� �ִ��� Ȯ���ϴ� �Լ�
int is_full() {
    if (top == MAX_SIZE - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

// ���ÿ� ��Ҹ� �߰��ϴ� �Լ�
void push(int x) {
    if (is_full()) {
        printf("Error: stack is full\n");
    }
    else {
        stack[++top] = x;
    }
}

// ���ÿ��� ��Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
int pop() {
    if (is_empty()) {
        printf("Error: stack is empty\n");
        return -1;
    }
    else {
        return stack[top--];
    }
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d\n", pop()); // 3
    printf("%d\n", pop()); // 2
    printf("%d\n", pop()); // 1
    printf("%d\n", pop()); // Error: stack is empty

    return 0;
}