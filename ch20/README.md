# 실습과제 1
# 프렌드 함수가 왜 필요한가?
프렌드 함수는 클래스 외부 함수가 private 멤버에 접근할 수 있도록 사용된다.
# 객체 지향형 언어의 특징 중의 하나인 다형성의 의미와종류를 조사하시오
다형성은 하나의 함수나 연산자가 여러 형태로 동작하는 특징이며 함수 중복, 연산자 중복, 가상 함수가 있다.


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
class Complex
```
복소수를 표현하는 Complex 클래스를 선언한다.
```
int real;
```
복소수의 실수 부분을 저장하는 정수형 변수이다.
```
int img;
```
복소수의 허수 부분을 저장하는 정수형 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Complex(int r = 0, int i = 0)
```
기본값이 설정된 생성자로 복소수 객체를 초기화한다.
```
real = r;
```
실수 부분 값을 r로 설정한다.
```
img = i;
```
허수 부분 값을 i로 설정한다.
```
cout << "복소수 " << real << "+ " << img << "j 생성" << endl;
```
복소수 객체가 생성될 때 메시지를 출력한다.
```
void show()
```
복소수 값을 출력하는 함수이다.
```
cout << real << "+" << img << "j" << endl;
```
현재 객체의 복소수 값을 출력한다.
```
friend Complex ComplexAdd(Complex x, Complex y);
```
두 복소수를 더하는 프렌드 함수 선언이다.
```
Complex ComplexAdd(Complex x, Complex y)
```
두 복소수를 더하는 프렌드 함수 정의 부분이다.
```
Complex temp;
```
덧셈 결과를 저장할 임시 객체를 생성한다.
```
temp.real = x.real + y.real;
```
두 객체의 실수 부분을 더하여 저장한다.
```
temp.img = x.img + y.img;
```
두 객체의 허수 부분을 더하여 저장한다.
```
return temp;
```
덧셈 결과 객체를 반환한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Complex x(2, 3), y(-5, 10), sum;
```
복소수 객체 x, y와 결과를 저장할 sum 객체를 생성한다.
```
sum = ComplexAdd(x, y);
```
프렌드 함수를 호출하여 두 복소수의 합을 계산한다.
```
cout << "두 복소수의 합은 ";
```
출력 안내 문구를 출력한다.
```
sum.show();
```
계산된 복소수 결과를 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.


# 실행결과
<img width="272" height="140" alt="1" src="https://github.com/user-attachments/assets/09fa1aad-8509-43c9-9ea0-65fc5f0e5eeb" />





# 실습과제 3

# 소스코드 설명


# 실행결과
