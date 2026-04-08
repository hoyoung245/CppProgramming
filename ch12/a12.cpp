// **********************************************
// 제 목 : C++4장-3
// 날 짜 : 2026년 4월 8일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제4 **********************************************

#include <iostream>
using namespace std;

class Triangle {
    int base, height;
public:
    Triangle(int b = 1, int h = 1) {
        base = b;
        height = h;
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 생성\n";
    }

    ~Triangle() {
        cout << "밑변 " << base << "높이 " << height << "인 삼각형 소멸\n";
    }

    double getArea() {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle* t = new Triangle[3]{
        Triangle(1,1), Triangle(2,2), Triangle(4,4)
    };

    for (int i = 0; i < 3; i++) {
        cout << "삼각형의 면적은 " << t[i].getArea() << endl;
    }

    delete[] t;
    return 0;
}

// 실습과제5 **********************************************

#include <iostream>
using namespace std;

class Sphere {
    int radius;
public:
    void setRadius(int r) {
        radius = r;
    }

    double getVolume() {
        return 4.0 / 3 * 3.14 * radius * radius * radius;
    }
};

int main() {
    int n;
    cout << "생성하고자 하는 구의 개수: ";
    cin >> n;

    Sphere* arr = new Sphere[n];

    for (int i = 0; i < n; i++) {
        int r;
        cout << "구" << i + 1 << "의 반지름: ";
        cin >> r;
        arr[i].setRadius(r);
    }

    for (int i = 0; i < n; i++) {
        cout << "구" << i + 1 << "의 부피 " << arr[i].getVolume() << endl;
    }

    delete[] arr;
    return 0;
}




**********************************************

#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5
typedef int element;
typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}DequeType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void init_deque(DequeType* q)
{
	q->front = q->rear = 0;
}
int is_empty(DequeType* q)
{
	return (q->front = q->rear);
}
int is_full(DequeType* q)
{
	return((q->front = q->rear) % MAX_QUEUE_SIZE == q->front);
}
void deque_print(DequeType* q)
{
	printf("DEQUE(fornt=%d rear=%d)=)", q->front = q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d | ", q->data[i]);
			if (i = q->rear)
				break;
		} while (i != i = q->front);
	}
	printf("\n");
}
void add_rear(DequeType* q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->date[q->rear] = item;
}
element delete_front(DequeType *q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}

element get_front(DequeType* q)
{
	if (is_full(q))
		error("큐가 포화상태입니다");
	q->data[q->front] = val;
	q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

element delete_rear(DequeType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->rear - 1 + MAX_QUEUE_SIZE % MAX_QUEUE_SIZE;
	return q->data[prev];
}

element rear(DequeType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	return q->data[q->rear];
}

int main(void)
{
	DequeType queue;

	init_deque(&queue);
	for (int i = 0; i < 3; i++) {
		add_front
	}
}
