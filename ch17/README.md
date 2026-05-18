# 실습과제 1
# C언어와 C++언어에서 컴파일러가 호출할 함수를 결정하는 방식의 차이를 설명하라
C언어는 함수 이름만으로 함수를 구분하지만, C++은 함수 이름과 매개변수의 타입 및 개수까지 비교하여 함수를 구분한다.

```

```

# 실습과제 2

# 소스코드 설명
```
#include <iostream>
```
표준 입출력을 사용하기 위해 iostream 헤더파일을 포함한다.
```
#include <string>
```
문자열 처리를 위해 string 헤더파일을 포함한다.
```
using namespace std;
```
std 네임스페이스를 사용하여 std:: 없이 cin, cout, string 등을 사용한다.
```
int big(int a, int b);
```
두 정수 중 큰 값을 반환하는 함수 선언이다.
```
double big(double a, double b);
```
두 실수 중 큰 값을 반환하는 함수 선언이다.
```
string big(string a, string b);
```
두 문자열 중 사전 순으로 뒤에 오는 값을 반환하는 함수 선언이다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
int x = big(10, 20);
```
두 정수 중 큰 값을 반환하여 x에 저장한다.
```
cout << "큰 정수값은 " << x << endl;
```
큰 정수 값을 출력한다.
```
double y = big(3.14, 1.05);
```
두 실수 중 큰 값을 반환하여 y에 저장한다.
```
cout << "큰 실수값은 " << y << endl;
```
큰 실수 값을 출력한다.
```
string z = big("hello", "world");
```
두 문자열 중 사전 순으로 뒤에 오는 값을 반환하여 z에 저장한다.
```
cout << "사전에서 뒤에 나오는 단어는 " << z << endl;
```
문자열 비교 결과를 출력한다.
```
int big(int a, int b)
```
정수형 비교 함수이다.
```
if (a > b)
```
a가 b보다 큰지 비교한다.
```
return a;
```
a가 더 크면 a를 반환한다.
```
else
```
그 외의 경우 실행된다.
```
return b;
```
b를 반환한다.
```
double big(double a, double b)
```
실수형 비교 함수이다.
```
if (a > b)
```
a와 b 중 큰 값을 비교한다.
```
return a;
```
a가 더 크면 a를 반환한다.
```
else
```
b를 반환한다.
```
string big(string a, string b)
```
문자열 비교 함수이다.
```
if (a > b)
```
사전 순으로 a가 더 뒤에 있는지 비교한다.
```
return a;
```
a가 더 뒤에 있으면 a를 반환한다.
```
else
```
b를 반환한다.

# 실행결과


# 실습과제 3

# 소스코드 설명



# 실행결과

# 실습과제 4

# 소스코드 설명



# 실행결과
