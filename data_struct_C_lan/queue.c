#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0, rear = -1;

// ť�� ����ִ��� Ȯ���ϴ� �Լ�
int is_empty() {
    if (front > rear) {
        return 1;
    }
    else {
        return 0;
    }
}

// ť�� ���� �� �ִ��� Ȯ���ϴ� �Լ�
int is_full() {
    if (rear == MAX_SIZE - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

// ť�� ��Ҹ� �߰��ϴ� �Լ�
void enqueue(int x) {
    if (is_full()) {
        printf("Error: queue is full\n");
    }
    else {
        queue[++rear] = x;
    }
}

// ť���� ��Ҹ� �����ϰ� ��ȯ�ϴ� �Լ�
int dequeue() {
    if (is_empty()) {
        printf("Error: queue is empty\n");
        return -1;
    }
    else {
        return queue[front++];
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printf("%d\n", dequeue()); // 1
    printf("%d\n", dequeue()); // 2
    printf("%d\n", dequeue()); // 3
    printf("%d\n", dequeue()); // Error: queue is empty

    return 0;
}