// **********************************************
// 제 목 : C++3장-1
// 날 짜 : 2026년 3월12일
// 작성자 : 2301417 석호영
// **********************************************
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
