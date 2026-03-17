// **********************************************
// 제 목 : C++3장-1
// 날 짜 : 2026년 3월17일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2
#include <iostream>
using namespace std;
class Triangle {
public:
	double s;
	double h;
	double getArea();
};
double Triangle::getArea() {
	return s * h * 0.5;
}
int main() {
	Triangle t;
	t.s = 3.0;
	t.h = 5.0;
	cout << "삼각형의 면적은 " << t.getArea();
	return 0;
}

// 실습과제3
#include <iostream>
using namespace std;
class Sphere {
public:
	double r;
	double getVolume();
	double getArea();
};
double Sphere::getVolume() {
	return (4.0 / 3.0) * 3.14 * r * r * r;
}
double Sphere::getArea() {
	return 4 * 3.14 * r * r;
}
int main() {
	Sphere s;
	s.r = 6.3;
	cout << "구의 부피는 " << s.getVolume() << endl;
	cout << "구의 표면적은 " << s.getArea();
	return 0;
}

// 실습과제4
#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int x ,x2;
	int y, y2;
	int getArea();
	int getPerimeter();
	void getXY();
};
int Rectangle::getArea() {
	return width * height;
}
int Rectangle::getPerimeter() {
	return 2 * (width + height);
}
void Rectangle::getXY() {
	x2 = x + width;
	y2 = y - height;
}
int main() {
	Rectangle r;
	r.x = 1;
	r.y = 2;
	r.width = 3;
	r.height = 4;

	cout << "사각형의 면적은 " << r.getArea() << endl;
	cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;

	r.getXY();
	cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
	return 0;
}

// 실습과제5
#include <iostream>
using namespace std;
class Rectangle {
public:
	int width;
	int height;
	int x, x2;
	int y, y2;
	int getArea();
	int getPerimeter();
	void getXY();
	void getRectinfo();
};
int Rectangle::getArea() {
	return width * height;
}
int Rectangle::getPerimeter() {
	return 2 * (width + height);
}
void Rectangle::getXY() {
	x2 = x + width;
	y2 = y - height;
}
void Rectangle::getRectinfo() {
	cout << "사각형의 좌측상단좌표(x,y): ";
	cin >> x >> y;
	cout << "사각형의 폭과 높이(width,height): ";
	cin >> width >> height;
}
int main() {
	Rectangle r;
	r.getRectinfo();

	cout << "사각형의 면적은 " << r.getArea() << endl;
	cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;

	r.getXY();
	cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
	return 0;
}
