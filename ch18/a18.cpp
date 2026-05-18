// **********************************************
// 제 목 : C++6장-2
// 날 짜 : 2026년 5월 18일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    Rectangle(int w = 1, int h = 1) {
        width = w;
        height = h;
    }

    void show() {
        cout << "사각형 폭은 " << width
             << " 높이는 " << height << endl;
    }
};

int main() {
    Rectangle rect0;
    rect0.show();

    Rectangle rect1(10);
    rect1.show();

    Rectangle rect2(10, 20);
    rect2.show();

    return 0;
}
// 실습과제3 **********************************************

// 실습과제4 **********************************************



