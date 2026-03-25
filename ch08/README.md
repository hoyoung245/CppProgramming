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

# 실행결과





# 실습과제 4

# 소스코드 설명

# 실행결과




# 실습과제 5

# 소스코드 설명

# 실행결과
