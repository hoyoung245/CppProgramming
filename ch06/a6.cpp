// **********************************************
// 제 목 : C++3장-2
// 날 짜 : 2026년 3월19일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;
class Triangle {
	double s, h;
public:
	Triangle();
	Triangle(double a, double b);
	double getArea() { return s * h * 0.5; }
};
Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(double a, double b) : s(a), h(b) {}

int main() {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}

// 실습과제3 **********************************************
#include <iostream>
using namespace std;
class Sphere {
	double radius;
public:
	Sphere();
	Sphere(double a);
	double getVolume();
};
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}
Sphere::Sphere() :Sphere(1.0) {}
Sphere::Sphere(double a) :radius(a) {}
int main() {
	Sphere sph1;
	cout << "구의 부피는" << sph1.getVolume() << endl;
	Sphere sph2(3);
	cout << "구의 부피는" << sph2.getVolume() << endl;
	return 0;
}

// 실습과제4 **********************************************
#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    int x, y;

    Rectangle();
    Rectangle(int x, int y);
    Rectangle(int x, int y, int w, int h);

    int getArea();
    int getPerimeter();
    void getRightBottom();
};
Rectangle::Rectangle(int x, int y, int w, int h)
    : x(x), y(y), width(w), height(h) {
}
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
int Rectangle::getArea() {
    return width * height;
}
int Rectangle::getPerimeter() {
    return 2 * (width + height);
}
void Rectangle::getRightBottom() {
    cout << "(" << x + width << ", " << y - height << ")" << endl;
}
int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3, 5, 2, 4);

    cout << "rect1의 면적은 " << rect1.getArea() << endl;
    cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;

    cout << "rect3의 우측하단 좌표는 ";
    rect3.getRightBottom();

    return 0;
}
