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
// 실습과제4 **********************************************

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
