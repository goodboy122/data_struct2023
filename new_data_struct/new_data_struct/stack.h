#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Stack {
private:
	T* stack;//stack배열 생성
	int size;//stack사이즈 선언
	int top;//top 선언

	bool is_empty() {//top이 -1이면 true반환
		if (this->top == -1) return true;
		else return false;
	}

	bool is_full() {
		if (this->top+1 == this->size) return true;//top이 size와 같으면 참 반환
		else return false;
	}

public:
	Stack(int size) {//stack생성자 선언 및 정의
		top = -1;//top에 -1저장
		stack = new T[size];//size크기의 stack배열 생성
		this->size = size;// 객체의 size에 매개변수 size의 값 저장
	}

	void Push(T data) {
		if (is_full())//스택이 전부 차 있으면 값을 넣지 않고 종료
			cout << "Stack is Full!!" << endl;
		else {
			this->top++;//top+1을 한 뒤 그 위치에 데이터 저장
			stack[this->top] = data;
		}
	}

	void Pop() {
		if (is_empty())//스택이 비어있으면 종료
			cout << "Stack is Empty!!" << endl;
		else {
			cout << stack[this->top] << endl;//스택의 top값 출력 뒤 값을 NULL로 변환 후 top--
			stack[this->top] == NULL;
			this->top--;
		}
	}

	void Print_stack() {//스택 전체 출력
		cout << "top < ";
		for (int i = this->top; i >= 0; i--)//top부터 데이터 출력
			cout << stack[i] << " ";//
		cout << "> bottom" << endl;
	}

	void Show_size() {
		cout << "stack capacity : " << this->size << endl;//현재 스택 사이즈 출력
		cout << "remaining capacity : " << (this->size) - (this->top + 1) << endl;//남은 스택 용량 출력
	}

	void Stack_clear() {
		delete []stack;//스택 동적 해재
		stack = nullptr;//stack포인터를 nullptr로 보냄
	}
};