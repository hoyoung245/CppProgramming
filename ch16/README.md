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


# 실행결과
<img width="252" height="83" alt="과제 3" src="https://github.com/user-attachments/assets/81a3cd1a-1c14-4c7c-9c4a-72d76a1a6061" />



# 실습과제 4

# 소스코드 설명


# 실행결과

