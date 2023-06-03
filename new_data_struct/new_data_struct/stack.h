#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Stack {
private:
	T* stack;//stack�迭 ����
	int size;//stack������ ����
	int top;//top ����

	bool is_empty() {//top�� -1�̸� true��ȯ
		if (this->top == -1) return true;
		else return false;
	}

	bool is_full() {
		if (this->top+1 == this->size) return true;//top�� size�� ������ �� ��ȯ
		else return false;
	}

public:
	Stack(int size) {//stack������ ���� �� ����
		top = -1;//top�� -1����
		stack = new T[size];//sizeũ���� stack�迭 ����
		this->size = size;// ��ü�� size�� �Ű����� size�� �� ����
	}

	void Push(T data) {
		if (is_full())//������ ���� �� ������ ���� ���� �ʰ� ����
			cout << "Stack is Full!!" << endl;
		else {
			this->top++;//top+1�� �� �� �� ��ġ�� ������ ����
			stack[this->top] = data;
		}
	}

	void Pop() {
		if (is_empty())//������ ��������� ����
			cout << "Stack is Empty!!" << endl;
		else {
			cout << stack[this->top] << endl;//������ top�� ��� �� ���� NULL�� ��ȯ �� top--
			stack[this->top] == NULL;
			this->top--;
		}
	}

	void Print_stack() {//���� ��ü ���
		cout << "top < ";
		for (int i = this->top; i >= 0; i--)//top���� ������ ���
			cout << stack[i] << " ";//
		cout << "> bottom" << endl;
	}

	void Show_size() {
		cout << "stack capacity : " << this->size << endl;//���� ���� ������ ���
		cout << "remaining capacity : " << (this->size) - (this->top + 1) << endl;//���� ���� �뷮 ���
	}

	void Stack_clear() {
		delete []stack;//���� ���� ����
		stack = nullptr;//stack�����͸� nullptr�� ����
	}
};