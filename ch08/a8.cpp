// **********************************************
// 제 목 : C++3장-4
// 날 짜 : 2026년 3월25일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	void setRadius(int r);
	int getRadius();
};
Circle::Circle() { radius = 1; }
void Circle::setRadius(int r) {
	if (r <= 0)
		cout << "반지름은 양수이어야 함!!";
	else radius = r;
}
int Circle::getRadius() {
	return radius;
}
int main() {
	Circle waffle;
	waffle.setRadius(5);
	cout << "원의 반지름은 " << waffle.getRadius() << endl;
}

// 실습과제3 **********************************************

#include <iostream>
using namespace std;
class Triangle {
private:
	double width, height;
public:
	Triangle();
	~Triangle();
	double getArea();
	void setWidth(double w);
	double getWidth();
	void setHeight(double h);
	double getHeight();
};

Triangle::Triangle() {
	width = 1;
	height = 1;
	cout << "폭" << width << " 높이" << height << " 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}
double Triangle::getArea() {
	return width * height * 0.5;
}
void Triangle::setWidth(double w) {
	if (w <= 0)
		cout << "폭은 양수이어야 함!!" << endl;
	else width = w;
}
double Triangle::getWidth() {
	return width;
}
void Triangle::setHeight(double h) {
	if (h <= 0)
		cout << "높이는 양수이어야 함!!" << endl;
	else height = h;
}
double Triangle::getHeight() {
	return height;
}
int main() {
	Triangle tri;
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 면적은 " << tri.getArea() << endl;
	return 0;
}

// 실습과제4 **********************************************

#include <iostream>

using namespace std;

class Triangle {
private:
	double width, height;

	double max(double a, double b);

public:
	Triangle(double w, double h);
	Triangle();
	~Triangle();

	double getWidth();
	double getHeight();
	double getArea();

	void setWidth(double w);
	void setHeight(double h);
};

double Triangle::max(double a, double b){
	return a > b ? a : b;
}

Triangle::Triangle(double w, double h) : width(max(1.0, w)), height(max(1.0, h)) {}

Triangle::Triangle() : Triangle(1, 1) {}

Triangle::~Triangle() {
	cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
}

double Triangle::getWidth() {
	return width;
}

double Triangle::getHeight() {
	return height;
}

double Triangle::getArea() {
	return width * height / 2;
}

void Triangle::setWidth(double w) {
	width = max(1.0, w);
}

void Triangle::setHeight(double h) {
	height = max(1.0, h);
}

int main(void) {
	Triangle tri(-10, -5);
	
	tri.setWidth(-3);
	tri.setHeight(-5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;
	
	tri.setWidth(3);
	tri.setHeight(5);
	cout << "삼각형의 폭은 " << tri.getWidth() << endl;
	cout << "삼각형의 높이는 " << tri.getHeight() << endl;
	cout << "삼각형의 넓이는 " << tri.getArea() << endl;

	return 0;
}
