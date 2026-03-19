# 실습과제 1

#  C++에서 생성자를 통하여 멤버변수의 초기화를 하는 이유를 설명하라.
객체 생성 시 멤버변수를 올바른 값으로 초기화하여 쓰레기값을 방지하고 안정성을 높이기 위해서이다. 또한 const와 참조형 변수는 생성자로만 초기화할 수 있다.
# 생성자 작성시 생성자 몸체에서 멤버를 초기화하는 것 보다 멤버 초기화 리스트에서 초기화하는 이유를 설명하라.
객체가 생성될 때 바로 초기화되어 불필요한 대입 과정이 줄어들고 더 효율적이기 때문이다.
# 위임, 타겟 생성자로 나누어 작성하는 이유를 설명하라
생성자 코드의 중복을 줄이고 관리와 유지보수를 쉽게 하기 위해서이다.
# 함수 몸체(body)에서 생성자를 직접 호출하면 어떻게 되는지 조사해보라
현재 객체가 초기화되는 것이 아니라 임시 객체가 생성되었다가 바로 사라진다.


# 실습과제 2

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 사용하기 위해 iostream 헤더파일을 포함한다.

```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout 등을 사용한다.

```
class Triangle
```
Triangle 클래스를 선언한다.

```
double s, h;
```
삼각형의 밑변과 높이를 저장하는 실수형 멤버 변수이다.

```
public:
```
외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Triangle();
```
매개변수가 없는 기본 생성자를 선언한다.

```
Triangle(double a, double b);
```
밑변과 높이를 받아 초기화하는 생성자를 선언한다.

```
double getArea() { return s * h * 0.5; }
```
삼각형의 면적을 계산하여 반환하는 멤버 함수이다.

```
Triangle::Triangle() : Triangle(1, 1) {}
```
기본 생성자이며, 다른 생성자를 호출하는 위임 생성자이다.

```
Triangle::Triangle(double a, double b) : s(a), h(b) {}
```
매개변수 a와 b를 이용해 s와 h를 초기화하는 생성자이다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Triangle tri1;
```
Triangle 객체 tri1을 생성한다.

```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
tri1의 면적을 계산하여 출력한다.

```
Triangle tri2(2, 4);
```
밑변이 2, 높이가 4인 Triangle 객체 tri2를 생성한다.

```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
tri2의 면적을 계산하여 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="308" height="95" alt="화면 캡처 2026-03-19 194004" src="https://github.com/user-attachments/assets/73011fa0-4584-4c74-beb8-e9a144102919" />



# 실습과제 3

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 사용하기 위해 iostream 헤더파일을 포함한다.

```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout 등을 사용한다.

```
class Sphere
```
Sphere 클래스를 선언한다.

```
double radius;
```
구의 반지름을 저장하는 실수형 멤버 변수이다.

```
public:
```
외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Sphere();
```
매개변수가 없는 기본 생성자를 선언한다.

```
Sphere(double a);
```
반지름 값을 받아 초기화하는 생성자를 선언한다.

```
double getVolume();
```
구의 부피를 계산하여 반환하는 멤버 함수를 선언한다.

```
double Sphere::getVolume()
```
Sphere 클래스의 멤버 함수 getVolume을 정의하는 부분이다.

```
return (4.0 / 3.0) * 3.14 * radius * radius * radius;
```
반지름을 이용해 구의 부피를 계산하여 반환한다.

```
Sphere::Sphere() : Sphere(1.0) {}
```
기본 생성자이며 다른 생성자를 호출하는 위임 생성자이다.

```
Sphere::Sphere(double a) : radius(a) {}
```
매개변수 a 값을 이용해 radius를 초기화하는 생성자이다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Sphere sph1;
```
Sphere 객체 sph1을 생성한다.

```
cout << "구의 부피는" << sph1.getVolume() << endl;
```
sph1의 부피를 계산하여 출력한다.

```
Sphere sph2(3);
```
반지름이 3인 Sphere 객체 sph2를 생성한다.

```
cout << "구의 부피는" << sph2.getVolume() << endl;
```
sph2의 부피를 계산하여 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="310" height="105" alt="화면 캡처 2026-03-19 195304" src="https://github.com/user-attachments/assets/380dfdd6-8c30-4749-a419-b2fc67246d1d" />


# 실습과제 4

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 사용하기 위해 iostream 헤더파일을 포함한다.

```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout 등을 사용한다.

```
class Rectangle
```
Rectangle 클래스를 선언한다.

```
public:
```
외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
int width, height;
```
사각형의 가로와 높이를 저장하는 정수형 멤버 변수이다.

```
int x, y;
```
사각형의 좌측 상단 좌표를 저장하는 정수형 멤버 변수이다.

```
Rectangle();
```
매개변수가 없는 기본 생성자를 선언한다.

```
Rectangle(int x, int y);
```
좌표 값을 받아 초기화하는 생성자를 선언한다.

```
Rectangle(int x, int y, int w, int h);
```
좌표와 가로, 높이를 받아 초기화하는 생성자를 선언한다.

```
int getArea();
```
사각형의 면적을 계산하여 반환하는 멤버 함수를 선언한다.

```
int getPerimeter();
```
사각형의 둘레를 계산하여 반환하는 멤버 함수를 선언한다.

```
void getRightBottom();
```
우측 하단 좌표를 출력하는 멤버 함수를 선언한다.

```
Rectangle::Rectangle(int x, int y, int w, int h): x(x), y(y), width(w), height(h) {}
```
매개변수로 받은 값으로 좌표와 가로, 높이를 초기화하는 생성자이다.

```
Rectangle::Rectangle() : Rectangle(1, 1, 1, 1) {}
```
기본 생성자이며 다른 생성자를 호출하는 위임 생성자이다.

```
Rectangle::Rectangle(int x, int y) : Rectangle(x, y, 1, 1) {}
```
좌표만 받아 기본 크기로 초기화하는 생성자이다.

```
int Rectangle::getArea()
```
Rectangle 클래스의 멤버 함수 getArea를 정의하는 부분이다.

```
return width * height;
```
가로와 높이를 이용해 사각형의 면적을 계산하여 반환한다.

```
int Rectangle::getPerimeter()
```
Rectangle 클래스의 멤버 함수 getPerimeter를 정의하는 부분이다.

```
return 2 * (width + height);
```
가로와 높이를 이용해 사각형의 둘레를 계산하여 반환한다.

```
void Rectangle::getRightBottom()
```
Rectangle 클래스의 멤버 함수 getRightBottom을 정의하는 부분이다.

```
cout << "(" << x + width << ", " << y - height << ")" << endl;
```
우측 하단 좌표를 계산하여 출력한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Rectangle rect1;
```
Rectangle 객체 rect1을 생성한다.

```
Rectangle rect2(3, 5);
```
좌표가 (3, 5)인 Rectangle 객체 rect2를 생성한다.

```
Rectangle rect3(3, 5, 2, 4);
```
좌표와 크기를 지정한 Rectangle 객체 rect3을 생성한다.

```
cout << "rect1의 면적은 " << rect1.getArea() << endl;
```
rect1의 면적을 계산하여 출력한다.

```
cout << "rect2의 둘레길이는 " << rect2.getPerimeter() << endl;
```
rect2의 둘레를 계산하여 출력한다.

```
cout << "rect3의 우측하단 좌표는 ";
```
rect3의 우측 하단 좌표를 출력하기 위한 문장을 출력한다.

```
rect3.getRightBottom();
```
우측 하단 좌표를 계산하여 출력하는 함수를 호출한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="357" height="129" alt="화면 캡처 2026-03-19 195416" src="https://github.com/user-attachments/assets/d1abd386-702c-4442-b669-80dde49fdc76" />



