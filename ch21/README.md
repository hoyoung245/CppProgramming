# 실습과제 1

# 소스코드 설명

```
#include <iostream>
```

표준 입출력 기능을 사용하기 위해 iostream 헤더 파일을 포함한다.

```
using namespace std;
```

std 네임스페이스를 사용하여 cout, cin 등을 간단하게 사용할 수 있도록 한다.

```
class Complex
```

복소수를 표현하기 위한 Complex 클래스를 선언한다.

```
int real;
```

복소수의 실수 부분을 저장하는 멤버 변수이다.

```
int img;
```

복소수의 허수 부분을 저장하는 멤버 변수이다.

```
public:
```

외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Complex(int real = 0, int img = 0)
```

실수부와 허수부를 초기화하는 생성자이다.

```
this->real = real;
```

객체의 실수 부분을 매개변수 real 값으로 초기화한다.

```
this->img = img;
```

객체의 허수 부분을 매개변수 img 값으로 초기화한다.
```
Complex operator+(Complex op2);
```

두 복소수 객체를 더하기 위한 + 연산자 함수를 선언한다.

```
void show();
```

복소수 값을 출력하기 위한 멤버 함수를 선언한다.

```
void Complex::show()
```

show 함수의 정의 부분이다.

```
cout << real << "+" << img << "j" << endl;
```

현재 객체의 복소수 값을 화면에 출력한다.

```
Complex Complex::operator+(Complex op2)
```

두 복소수 객체를 더하는 + 연산자 함수의 정의 부분이다.

```
Complex tmp;
```

덧셈 결과를 저장할 임시 객체를 생성한다.

```
tmp.real = real + op2.real;
```

현재 객체와 op2 객체의 실수 부분을 더하여 저장한다.

```
tmp.img = img + op2.img;
```

현재 객체와 op2 객체의 허수 부분을 더하여 저장한다.

```
return tmp;
```

덧셈 결과가 저장된 객체를 반환한다.

```
int main()
```

프로그램이 시작되는 메인 함수이다.

```
Complex x(2, 3), y(-5, 10), sum;
```

복소수 객체 x와 y를 생성하고, 덧셈 결과를 저장할 sum 객체를 생성한다.

```
sum = x + y;
```

* 연산자 함수를 호출하여 두 복소수의 합을 계산한다.

```
cout << "두 복소수의 합은 ";
```

결과 출력 전에 안내 문구를 출력한다.

```
sum.show();
```

계산된 복소수의 합을 출력한다.

```
return 0;
```

프로그램을 정상적으로 종료한다.

# 실행결과 
<img width="267" height="80" alt="1" src="https://github.com/user-attachments/assets/1258228d-f0ab-4367-ab97-25c4030df892" />




# 실습과제 2

# 소스코드 설명

```
#include <iostream>
```

표준 입출력 기능을 사용하기 위해 iostream 헤더 파일을 포함한다.

```
using namespace std;
```

std 네임스페이스를 사용하여 cout, cin 등을 간단하게 사용할 수 있도록 한다.

```
class Complex
```

복소수를 표현하기 위한 Complex 클래스를 선언한다.

```
int real;
```

복소수의 실수 부분을 저장하는 멤버 변수이다.

```
int img;
```

복소수의 허수 부분을 저장하는 멤버 변수이다.

```
public:
```

외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Complex(int real = 0, int img = 0)
```

실수부와 허수부를 초기화하는 생성자이다.

```
this->real = real;
```

객체의 실수 부분을 매개변수 real 값으로 초기화한다.

```
this->img = img;
```

객체의 허수 부분을 매개변수 img 값으로 초기화한다.

```
Complex operator*(Complex op2);
```

두 복소수 객체를 곱하기 위한 * 연산자 함수를 선언한다.

```
void show();
```

복소수 값을 출력하기 위한 멤버 함수를 선언한다.

```
void Complex::show()
```

show 함수의 정의 부분이다.

```
cout << real << "+" << img << "j" << endl;
```

현재 객체의 복소수 값을 화면에 출력한다.

```
Complex Complex::operator*(Complex op2)
```

두 복소수 객체를 곱하는 * 연산자 함수의 정의 부분이다.

```
Complex tmp;
```

곱셈 결과를 저장할 임시 객체를 생성한다.

```
tmp.real = real * op2.real - img * op2.img;
```

복소수 곱셈 공식의 실수 부분 ((ac-bd))을 계산하여 저장한다.

```
tmp.img = real * op2.img + img * op2.real;
```

복소수 곱셈 공식의 허수 부분 ((ad+bc))을 계산하여 저장한다.

```
return tmp;
```

곱셈 결과가 저장된 객체를 반환한다.

```
int main()
```

프로그램이 시작되는 메인 함수이다.

```
Complex x(2, 3), y(-5, 10), sum;
```

복소수 객체 x와 y를 생성하고, 곱셈 결과를 저장할 sum 객체를 생성한다.

```
sum = x * y;
```

* 연산자 함수를 호출하여 두 복소수의 곱을 계산한다.

```
cout << "두 복소수의 곱은 ";
```

결과 출력 전에 안내 문구를 출력한다.

```
sum.show();
```

계산된 복소수의 곱을 출력한다.

```
return 0;
```

프로그램을 정상적으로 종료한다.

# 실행결과 
<img width="260" height="65" alt="2" src="https://github.com/user-attachments/assets/28f1e37c-206a-45d4-82bb-7165ce9b5c89" />




# 실습과제 3

# 소스코드 설명
```
#include <iostream>
```

표준 입출력 기능을 사용하기 위해 iostream 헤더 파일을 포함한다.

```
using namespace std;
```

std 네임스페이스를 사용하여 cout, cin 등을 간단하게 사용할 수 있도록 한다.

```
class Complex
```

복소수를 표현하기 위한 Complex 클래스를 선언한다.

```cpp
int real;
```

복소수의 실수 부분을 저장하는 멤버 변수이다.

```
int img;
```

복소수의 허수 부분을 저장하는 멤버 변수이다.

```
public:
```

외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Complex(int real = 0, int img = 0)
```

실수부와 허수부를 초기화하는 생성자이다.

```
this->real = real;
```

객체의 실수 부분을 매개변수 real 값으로 초기화한다.

```
this->img = img;
```

객체의 허수 부분을 매개변수 img 값으로 초기화한다.

```
Complex& operator+=(Complex op2);
```

현재 객체에 다른 복소수 객체를 더하는 += 연산자 함수를 선언한다.

```
void show();
```

복소수 값을 출력하기 위한 멤버 함수를 선언한다.

```
void Complex::show()
```

show 함수의 정의 부분이다.

```
cout << real << "+" << img << "j" << endl;
```

현재 객체의 복소수 값을 화면에 출력한다.

```
Complex& Complex::operator+=(Complex op2)
```

+= 연산자 함수의 정의 부분이다.

```
real += op2.real;
```

현재 객체의 실수 부분에 op2 객체의 실수 부분을 더한다.

```
img += op2.img;
```

현재 객체의 허수 부분에 op2 객체의 허수 부분을 더한다.

```
return *this;
```

연산이 수행된 현재 객체를 참조 형태로 반환한다.

```
int main()
```

프로그램이 시작되는 메인 함수이다.

```
Complex a(3, 5), b(1, 1);
```

복소수 객체 a와 b를 생성한다.

```
a.show();
```

객체 a의 값을 출력한다.

```
b.show();
```

객체 b의 값을 출력한다.

```
b += a;
```

+= 연산자를 사용하여 b 객체에 a 객체의 값을 더한다.

```
a.show();
```

연산 후 객체 a의 값을 출력한다.

```
b.show();
```

연산 후 객체 b의 값을 출력한다.

```
return 0;
```

프로그램을 정상적으로 종료한다.

# 실행결과
<img width="175" height="127" alt="3" src="https://github.com/user-attachments/assets/9ce58071-8a36-4cc5-b1e5-3da72522b2f9" />



# 실습과제 4

# 소스코드 설명
```
#include <iostream>
```

표준 입출력 기능을 사용하기 위해 iostream 헤더 파일을 포함한다.
```
using namespace std;
```

std 네임스페이스를 사용하여 cout, cin 등을 간단하게 사용할 수 있도록 한다.

```
class Complex
```

복소수를 표현하기 위한 Complex 클래스를 선언한다.

```
int real;
```

복소수의 실수 부분을 저장하는 멤버 변수이다.

```
int img;
```

복소수의 허수 부분을 저장하는 멤버 변수이다.

```
public:
```

외부에서 접근 가능한 멤버를 선언하기 위한 접근 지정자이다.

```
Complex(int real = 0, int img = 0)
```

실수부와 허수부를 초기화하는 생성자이다.

```
this->real = real;
```

객체의 실수 부분을 매개변수 real 값으로 초기화한다.

```
this->img = img;
```

객체의 허수 부분을 매개변수 img 값으로 초기화한다.

```
Complex operator-(int op2);
```

복소수 객체와 정수의 뺄셈을 수행하기 위한 - 연산자 함수를 선언한다.

```
void show();
```

복소수 값을 출력하기 위한 멤버 함수를 선언한다.

```
void Complex::show()
```

show 함수의 정의 부분이다.

```
cout << real << "+" << img << "j" << endl;
```

현재 객체의 복소수 값을 화면에 출력한다.

```
Complex Complex::operator-(int op2)
```

복소수 객체와 정수의 뺄셈을 수행하는 - 연산자 함수의 정의 부분이다.

```
Complex tmp;
```

연산 결과를 저장할 임시 객체를 생성한다.

```
tmp.real = real - op2;
```

현재 객체의 실수 부분에서 정수 op2를 뺀 값을 저장한다.

```
tmp.img = img - op2;
```

현재 객체의 허수 부분에서 정수 op2를 뺀 값을 저장한다.

```
return tmp;
```

뺄셈 결과가 저장된 객체를 반환한다.

```
int main()
```

프로그램이 시작되는 메인 함수이다.

```
Complex a(3, 5), b;
```

복소수 객체 a와 결과를 저장할 객체 b를 생성한다.

```
a.show();
```

객체 a의 값을 출력한다.

```
b.show();
```

객체 b의 초기값을 출력한다.

```
b = a - 2;
```

* 연산자 함수를 호출하여 a의 실수부와 허수부에서 각각 2를 뺀 결과를 b에 저장한다.

```
a.show();
```

연산 후 객체 a의 값을 출력한다.

```
b.show();
```

연산 결과가 저장된 객체 b의 값을 출력한다.

```
return 0;
```

프로그램을 정상적으로 종료한다.


# 실행결과
<img width="135" height="122" alt="4" src="https://github.com/user-attachments/assets/6fbaec0a-ab20-420e-8104-c9cb38966907" />
