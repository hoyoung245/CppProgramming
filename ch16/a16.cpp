// **********************************************
// 제 목 : C++5장-4
// 날 짜 : 2026년 5월 13일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    int id;

public:
    Person(int id, string name);
    void changeName(string name);
    void show();
};

Person::Person(int id, string name) {
    this->id = id;
    this->name = name;
}

void Person::changeName(string name) {
    this->name = name;
}

void Person::show() {
    cout << id << ", " << name << endl;
}

int main() {
    Person father(1, "Kitae");
    Person daughter(father);

    cout << "daughter 객체 생성 직후 ----" << endl;
    father.show();
    daughter.show();

    daughter.changeName("Grace");

    cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
    father.show();
    daughter.show();

    return 0;
}


// 실습과제3 **********************************************

#include <iostream>
using namespace std;

class MyStack {
    int* p;
    int size;
    int tos;

public:
    MyStack() {
        size = 10;
        tos = 0;
        p = new int[size];
    }

    MyStack(int size) {
        this->size = size;
        tos = 0;
        p = new int[size];
    }

    MyStack(const MyStack& src) {
        this->size = src.size;
        this->tos = src.tos;

        p = new int[size];

        for (int i = 0; i < tos; i++) {
            p[i] = src.p[i];
        }
    }

    ~MyStack() {
        delete[] p;
    }

    bool push(int n) {
        if (tos == size)
            return false;

        p[tos] = n;
        tos++;

        return true;
    }

    bool pop(int& n) {
        if (tos == 0)
            return false;

        tos--;
        n = p[tos];

        return true;
    }
};

int main() {
    MyStack a(10);

    a.push(10);
    a.push(20);

    MyStack b = a;

    b.push(30);

    int n;

    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;

    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;

    return 0;
}

// 실습과제4 **********************************************
