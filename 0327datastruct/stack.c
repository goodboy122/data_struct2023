/*#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct _node {
	int data;
	struct node* link;
}node;

typedef struct _stack {
	struct node* top;
}stack;

void push(stack* s, int data);
void pop(stack* s);
void print(stack* s);
void stackreset(stack* s);
void freestack(stack* s);

int main() {
	stack s;
	int data;
	int choose;
	stackreset(&s);
	while (1) {
		printf("-------------------\n");
		printf("1. push data\n");
		printf("2. pop stack\n");
		printf("3. print stack\n");
		printf("4. exit\n");
		printf("-------------------\n");
		printf(">>");
		scanf("%d", &choose);
		switch (choose) {
		case 1:
			printf("input data>>");
			scanf(" %d", &data);
			push(&s, data);
			break;
		case 2:
			pop(&s);
			break;
		case 3:
			printf("print stack\ntop\n");
			print(&s);
			printf("bottom\n");
			break;
		default:
			freestack(&s);
			return 0;
		}
	}
}
void stackreset(stack* s) {
	s->top = NULL;
}
void push(stack* s, int data) {
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->link = s->top;
	s->top = temp;
}
void pop(stack* s) {
	node* temp = s->top;
	if (temp->link == NULL) {
		printf("stack empty!");
	}
	else
	{
		printf("data : %d\n",temp->data);
		s->top = temp->link;
		free(temp);
	}
}
void print(stack* s) {
	for (node* p = s->top; p != NULL; p = p->link) {
		printf("%d\n", p->data);
	}
}
void freestack(stack* s) {
	node* temp=s->top;
	while (temp->link!=NULL)
	{
		temp = s->top;
		if (temp->link == NULL) {
			printf("stack empty!");
		}
		else
		{
			printf("data : %d\n", temp->data);
			s->top = temp->link;
			free(temp);
		}
	}
}*/
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct _node {
	int data;
	struct node* link;
}node;

typedef struct _queue {
	struct node* top;
	struct node* bot;
}queue;
void push(queue* s, int data);
void pop(queue* s);
void print(queue* s);
void queuereset(queue* s);
void freequeue(queue* s);
int main() {
	queue s;
	int data;
	int choose=0;
	queuereset(&s);
	while (choose!=4) {
		printf("-------------------\n");
		printf("1. push data\n");
		printf("2. pop data\n");
		printf("3. print queue\n");
		printf("4. exit\n");
		printf("-------------------\n");
		printf(">>");
		scanf("%d", &choose);
		switch (choose) {
		case 1:
			printf("input data>>");
			scanf(" %d", &data);
			push(&s, data);
			break;
		case 2:
			pop(&s);
			break;
		case 3:
			printf("print queue\nfirst\n");
			print(&s);
			printf("last\n");
			break;
		default:
			freequeue(&s);
			return 0;
		}
	}
}
void queuereset(queue* s) {
	s->top = NULL;
	s->bot = NULL;
}
void push(queue* s, int data) {
	node* temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->link = NULL;
	if (s->bot==NULL)//큐가 비어있을 때
	{
		s->top = s->bot = temp;//맨 앞을 now로 설정       
	}
	else//비어있지 않을 때
	{
		s->top->link = temp;
		//맨 뒤의 다음을 now로 설정
	}
}
void pop(queue* s) {
	node* temp = s->bot;
	if (temp->link == NULL) {
		printf("queue empty!");
	}
	else
	{
		printf("data : %d\n", temp->data);
		s->bot = temp->link;
		free(temp);
	}
}
void print(queue* s) {
	for (node* p = s->bot; p != NULL; p = p->link) {
		printf("%d\n", p->data);
	}
}
void freequeue(queue* s) {
	node* temp = s->bot;
	while (temp->link != NULL)
	{
		if (temp->link == NULL) {
			printf("queue empty!");
		}
		else
		{
			printf("data : %d\n", temp->data);
			s->bot = temp->link;
			free(temp);
		}
	}
}
