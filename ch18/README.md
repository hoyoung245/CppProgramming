# 실습과제 1

# 디폴트 매개변수는 함수의 선언에서 정의해주어야 한다.이유를 설명하라. 만약 함수의 정의에서 해준다면 어떻게될지 생각해보라
디폴트 매개변수는 함수 호출 전에 컴파일러가 값을 알아야 하므로 함수 선언에서 지정해야 하며, 함수 정의에서만 지정하면 호출 시 오류가 발생할 수 있다.


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
class Rectangle
```
사각형을 표현하는 Rectangle 클래스를 선언한다.
```
int width, height;
```
사각형의 가로와 세로 길이를 저장하는 정수형 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Rectangle(int w = 1, int h = 1)
```
기본값이 설정된 생성자로, 인자가 없으면 width와 height를 1로 초기화한다.
```
width = w;
```
가로 길이를 w로 설정한다.
```
height = h;
```
세로 길이를 h로 설정한다.
```
void show()
```
사각형의 정보를 출력하는 함수이다.
```
cout << "사각형 폭은 " << width << " 높이는 " << height << endl;
```
현재 객체의 가로와 세로 값을 출력한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Rectangle rect0;
```
기본 생성자를 이용하여 width와 height가 1인 객체를 생성한다.
```
rect0.show();
```
rect0의 정보를 출력한다.
```
Rectangle rect1(10);
```
가로는 10, 세로는 기본값 1로 초기화된 객체를 생성한다.
```
rect1.show();
```
rect1의 정보를 출력한다.
```
Rectangle rect2(10, 20);
```
가로 10, 세로 20으로 초기화된 객체를 생성한다.
```
rect2.show();
```
rect2의 정보를 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.



# 실행결과
<img width="235" height="103" alt="1" src="https://github.com/user-attachments/assets/c3bc032b-6eb3-4812-b32f-0104252aaa1e" />



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
class Point3D
```
3차원 좌표를 표현하는 Point3D 클래스를 선언한다.
```
int x, y, z;
```
3차원 좌표의 x, y, z 값을 저장하는 정수형 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Point3D(int a = 0, int b = 0, int c = 0)
```
기본값이 설정된 생성자로, 인자가 없으면 모든 좌표를 0으로 초기화한다.
```
x = a;
```
x좌표를 a로 설정한다.
```
y = b;
```
y좌표를 b로 설정한다.
```
z = c;
```
z좌표를 c로 설정한다.
```
void show()
```
3차원 좌표를 출력하는 함수이다.
```
cout << "3차원 점의 좌표는 (" << x << "," << y << "," << z << ")" << endl;
```
현재 객체의 좌표 값을 출력한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Point3D p0;
```
기본값 생성자를 이용하여 (0,0,0) 좌표를 가진 객체를 생성한다.
```
p0.show();
```
p0의 좌표를 출력한다.
```
Point3D p1(1);
```
x만 1로 설정되고 y, z는 0으로 초기화된 객체를 생성한다.
```
p1.show();
```
p1의 좌표를 출력한다.
```
Point3D p2(1, 2);
```
x, y가 설정되고 z는 0으로 초기화된 객체를 생성한다.
```
p2.show();
```
p2의 좌표를 출력한다.
```
Point3D p3(1, 2, 3);
```
x, y, z가 모두 설정된 객체를 생성한다.
```
p3.show();
```
p3의 좌표를 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.


# 실행결과
<img width="274" height="128" alt="2" src="https://github.com/user-attachments/assets/519e8d77-decc-47d9-a8ac-34be1575ae92" />

