#include <iostream>
#include <string>
using namespace std;
template <typename T>
class Queue {
private:
	int size;//큐 사이즈
	T* queue;//큐 배열 선언
	int head;//큐의 입구
	int tail;//큐의 출구
	int count;//현재 데이터 양
	bool is_full() {//큐가 차 있는지 확인
		if (count==size)//큐가 가득 차 있으면 참 반환
			return true;
		return false;
	}
	bool is_empty() {//큐가 비어있는지 확인
		if (count==0)//만약 카운트가 0이면 참
			return true;
		return false;
	}
public:
	Queue(int size) {//큐 생성자 선언 및 정의
		this->size=size;//사이즈 저장
		head = tail = 0;//head와 tail을 0으로 초기화
		int count = 0;//count도 0으로 초기화
		queue = new T[size];//queue배열 size만큼 동적 생성
		for (int i = 0; i < size; i++)//queue배열을 NULL로 초기화
			queue[i] = NULL;
	}

	void Push(T data) {//데이터를 queue에 삽입
		if (is_full())//큐가 가득 차 있으면 데이터 삽입하지 않고 종료
			cout << "Queue is Full!!" <<endl;
		
		else {
			queue[head] = data;//현재 head의 위치에 입력된 데이터 저장
			this->head = (++this->head) % size;//head를 한칸 옮김
			count++;//count를 1더함
		}
	}

	void Pop() {//데이터를 queue에서 방출
		if (is_empty())//큐가 비어있으면 종료
			cout << "Queue is Empty!!" << endl;
		
		else {
			cout << queue[this->tail] << endl;//현재 tail에서의 데이터 출력
			queue[tail] = NULL;//tail위치의 값을 NULL로 변환
			this->tail = (++this->tail) % size;//tail을 한 칸 옮김
			count--;//count에 1을 뺀다
		}
	}

	void Print_queue() {
		cout << "tail < ";
		if (is_full() | is_empty()) {//큐가 비거나 꽉 찬 경우
			for (int i = 0; i < size; i++)//size만큼 출력
				cout << queue[(tail + i) % size] << " ";
		}

		else {
			//cout << "not full or empty";
			for (int j = 0; j < count;j++) {//tai부터 count만큼 queue의 데이터 출력
				cout << queue[(this->tail+j)%size] << " ";
			}
		}
		cout << "> head" << endl;
	}

	void Show_size() {
		cout << "queue capacity : " << this->size << endl;//queue의 전체 용량 출력
		cout << "remaining capacity : " << size-count << endl;//queue의 남은 용량 출력
	}

	void Queue_clear() {
		delete []queue;//queue배열 동적 해재
		queue = nullptr;//queue 포인터를 nullptr로 보냄
	}
};