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

#include <iostream>
using namespace std;

class Point3D {
    int x, y, z;

public:
    Point3D(int a = 0, int b = 0, int c = 0) {
        x = a;
        y = b;
        z = c;
    }

    void show() {
        cout << "3차원 점의 좌표는 (" 
             << x << "," << y << "," << z << ")" << endl;
    }
};

int main() {
    Point3D p0;
    p0.show();

    Point3D p1(1);
    p1.show();

    Point3D p2(1, 2);
    p2.show();

    Point3D p3(1, 2, 3);
    p3.show();

    return 0;
}




