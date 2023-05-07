#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = 0, rear = -1;

// 큐가 비어있는지 확인하는 함수
int is_empty() {
    if (front > rear) {
        return 1;
    }
    else {
        return 0;
    }
}

// 큐가 가득 차 있는지 확인하는 함수
int is_full() {
    if (rear == MAX_SIZE - 1) {
        return 1;
    }
    else {
        return 0;
    }
}

// 큐에 요소를 추가하는 함수
void enqueue(int x) {
    if (is_full()) {
        printf("Error: queue is full\n");
    }
    else {
        queue[++rear] = x;
    }
}

// 큐에서 요소를 제거하고 반환하는 함수
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