# 실습과제 1

#  접근지정자가 왜 필요한가?
멤버 변수와 함수를 외부에서 접근할 수 있는 범위를 제한하여 프로그램을 안전하게 만들기 위해 필요하다.
# 생성자와 setter 멤버함수는 모두 멤버변수를 설정하는 기능이다. 차이점을 설명하라.
생성자는 객체가 만들어질 때 멤버변수를 초기화하는 함수이고, setter 함수는 객체가 생성된 후 멤버변수 값을 변경하는 함수이다.
# 객체지향형 언어의 특징인 캡슐화와정보은닉을 설명하라.
캡슐화는 변수와 함수를 하나의 클래스에 묶는 것이고, 정보은닉은 중요한 데이터가 외부에서 직접 접근하지 못하도록 숨기는 것이다.


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
class Circle
```
Circle 클래스를 선언한다.

```
private:
```
클래스 내부에서만 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
int radius;
```
원의 반지름을 저장하는 정수형 멤버 변수이다.

```
public:
```
외부에서 사용할 수 있는 멤버를 선언하기 위한 접근 지정자이다.

```
Circle();
```
기본 생성자를 선언한다.

```
void setRadius(int r);
```
반지름 값을 설정하는 멤버 함수를 선언한다.

```
int getRadius();
```
반지름 값을 반환하는 멤버 함수를 선언한다.

```
Circle::Circle() { radius = 1; }
```
기본 생성자로 객체가 생성될 때 반지름을 1로 초기화한다.

```
void Circle::setRadius(int r)
```
Circle 클래스의 멤버 함수 setRadius를 정의하는 부분이다.

```
if (r <= 0)
```
입력된 반지름 값이 0 이하인지 확인한다.

```
cout << "반지름은 양수이어야 함!!";
```
반지름이 올바르지 않을 경우 메시지를 출력한다.

```
else radius = r;
```
반지름이 정상적인 값이면 radius에 저장한다.

```
int Circle::getRadius()
```
Circle 클래스의 멤버 함수 getRadius를 정의하는 부분이다.

```
return radius;
```
현재 반지름 값을 반환한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Circle waffle;
```
Circle 객체 waffle을 생성한다.

```
waffle.setRadius(5);
```
setRadius 함수를 이용해 반지름 값을 5로 설정한다.

```
cout << "원의 반지름은 " << waffle.getRadius() << endl;
```
getRadius 함수를 호출하여 반지름 값을 출력한다.



# 실행결과
<img width="272" height="69" alt="화면 캡처 2026-03-25 221039" src="https://github.com/user-attachments/assets/f4857e18-eed4-496d-ab92-539b57d1ea54" />


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
class Triangle
```
Triangle 클래스를 선언한다.

private:
클래스 내부에서만 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.
```
double width, height;
```
삼각형의 폭과 높이를 저장하는 실수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하기 위한 접근 지정자이다.
```
Triangle();
```
기본 생성자를 선언한다.
```
~Triangle();
```
객체가 소멸될 때 실행되는 소멸자를 선언한다.
```
double getArea();
```
삼각형의 면적을 계산하여 반환하는 멤버 함수를 선언한다.
```
void setWidth(double w);
```
폭 값을 설정하는 멤버 함수를 선언한다.
```
double getWidth();
```
폭 값을 반환하는 멤버 함수를 선언한다.
```
void setHeight(double h);
```
높이 값을 설정하는 멤버 함수를 선언한다.
```
double getHeight();
```
높이 값을 반환하는 멤버 함수를 선언한다.
```
Triangle::Triangle()
```
기본 생성자를 정의하는 부분이다.
```
width = 1;
height = 1;
```
삼각형의 폭과 높이를 1로 초기화한다.
```
cout << "폭" << width << " 높이" << height << " 삼각형 생성" << endl;
```
삼각형 객체가 생성될 때 메시지를 출력한다.
```
Triangle::~Triangle()
```
Triangle 클래스의 소멸자를 정의하는 부분이다.
```
cout << "폭" << width << " 높이" << height << " 삼각형 소멸" << endl;
```
객체가 소멸될 때 메시지를 출력한다.
```
double Triangle::getArea()
```
Triangle 클래스의 멤버 함수 getArea를 정의하는 부분이다.
```
return width * height * 0.5;
```
폭과 높이를 이용해 삼각형의 면적을 계산하여 반환한다.
```
void Triangle::setWidth(double w)
```
Triangle 클래스의 멤버 함수 setWidth를 정의하는 부분이다.
```
if (w <= 0)
```
입력된 폭이 0 이하인지 확인한다.
```
cout << "폭은 양수이어야 함!!" << endl;
```
폭이 올바르지 않을 경우 메시지를 출력한다.
```
else width = w;
```
정상적인 값이면 width에 저장한다.
```
double Triangle::getWidth()
```
현재 폭 값을 반환하는 함수이다.
```
return width;
```
```
void Triangle::setHeight(double h)
```

Triangle 클래스의 멤버 함수 setHeight를 정의하는 부분이다.
```
if (h <= 0)
```
입력된 높이가 0 이하인지 확인한다.
```
cout << "높이는 양수이어야 함!!" << endl;
```
높이가 올바르지 않을 경우 메시지를 출력한다.
```
else height = h;
```
정상적인 값이면 height에 저장한다.
```
double Triangle::getHeight()
```
현재 높이 값을 반환하는 함수이다.
```
return height;
```
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Triangle tri;
```
Triangle 객체 tri를 생성한다.
```
tri.setWidth(3);
```
폭 값을 3으로 설정한다.
```
tri.setHeight(5);
```
높이 값을 5로 설정한다.
```
cout << "삼각형의 폭은 " << tri.getWidth() << endl;
```
삼각형의 폭을 출력한다.
```
cout << "삼각형의 높이는 " << tri.getHeight() << endl;
```
삼각형의 높이를 출력한다.
```
cout << "삼각형의 면적은 " << tri.getArea() << endl;
```
삼각형의 면적을 계산하여 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.

# 실행결과
<img width="241" height="147" alt="화면 캡처 2026-03-25 222126" src="https://github.com/user-attachments/assets/953545f6-2e0d-494a-a5ec-08998ddc20b5" />





# 실습과제 4

# 소스코드 설명

# 실행결과




# 실습과제 5

# 소스코드 설명

# 실행결과
