// **********************************************
// 제 목 : C++ 4장
// 날 짜 : 2026년 4월 1일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;

class Triangle {
    int width;
    int height;
public:
    Triangle() {
        width = 1;
        height = 1;
    }

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

    double getArea() {
        return width * height / 2.0;
    }
};

int main() {
    Triangle tri;
    Triangle* p = &tri;

    p->setWidth(3);
    p->setHeight(5);

    cout << "삼각형의 면적은 " << p->getArea() << endl;

    return 0;
}

// 실습과제3 **********************************************

#include <iostream>
using namespace std;

class Triangle {
    int width, height;
public:
    Triangle() {
        this->width = 1;
        this->height = 1;
    }
    Triangle(int w) {
        this->width = w;
        this->height = 1;
    }
    Triangle(int w, int h) {
        this->width = w;
        this->height = h;
    }

    double getArea() {
        return this->width * this->height / 2.0;
    }
};

int main() {
    Triangle tri1;
    cout << "삼각형의 면적은 " << tri1.getArea() << endl;

    Triangle tri2(10);
    cout << "삼각형의 면적은 " << tri2.getArea() << endl;

    Triangle tri3(10, 2);
    cout << "삼각형의 면적은 " << tri3.getArea() << endl;

    return 0;
}

// 실습과제4 **********************************************

#include <iostream>
using namespace std;

class Triangle {
    int width, height;
public:
    Triangle(int w = 1, int h = 1) {
        width = w;
        height = h;
        cout << "밑변" << w << ",높이" << h << "인 삼각형 생성" << endl;
    }

    ~Triangle() {
        cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    double getArea() {
        return width * height / 2.0;
    }
};

int main() {
    Triangle arr[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };

    for(int i=0; i<3; i++) {
        cout << "삼각형" << i << "의 면적은 " << arr[i].getArea() << endl;
    }

    return 0;
}
// 실습과제5 **********************************************

#include <iostream>
using namespace std;

class Triangle {
    int width, height;
public:
    Triangle(int w = 1, int h = 1) {
        width = w;
        height = h;
    }

    double getArea() {
        return width * height / 2.0;
    }
};

int main() {
    Triangle arr[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };

    Triangle* p = arr;

    for(int i=0; i<3; i++) {
        cout << "삼각형" << i << "의 면적은 " << (p+i)->getArea() << endl;
    }

    return 0;
}
