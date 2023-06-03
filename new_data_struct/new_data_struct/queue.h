#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Queue {
private:
	int size;//ť ������
	T* queue;//ť �迭 ����
	int head;//ť�� �Ա�
	int tail;//ť�� �ⱸ
	int count;//���� ������ ��
	bool is_full() {//ť�� �� �ִ��� Ȯ��
		if (count==size)//ť�� ���� �� ������ �� ��ȯ
			return true;
		return false;
	}
	bool is_empty() {//ť�� ����ִ��� Ȯ��
		if (count==0)//���� ī��Ʈ�� 0�̸� ��
			return true;
		return false;
	}
public:
	Queue(int size) {//ť ������ ���� �� ����
		this->size=size;//������ ����
		head = tail = 0;//head�� tail�� 0���� �ʱ�ȭ
		int count = 0;//count�� 0���� �ʱ�ȭ
		queue = new T[size];//queue�迭 size��ŭ ���� ����
		for (int i = 0; i < size; i++)//queue�迭�� NULL�� �ʱ�ȭ
			queue[i] = NULL;
	}

	void Push(T data) {//�����͸� queue�� ����
		if (is_full())//ť�� ���� �� ������ ������ �������� �ʰ� ����
			cout << "Queue is Full!!" <<endl;
		
		else {
			queue[head] = data;//���� head�� ��ġ�� �Էµ� ������ ����
			this->head = (++this->head) % size;//head�� ��ĭ �ű�
			count++;//count�� 1����
		}
	}

	void Pop() {//�����͸� queue���� ����
		if (is_empty())//ť�� ��������� ����
			cout << "Queue is Empty!!" << endl;
		
		else {
			cout << queue[this->tail] << endl;//���� tail������ ������ ���
			queue[tail] = NULL;//tail��ġ�� ���� NULL�� ��ȯ
			this->tail = (++this->tail) % size;//tail�� �� ĭ �ű�
			count--;//count�� 1�� ����
		}
	}

	void Print_queue() {
		cout << "tail < ";
		if (is_full() | is_empty()) {//ť�� ��ų� �� �� ���
			for (int i = 0; i < size; i++)//size��ŭ ���
				cout << queue[(tail + i) % size] << " ";
		}

		else {
			//cout << "not full or empty";
			for (int j = 0; j < count;j++) {//tai���� count��ŭ queue�� ������ ���
				cout << queue[(this->tail+j)%size] << " ";
			}
		}
		cout << "> head" << endl;
	}

	void Show_size() {
		cout << "queue capacity : " << this->size << endl;//queue�� ��ü �뷮 ���
		cout << "remaining capacity : " << size-count << endl;//queue�� ���� �뷮 ���
	}

	void Queue_clear() {
		delete []queue;//queue�迭 ���� ����
		queue = nullptr;//queue �����͸� nullptr�� ����
	}
};