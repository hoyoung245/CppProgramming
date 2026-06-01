// **********************************************
// 제 목 : C++7장-2
// 날 짜 : 2026년 6월 01일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제1 **********************************************
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex operator+(Complex op2);

    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

Complex Complex::operator+(Complex op2) {
    Complex tmp;
    tmp.real = real + op2.real;
    tmp.img = img + op2.img;
    return tmp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = x + y;

    cout << "두 복소수의 합은 ";
    sum.show();

    return 0;
}

// 실습과제2 **********************************************
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex operator*(Complex op2);

    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

Complex Complex::operator*(Complex op2) {
    Complex tmp;

    tmp.real = real * op2.real - img * op2.img;
    tmp.img = real * op2.img + img * op2.real;

    return tmp;
}

int main() {
    Complex x(2, 3), y(-5, 10), sum;

    sum = x * y;

    cout << "두 복소수의 곱은 ";
    sum.show();

    return 0;
}

// 실습과제3 **********************************************
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex& operator+=(Complex op2);

    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

Complex& Complex::operator+=(Complex op2) {
    real += op2.real;
    img += op2.img;

    return *this;
}

int main() {
    Complex a(3, 5), b(1, 1);

    a.show();
    b.show();

    b += a;

    a.show();
    b.show();

    return 0;
}

// 실습과제4 **********************************************
#include <iostream>
using namespace std;

class Complex {
    int real;
    int img;

public:
    Complex(int real = 0, int img = 0) {
        this->real = real;
        this->img = img;
    }

    Complex operator-(int op2);

    void show() {
        cout << real << "+" << img << "j" << endl;
    }
};

Complex Complex::operator-(int op2) {
    Complex tmp;

    tmp.real = real - op2;
    tmp.img = img - op2;

    return tmp;
}

int main() {
    Complex a(3, 5), b;

    a.show();
    b.show();

    b = a - 2;

    a.show();
    b.show();

    return 0;
}
