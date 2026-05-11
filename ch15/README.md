# 실습과제 1

# 참조에 의한 호출의 장점을 2가지 측면(메모리사용량, 처리시간)에서 설명하시오
참조에 의한 호출은 객체를 복사하지 않고 원본 객체를 직접 사용하므로 메모리 사용량이 줄고 처리 속도가 빨라진다.
# C++언어 함수의 반환과정을 상세히 설명하라
C++ 함수는 return문 실행 시 값을 임시변수(또는 임시객체)에 복사하여 호출한 곳으로 전달한다.
# 반환형이 참조로 선언된 경우 반환값의 의미를 설명하라
반환형이 참조인 경우 변수 자체의 별명(참조)을 반환하므로 반환값을 변수처럼 사용할 수 있다.
# 참조 리턴을 응용하는 예제를 인터넷에서 검색하여 실행해보고 설명하시오
참조 리턴을 사용하면 return *this 형태로 객체 자신의 참조를 반환하여 a.plus(1).plus(2) 와 같은 연속 함수 호출이 가능하다.


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
void Uppercase(string& s);
```
문자열의 소문자를 대문자로 변환하는 함수 선언이다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
string s1("hello");
```
문자열 "hello"로 s1을 초기화한다.
```
cout << "변환전 문자열 " << s1 << endl;
```
변환 전 문자열을 출력한다.
```
Uppercase(s1);
```
문자열을 대문자로 변환하는 함수를 호출한다.
```
cout << "변환후 문자열 " << s1 << endl;
```
변환 후 문자열을 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.
```
void Uppercase(string& s)
```
참조를 이용하여 문자열을 직접 변경하는 함수이다.
```
for (int i = 0; i < s.length(); i++)
```
문자열의 길이만큼 반복하면서 각 문자를 검사한다.
```
s[i] = toupper(s[i]);
```
현재 문자를 대문자로 변환하여 다시 저장한다.

# 실행결과
<img width="238" height="85" alt="과제 2 실행" src="https://github.com/user-attachments/assets/94a4708b-a048-4f09-ae3e-0a072e331e9e" />


# 실습과제 3

# 소스코드 설명

# 실행결과
<img width="261" height="85" alt="과제 3" src="https://github.com/user-attachments/assets/5fd4631b-bb02-4d7c-9b11-ecd8a570770d" />



# 실습과제 4

# 소스코드 설명

# 실행결과
<img width="209" height="63" alt="과제 4" src="https://github.com/user-attachments/assets/956d7131-256a-4aa8-a53e-1c373839b5d3" />

