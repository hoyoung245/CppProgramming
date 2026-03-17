# 실습과제 1

# 구조체와 클래스의 차이점을 설명하라.
구조체는 기본이 public, 클래스는 기본이 private이다.
# 클래스와 객체의 차이점을 설명하라.
클래스는 설계도, 객체는 실제 데이터이다.
# sizeof(클래스명)의 결과값을 출력해보고 결과를 설명하라.
클래스의 메모리 크기를 나타낸다.

# 실습과제 2

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 위해 iostream 헤더파일을 포함한다.

```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout 등을 사용한다.

```
class Triangle
```
Triangle 클래스를 선언한다.

```
public:
```
외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
double s;
```
삼각형의 밑변 길이를 저장하는 실수형 변수이다.

```
double h;
```
삼각형의 높이를 저장하는 실수형 변수이다.

```
double getArea();
```
삼각형의 면적을 계산하여 반환하는 멤버 함수를 선언한다.

```
double Triangle::getArea()
```
Triangle 클래스의 멤버 함수 getArea를 정의하는 부분이다.

```
return s * h * 0.5;
```
밑변과 높이를 이용해 삼각형의 면적을 계산하여 반환한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Triangle t;
```
Triangle 객체 t를 생성한다.

```
t.s = 3.0;
```
객체 t의 밑변 값 s에 3.0을 저장한다.

```
t.h = 5.0;
```
객체 t의 높이 값 h에 5.0을 저장한다.

```
cout << "삼각형의 면적은 " << t.getArea();
```
getArea 함수를 호출하여 계산된 면적을 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="240" height="72" alt="화면 캡처 2026-03-17 221036" src="https://github.com/user-attachments/assets/f68489f9-0995-481f-a948-311b882054a4" />


# 실습과제 3

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 위해 iostream 헤더파일을 포함한다.

```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout 등을 사용한다.

```
class Sphere
```
Sphere 클래스를 선언한다.

```
public:
```
외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
double r;
```
구의 반지름을 저장하는 실수형 변수이다.

```
double getVolume();
```
구의 부피를 계산하여 반환하는 멤버 함수를 선언한다.

```
double getArea();
```
구의 표면적을 계산하여 반환하는 멤버 함수를 선언한다.

```
double Sphere::getVolume()
```
Sphere 클래스의 멤버 함수 getVolume을 정의하는 부분이다.

```
return (4.0 / 3.0) * 3.14 * r * r * r;
```
반지름을 이용해 구의 부피를 계산하여 반환한다.

```
double Sphere::getArea()
```
Sphere 클래스의 멤버 함수 getArea를 정의하는 부분이다.

```
return 4 * 3.14 * r * r;
```
반지름을 이용해 구의 표면적을 계산하여 반환한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Sphere s;
```
Sphere 객체 s를 생성한다.

```
s.r = 6.3;
```
객체 s의 반지름 값 r에 6.3을 저장한다.

```
cout << "구의 부피는 " << s.getVolume() << endl;
```
getVolume 함수를 호출하여 계산된 부피를 출력한다.

```
cout << "구의 표면적은 " << s.getArea();
```
getArea 함수를 호출하여 계산된 표면적을 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="439" height="97" alt="화면 캡처 2026-03-17 221256" src="https://github.com/user-attachments/assets/111ab1fa-40f4-4d76-ba82-e2a18e362575" />



# 실습과제 4
# 소스코드 설명

```
#include <iostream>
```
표준 입출력을 위해 iostream 헤더파일을 포함한다.

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
int width;
```
사각형의 가로 길이를 저장하는 정수형 변수이다.

```
int height;
```
사각형의 높이를 저장하는 정수형 변수이다.

```
int x, x2;
```
좌측 상단과 우측 하단의 x좌표를 저장하는 정수형 변수이다.

```
int y, y2;
```
좌측 상단과 우측 하단의 y좌표를 저장하는 정수형 변수이다.

```
int getArea();
```
사각형의 면적을 계산하여 반환하는 멤버 함수를 선언한다.

```
int getPerimeter();
```
사각형의 둘레를 계산하여 반환하는 멤버 함수를 선언한다.

```
void getXY();
```
우측 하단 좌표를 계산하는 멤버 함수를 선언한다.

```
int Rectangle::getArea()
```
Rectangle 클래스의 멤버 함수 getArea를 정의하는 부분이다.

```
return width * height;
```
가로와 세로를 이용해 사각형의 면적을 계산하여 반환한다.

```
int Rectangle::getPerimeter()
```
Rectangle 클래스의 멤버 함수 getPerimeter를 정의하는 부분이다.

```
return 2 * (width + height);
```
가로와 세로를 이용해 사각형의 둘레를 계산하여 반환한다.

```
void Rectangle::getXY()
```
Rectangle 클래스의 멤버 함수 getXY를 정의하는 부분이다.

```
x2 = x + width;
```
우측 하단의 x좌표를 계산하여 x2에 저장한다.

```
y2 = y - height;
```
우측 하단의 y좌표를 계산하여 y2에 저장한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Rectangle r;
```
Rectangle 객체 r을 생성한다.

```
r.x = 1;
```
객체 r의 좌측 상단 x좌표에 1을 저장한다.

```
r.y = 2;
```
객체 r의 좌측 상단 y좌표에 2를 저장한다.

```
r.width = 3;
```
객체 r의 가로 길이에 3을 저장한다.

```
r.height = 4;
```
객체 r의 높이에 4를 저장한다.

```
cout << "사각형의 면적은 " << r.getArea() << endl;
```
getArea 함수를 호출하여 계산된 면적을 출력한다.

```
cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;
```
getPerimeter 함수를 호출하여 계산된 둘레를 출력한다.

```
r.getXY();
```
getXY 함수를 호출하여 우측 하단 좌표를 계산한다.

```
cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
```
계산된 우측 하단 좌표를 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="378" height="114" alt="화면 캡처 2026-03-17 221410" src="https://github.com/user-attachments/assets/b5559da0-9913-4859-a98f-56be4b60de0b" />



# 실습과제 5

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 위해 iostream 헤더파일을 포함한다.

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
int width;
```
사각형의 가로 길이를 저장하는 정수형 변수이다.

```
int height;
```
사각형의 높이를 저장하는 정수형 변수이다.

```
int x, x2;
```
좌측 상단과 우측 하단의 x좌표를 저장하는 정수형 변수이다.

```
int y, y2;
```
좌측 상단과 우측 하단의 y좌표를 저장하는 정수형 변수이다.

```
int getArea();
```
사각형의 면적을 계산하여 반환하는 멤버 함수를 선언한다.

```
int getPerimeter();
```
사각형의 둘레를 계산하여 반환하는 멤버 함수를 선언한다.

```
void getXY();
```
우측 하단 좌표를 계산하는 멤버 함수를 선언한다.

```
void getRectinfo();
```
사용자로부터 입력을 받아 멤버 변수에 저장하는 멤버 함수를 선언한다.

```
int Rectangle::getArea()
```
Rectangle 클래스의 멤버 함수 getArea를 정의하는 부분이다.

```
return width * height;
```
가로와 세로를 이용해 사각형의 면적을 계산하여 반환한다.

```
int Rectangle::getPerimeter()
```
Rectangle 클래스의 멤버 함수 getPerimeter를 정의하는 부분이다.

```
return 2 * (width + height);
```
가로와 세로를 이용해 사각형의 둘레를 계산하여 반환한다.

```
void Rectangle::getXY()
```
Rectangle 클래스의 멤버 함수 getXY를 정의하는 부분이다.

```
x2 = x + width;
```
우측 하단의 x좌표를 계산하여 x2에 저장한다.

```
y2 = y - height;
```
우측 하단의 y좌표를 계산하여 y2에 저장한다.

```
void Rectangle::getRectinfo()
```
Rectangle 클래스의 멤버 함수 getRectinfo를 정의하는 부분이다.

```
cout << "사각형의 좌측상단좌표(x,y): ";
```
사용자에게 좌측 상단 좌표 입력을 안내하는 문장을 출력한다.

```
cin >> x >> y;
```
입력받은 값을 x와 y에 저장한다.

```
cout << "사각형의 폭과 높이(width,height): ";
```
사용자에게 가로와 높이 입력을 안내하는 문장을 출력한다.

```
cin >> width >> height;
```
입력받은 값을 width와 height에 저장한다.

```
int main()
```
프로그램이 시작되는 메인 함수이다.

```
Rectangle r;
```
Rectangle 객체 r을 생성한다.

```
r.getRectinfo();
```
getRectinfo 함수를 호출하여 값을 입력받는다.

```
cout << "사각형의 면적은 " << r.getArea() << endl;
```
getArea 함수를 호출하여 계산된 면적을 출력한다.

```
cout << "사각형의 둘레길이는 " << r.getPerimeter() << endl;
```
getPerimeter 함수를 호출하여 계산된 둘레를 출력한다.

```
r.getXY();
```
getXY 함수를 호출하여 우측 하단 좌표를 계산한다.

```
cout << "사각형의 우측하단의 좌표는 (" << r.x2 << "," << r.y2 << ")";
```
계산된 우측 하단 좌표를 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.

# 실행결과

<img width="381" height="140" alt="화면 캡처 2026-03-17 221630" src="https://github.com/user-attachments/assets/d7102e50-986c-43bf-9a39-4d849f5c1897" />

