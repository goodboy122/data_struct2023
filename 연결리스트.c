#include <stdio.h>
#include <stdlib.h>

// ���� ����Ʈ ��� ��ü
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// ���� ����Ʈ�� �� �߰�
void insert(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// ���� ����Ʈ���� �� �˻�
int search(Node* head, int data) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == data) {
            return 1; // ���� ������
        }
        current = current->next;
    }
    return 0; // ���� �������� ����
}

// ���� ����Ʈ���� �� ����
void removeNode(Node** head, int data) {
    Node* current = *head;
    Node* prev = NULL;

    while (current != NULL) {
        if (current->data == data) {
            if (prev == NULL) {
                *head = current->next;
            }
            else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

// ���� ����Ʈ ���
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// ���� ����Ʈ �޸� ����
void freeList(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head = NULL;
}

int main() {
    Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);

    printf("List: ");
    printList(head);

    int searchData = 2;
    int searchResult = search(head, searchData);
    if (searchResult) {
        printf("%d exists in the list\n", searchData);
    }
    else {
        printf("%d does not exist in the list\n", searchData);
    }

    int removeData = 2;
    removeNode(&head, removeData);
    printf("List after removing %d: ", removeData);
    printList(head);

    freeList(&head);

    return 0;
}