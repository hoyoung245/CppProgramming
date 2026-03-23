#include <iostream>
using namespace std;
class Triangle {
public:
	double s, h;
	Triangle();
	Triangle(double a, double b);
	~Triangle();
	double getArea();
};

Triangle::Triangle() : Triangle(1, 1) {}
Triangle::Triangle(double a, double b) : s(a), h(b) {
	cout << "밑변" << s << " 높이" << h << "인 삼각형 생성" << endl;
}
Triangle::~Triangle() {
	cout << "밑변" << s << " 높이" << h << "인 삼각형 소멸" << endl;
}

double Triangle::getArea() {
	return s * h * 0.5;
}

int main() {
	Triangle tri1;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;

	Triangle tri2(2, 4);
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	return 0;
}
