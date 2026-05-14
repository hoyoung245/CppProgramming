# 실습과제 1

# 일반생성자와 복사생성자의 차이는?
반 생성자는 객체를 처음 생성하고 초기화할 때 사용하고, 복사 생성자는 기존 객체를 복사하여 새로운 객체를 만들 때 사용한다.
# 대입연산과 얕은 복사생성자의 차이는 무엇인가?
대입 연산은 이미 생성된 객체에 값을 복사하는 것이고, 얕은 복사 생성자는 객체를 생성하면서 멤버 값을 그대로 복사하는 것이다.
# 지금까지 배운 내용기준으로 컴파일러가 자동으로 추가하는 멤버함수는 어떤 것이 있는가?(4가지)
컴파일러가 자동으로 추가하는 멤버 함수는 디폴트 생성자, 디폴트 소멸자, 디폴트 복사 생성자, 디폴트 대입 연산자 함수이다.


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
class Person
```
Person 클래스를 선언한다.
```
string name;
```
사람의 이름을 저장하는 문자열 멤버 변수이다.
```
int id;
```
사람의 번호를 저장하는 정수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Person(int id, string name);
```
번호와 이름을 받아 객체를 생성하는 생성자 선언이다.
```
void changeName(string name);
```
이름을 변경하는 함수 선언이다.
```
void show();
```
객체의 정보를 출력하는 함수 선언이다.
```
Person::Person(int id, string name)
```
생성자를 정의하는 부분이다.
```
this->id = id;
```
매개변수 id 값을 멤버 변수 id에 저장한다.
```
this->name = name;
```
매개변수 name 값을 멤버 변수 name에 저장한다.
```
void Person::changeName(string name)
```
이름을 변경하는 함수이다.
```
this->name = name;
```
새로운 이름으로 변경한다.
```
void Person::show()
```
객체의 정보를 출력하는 함수이다.
```
cout << id << ", " << name << endl;
```
번호와 이름을 출력한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Person father(1, "Kitae");
```
번호가 1이고 이름이 Kitae인 Person 객체 father를 생성한다.
```
Person daughter(father);
```
복사 생성자를 이용하여 father 객체를 복사한 daughter 객체를 생성한다.
```
cout << "daughter 객체 생성 직후 ----" << endl;
```
객체 생성 직후 메시지를 출력한다.
```
father.show();
```
father 객체의 정보를 출력한다.
```
daughter.show();
```
daughter 객체의 정보를 출력한다.
```
daughter.changeName("Grace");
```
daughter 객체의 이름을 Grace로 변경한다.
```
cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
```
이름 변경 후 메시지를 출력한다.
```
father.show();
```
father 객체의 정보를 다시 출력한다.
```
daughter.show();
```
daughter 객체의 변경된 정보를 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.


# 실행결과
<img width="366" height="156" alt="과제2" src="https://github.com/user-attachments/assets/c1057cdc-da90-4755-bca6-8663286d40d9" />

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
class MyStack
```
정수를 저장하는 스택 클래스를 선언한다.
```
int* p;
```
스택 데이터를 저장할 동적 배열 포인터이다.
```
int size;
```
스택의 최대 크기를 저장하는 변수이다.
```
int tos;
```
스택의 top 위치를 저장하는 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
MyStack()
```
기본 생성자이다.
```
size = 10;
```
스택의 기본 크기를 10으로 설정한다.
```
tos = 0;
```
스택이 비어 있으므로 top 위치를 0으로 초기화한다.
```
p = new int[size];
```
정수형 배열을 동적으로 생성한다.
```
MyStack(int size)
```
스택 크기를 매개변수로 받는 생성자이다.
```
this->size = size;
```
입력받은 크기를 멤버 변수 size에 저장한다.
```
tos = 0;
```
스택의 top 위치를 0으로 초기화한다.
```
p = new int[size];
```
입력받은 크기만큼 배열을 동적으로 생성한다.
```
MyStack(const MyStack& src)
```
복사 생성자이다.
```
this->size = src.size;
```
원본 객체의 size 값을 복사한다.
```
this->tos = src.tos;
```
원본 객체의 tos 값을 복사한다.
```
p = new int[size];
```
새로운 배열 메모리를 동적으로 생성한다.
```
for (int i = 0; i < tos; i++)
```
원본 객체의 데이터를 복사하기 위한 반복문이다.
```
p[i] = src.p[i];
```
원본 배열의 값을 새 배열에 복사한다.
```
~MyStack()
```
소멸자이다.
```
delete[] p;
```
동적으로 할당한 배열 메모리를 해제한다.
```
bool push(int n)
```
스택에 값을 저장하는 함수이다.
```
if (tos == size)
```
스택이 가득 찼는지 확인한다.
```
return false;
```
스택이 가득 차면 false를 반환한다.
```
p[tos] = n;
```
현재 top 위치에 값을 저장한다.
```
tos++;
```
top 위치를 증가시킨다.
```
return true;
```
정상적으로 저장되면 true를 반환한다.
```
bool pop(int& n)
```
스택에서 값을 꺼내는 함수이다.
```
if (tos == 0)
```
스택이 비어 있는지 확인한다.
```
return false;
```
스택이 비어 있으면 false를 반환한다.
```
tos--;
```
top 위치를 감소시킨다.
```
n = p[tos];
```
top 위치의 값을 n에 저장한다.
```
return true;
```
정상적으로 값을 꺼내면 true를 반환한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
MyStack a(10);
```
크기가 10인 스택 객체 a를 생성한다.
```
a.push(10);
```
스택 a에 10을 저장한다.
```
a.push(20);
```
스택 a에 20을 저장한다.
```
MyStack b = a;
```
복사 생성자를 이용하여 스택 a를 복사한 b를 생성한다.
```
b.push(30);
```
스택 b에 30을 저장한다.
```
int n;
```
팝한 값을 저장할 변수이다.
```
a.pop(n);
```
스택 a에서 값을 꺼내어 n에 저장한다.
```
cout << "스택 a에서 팝한 값 " << n << endl;
```
스택 a에서 꺼낸 값을 출력한다.
```
b.pop(n);
```
스택 b에서 값을 꺼내어 n에 저장한다.
```
cout << "스택 b에서 팝한 값 " << n << endl;
```
스택 b에서 꺼낸 값을 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.


# 실행결과
<img width="252" height="83" alt="과제 3" src="https://github.com/user-attachments/assets/81a3cd1a-1c14-4c7c-9c4a-72d76a1a6061" />



# 실습과제 4

# 소스코드 설명


# 실행결과
<img width="275" height="81" alt="과제 4" src="https://github.com/user-attachments/assets/93344c5a-c7bf-434d-93e8-9d98ca064c4a" />

