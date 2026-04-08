// **********************************************
// 제 목 : C++4장-3
// 날 짜 : 2026년 4월 8일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

// 실습과제3 **********************************************

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
