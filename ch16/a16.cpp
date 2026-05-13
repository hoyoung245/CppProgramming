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


// 실습과제4 **********************************************
