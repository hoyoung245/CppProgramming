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

# 실행결과
<img width="250" height="104" alt="과제 3" src="https://github.com/user-attachments/assets/6dd1a042-353a-4d64-97b9-8a8969e37baf" />


# 실습과제 4

# 소스코드 설명

# 실행결과
<img width="255" height="231" alt="과제 4" src="https://github.com/user-attachments/assets/42991b23-9a96-47ad-a2c7-183310cdfd9a" />


# 실습과제 5

# 소스코드 설명

# 실행결과
<img width="239" height="109" alt="과제 5" src="https://github.com/user-attachments/assets/891a4159-580e-4444-98b9-ea535908477e" />

