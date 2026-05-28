// **********************************************
// 제 목 : C++7장-1
// 날 짜 : 2026년 5월 28일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
        cout << "복소수 " << real << "+ " << img << "j 생성" << endl;
    }

    void show() {
        cout << real << "+" << img << "j" << endl;
    }

    friend Complex ComplexAdd(Complex x, Complex y);
};

Complex ComplexAdd(Complex x, Complex y) {
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = ComplexAdd(x, y);

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}
// 실습과제3 **********************************************

