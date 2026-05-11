// **********************************************
// 제 목 : C++5장-3
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
#include <string>

using namespace std;

void Uppercase(string& s);

int main() {
    string s1("hello");

    cout << "변환전 문자열 " << s1 << endl;

    Uppercase(s1);

    cout << "변환후 문자열 " << s1 << endl;

    return 0;
}

void Uppercase(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}
// 실습과제3 **********************************************
#include <iostream>
#include <string>

using namespace std;

void SwapString(string& a, string& b);

int main() {
    string s1("hello");
    string s2("world");

    cout << "교환전 문자열 " << s1 << " " << s2 << endl;

    SwapString(s1, s2);

    cout << "교환후 문자열 " << s1 << " " << s2 << endl;

    return 0;
}

void SwapString(string& a, string& b) {
    string temp;

    temp = a;
    a = b;
    b = temp;
}

// 실습과제4 **********************************************

#include <iostream>

using namespace std;

class Circle {
    int radius;

public:
    Circle(int radius) {
        this->radius = radius;
    }

    Circle& plus(int n) {
        radius += n;
        return *this;
    }

    Circle& minus(int n) {
        radius -= n;

        if (radius < 0)
            radius = 0;

        return *this;
    }

    int getRadius() {
        return radius;
    }
};

int main() {
    Circle a(5);

    a.plus(1).plus(2).plus(3)
        .minus(3).minus(2).minus(1).minus(5);

    cout << "객체 a의 반지름은 " << a.getRadius();

    return 0;
}

