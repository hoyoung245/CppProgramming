# 실습과제 1

# 인자와 매개변수를 구분하여 설명하시오.
인자는 함수 호출 시 전달하는 값이고, 매개변수는 함수에서 그 값을 받는 변수이다.
# 함수 호출시 자동으로 처리되는 2가지는 무엇인가?
매개변수가 생성되고, 인자 값으로 초기화된다.
# 값에 의한 호출로 다른 함수에서 선언된 변수의 값을 변경할수 없다. 이유를 설명하라.
값이 복사되어 별도의 메모리를 사용하므로 원본 변수에 영향을 주지 않는다.
# 주소에 의한 호출을 사용해야하는 경우를 2가지 이상 설명하라.
원본 값을 변경해야 할 때, 큰 데이터의 복사 비용을 줄이고 싶을 때, 여러 값을 동시에 수정할 때 사용한다
# 인자가 객체인 경우는 어떤 호출방식이 좋은가? 이유도 설명하라
주소에 의한 호출이 좋으며, 객체 복사가 발생하지 않아 성능이 좋기 때문이다.
# 함수 반환과정에서 자동으로 처리되는 2가지는 무엇인가?
임시변수가 생성되고, 반환값이 그 임시변수에 저장된다.
# 함수 반환과정에서 임시변수가 필요한 이유를 설명하라
함수 종료 시 지역변수가 소멸되므로 반환값을 유지하기 위해 임시변수가 필요하다.

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
string GetLatterString(string s1, string s2);
```
두 문자열을 비교하여 사전 순으로 더 뒤에 오는 문자열을 반환하는 함수의 선언이다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
string s1("hello");
```
문자열 "hello"로 s1을 초기화한다.
```
string s2("world");
```
문자열 "world"로 s2를 초기화한다.
```
string res;
```
결과를 저장할 문자열 변수이다.
```
res = GetLatterString(s1, s2);
```
두 문자열을 비교하여 더 뒤에 오는 문자열을 res에 저장한다.
```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
결과 문자열을 출력한다.
```
string GetLatterString(string s1, string s2)
```
두 문자열을 비교하여 사전 순으로 뒤에 오는 문자열을 반환하는 함수이다.
```
if (s1 > s2)
```
문자열 비교를 통해 s1이 s2보다 뒤에 있는지 확인한다.
```
return s1;
```
s1이 더 뒤에 있으면 s1을 반환한다.
```
else
```
그 외의 경우 실행된다.
```
return s2;
```
s2를 반환한다.
# 실행결과
<img width="387" height="62" alt="과제2" src="https://github.com/user-attachments/assets/a3e40502-05bc-4166-9787-e9b926db2be1" />

# 실습과제 3

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
string GetLatterString(string* s1, string* s2);
```
문자열 포인터 두 개를 받아 사전 순으로 더 뒤에 오는 문자열을 반환하는 함수 선언이다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
string s1("hello");
```
문자열 "hello"로 s1을 초기화한다.
```
string s2("world");
```
문자열 "world"로 s2를 초기화한다.
```
string res;
```
결과를 저장할 문자열 변수이다.
```
res = GetLatterString(&s1, &s2);
```
s1과 s2의 주소를 전달하여 두 문자열을 비교한 결과를 res에 저장한다.
```
cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
```
비교 결과를 출력한다.
```
string GetLatterString(string* s1, string* s2)
```
문자열 포인터를 이용하여 두 문자열을 비교하는 함수이다.
```
if (*s1 > *s2)
```
포인터가 가리키는 실제 문자열 값을 비교한다.
```
return *s1;
```
s1이 더 뒤에 오는 문자열이면 해당 값을 반환한다.
```
else
```
그 외의 경우 실행된다.
```
return *s2;
```
s2가 더 뒤에 오는 문자열이면 해당 값을 반환한다.

# 실행결과
<img width="402" height="67" alt="과제3" src="https://github.com/user-attachments/assets/e3003efc-e29d-4be8-bb07-70e95974bbe4" />

# 실습과제 4

# 소스코드 설명

# 실행결과
<img width="257" height="87" alt="과제4" src="https://github.com/user-attachments/assets/4526225c-a3ee-464a-8bf8-1e7ff324d257" />
# 실습과제 5

# 소스코드 설명

# 실행결과
<img width="445" height="167" alt="과제5" src="https://github.com/user-attachments/assets/6067e760-60d6-43a0-8763-c9d1bc5ea3f8" />
