// **********************************************
// 제 목 : C++3장-3
// 날 짜 : 2026년 3월23일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

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

Triangle::Triangle(): Triangle(1,1) {}
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

// 실습과제3 **********************************************

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

Triangle tri1(4, 8);
Triangle tri2(2, 2);

int main() {
	cout << "삼각형의 면적은 " << tri2.getArea() << endl;
	cout << "삼각형의 면적은 " << tri1.getArea() << endl;
	return 0; 
}

// 실습과제4 **********************************************

#include <iostream>
using namespace std;
class Sphere {
public:
	double r;
	Sphere();
	Sphere(double a);
	~Sphere();
	double getVolume();
};
Sphere::Sphere(): Sphere(1) {}
Sphere::Sphere(double a): r(a) {
	cout << "반지름" << r << "인 구 생성" << endl;
}
Sphere::~Sphere(){
	cout << "반지름" << r << "인 구 소멸" << endl;
}
double Sphere::getVolume() {
	return (4.0) / (3.0) * 3.14 * r * r * r;
}
int main() {
	Sphere sph1; 
	cout << "구의 부피는 " << sph1.getVolume() << endl;
	Sphere sph2(3);
	cout << "구의 부피는 " << sph2.getVolume() << endl;

	return 0;
}

// 실습과제5 **********************************************

#include <iostream>
using namespace std;
class Sphere {
public:
	double r;
	Sphere();
	Sphere(double a);
	~Sphere();
	double getVolume();
};
Sphere::Sphere() : Sphere(1) {}
Sphere::Sphere(double a) : r(a) {
	cout << "반지름" << r << "인 구 생성" << endl;
}
Sphere::~Sphere() {
	cout << "반지름" << r << "인 구 소멸" << endl;
}
double Sphere::getVolume() {
	return (4.0) / (3.0) * 3.14 * r * r * r;
}
Sphere sph1(10);
Sphere sph2(20);
int main() {
	cout << "구의 부피는 " << sph1.getVolume() << endl;
	cout << "구의 부피는 " << sph2.getVolume() << endl;
	return 0;
}
