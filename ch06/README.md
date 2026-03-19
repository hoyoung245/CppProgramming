# 실습과제 1

#  C++에서 생성자를 통하여 멤버변수의 초기화를 하는 이유를 설명하라.
객체가 생성될 때 멤버변수를 바로 초기화하기 위해서이다.
# 생성자 작성시 생성자 몸체에서 멤버를 초기화하는 것 보다 멤버 초기화 리스트에서 초기화하는 이유를 설명하라.
객체가 만들어질 때 바로 초기화되어 효율적이고 올바르게 초기화할 수 있기 때문이다.
# 위임, 타겟 생성자로 나누어 작성하는 이유를 설명하라
코드 중복을 줄이고 생성자 관리를 쉽게 하기 위해서이다.
# 함수 몸체(body)에서 생성자를 직접 호출하면 어떻게 되는지 조사해보라
기존 객체가 초기화되는 것이 아니라 새로운 임시 객체가 생성된다.


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

# 실행결과
<img width="357" height="129" alt="화면 캡처 2026-03-19 195416" src="https://github.com/user-attachments/assets/d1abd386-702c-4442-b669-80dde49fdc76" />



