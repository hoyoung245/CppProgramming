# 실습과제 1

#  배열명의 의미를 설명하라.
배열명은 배열의 첫 번째 원소의 주소이다.
# 객체 포인터의 의미를 설명하라.
객체 포인터는 객체의 주소를 저장하는 변수이다.
# 포인터를 이용하여 배열 각 원소의 주소를 구하는 방법을 설명하라
포인터에 인덱스를 더한 (p + i)로 구한다.
# 포인터를 이용하여 배열 각 원소의 값을 구하는 방법을 설명하라
역참조 *(p + i) 또는 p[i]로 구한다.

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
int width;
```
삼각형의 폭을 저장하는 정수형 멤버 변수이다.
```
int height;
```
삼각형의 높이를 저장하는 정수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Triangle()
```
기본 생성자이다.
```
width = 1;
```
삼각형의 폭을 1로 초기화한다.
```
height = 1;
```
삼각형의 높이를 1로 초기화한다.
```
void setWidth(int w)
```
폭 값을 설정하는 함수이다.
```
width = w;
```
폭을 w 값으로 변경한다.
```
void setHeight(int h)
```
높이 값을 설정하는 함수이다.
```
height = h;
```
높이를 h 값으로 변경한다.
```
double getArea()
```
삼각형의 면적을 계산하는 함수이다.
```
return width * height / 2.0;
```
폭과 높이를 이용하여 삼각형의 면적을 계산한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Triangle tri;
```
Triangle 객체 tri를 생성한다.
```
Triangle* p = &tri;
```
tri 객체의 주소를 저장하는 포인터 p를 선언한다.
```
p->setWidth(3);
```
포인터를 이용해 tri 객체의 폭을 3으로 설정한다.
```
p->setHeight(5);
```
포인터를 이용해 tri 객체의 높이를 5로 설정한다.
```
cout << "삼각형의 면적은 " << p->getArea() << endl;
```
포인터를 통해 삼각형의 면적을 계산하여 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.

# 실행결과
<img width="218" height="65" alt="과제 2" src="https://github.com/user-attachments/assets/6eae8819-18f8-44c6-832c-a0101d947ea0" />


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
```
int width, height;
```
삼각형의 폭과 높이를 저장하는 정수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Triangle()
```
기본 생성자이다.
```
this->width = 1;
```
삼각형의 폭을 1로 초기화한다.
```
this->height = 1;
```
삼각형의 높이를 1로 초기화한다.
```
Triangle(int w)
```
폭만 입력받는 생성자이다.
```
this->width = w;
```
폭을 w 값으로 설정한다.
```
this->height = 1;
```
높이는 기본값 1로 설정한다.
```
Triangle(int w, int h)
```
폭과 높이를 모두 입력받는 생성자이다.
```
this->width = w;
```
폭을 w 값으로 설정한다.
```
this->height = h;
```
높이를 h 값으로 설정한다.
```
double getArea()
```
삼각형의 면적을 계산하는 함수이다.
```
return this->width * this->height / 2.0;
```
폭과 높이를 이용하여 삼각형의 면적을 계산한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Triangle tri1;
```
기본 생성자를 이용해 tri1 객체를 생성한다.
```
cout << "삼각형의 면적은 " << tri1.getArea() << endl;
```
tri1의 면적을 계산하여 출력한다.
```
Triangle tri2(10);
```
폭이 10인 삼각형 객체 tri2를 생성한다.
```
cout << "삼각형의 면적은 " << tri2.getArea() << endl;
```
tri2의 면적을 계산하여 출력한다.
```
Triangle tri3(10, 2);
```
폭이 10이고 높이가 2인 삼각형 객체 tri3를 생성한다.
```
cout << "삼각형의 면적은 " << tri3.getArea() << endl;
```
tri3의 면적을 계산하여 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.

# 실행결과
<img width="250" height="104" alt="과제 3" src="https://github.com/user-attachments/assets/6dd1a042-353a-4d64-97b9-8a8969e37baf" />


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
class Triangle
```
Triangle 클래스를 선언한다.
```
int width, height;
```
삼각형의 밑변과 높이를 저장하는 정수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Triangle(int w = 1, int h = 1)
```
밑변과 높이를 설정하는 생성자이며 기본값을 1로 지정한 생성자이다.
```
width = w;
```
밑변 값을 w로 설정한다.
```
height = h;
```
높이 값을 h로 설정한다.
```
cout << "밑변" << w << ",높이" << h << "인 삼각형 생성" << endl;
```
삼각형 객체가 생성될 때 메시지를 출력한다.
```
~Triangle()
```
객체가 소멸될 때 실행되는 소멸자이다.
```
cout << "밑변" << width << ",높이" << height << "인 삼각형 소멸" << endl;
```
객체가 소멸될 때 메시지를 출력한다.
```
double getArea()
```
삼각형의 면적을 계산하는 함수이다.
```
return width * height / 2.0;
```
밑변과 높이를 이용하여 삼각형의 면적을 계산한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Triangle arr[3] = { Triangle(2,2), Triangle(4,4), Triangle(6,6) };
```
Triangle 객체 3개를 배열로 생성한다.
```
for(int i=0; i<3; i++)
```
배열에 있는 삼각형 객체를 반복문으로 하나씩 접근한다.
```
cout << "삼각형" << i << "의 면적은 " << arr[i].getArea() << endl;
```
각 삼각형의 면적을 계산하여 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.

# 실행결과
<img width="255" height="231" alt="과제 4" src="https://github.com/user-attachments/assets/42991b23-9a96-47ad-a2c7-183310cdfd9a" />


# 실습과제 5

# 소스코드 설명

# 실행결과
<img width="239" height="109" alt="과제 5" src="https://github.com/user-attachments/assets/891a4159-580e-4444-98b9-ea535908477e" />

