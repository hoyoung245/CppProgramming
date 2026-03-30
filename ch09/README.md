# 실습과제 1

#  함수를 사용하는 이유를 설명하라
코드의 중복을 줄이고, 재사용성을 높이며, 프로그램을 구조적으로 만들기 위해 사용한다.
# 짧은 코드를 갖는 함수를 자주 호출하면 발생하는 함수의 오버헤드를 설명하라.
함수 호출 시 리턴 주소 저장, 레지스터 저장/복구, 매개변수 전달 등의 추가 작업이 발생하여 실행 시간이 증가한다.
# 12페이지 예제에서 인라인함수가 치환되면 private 멤버변수를 직접 접근하게 된다. 문법오류가 아닌가?
문법 오류가 아니다. 컴파일 과정에서 함수 코드가 삽입되지만 여전히 클래스 내부 코드로 처리된다.
# 인라인함수는 소스코드에서는 함수이지만 기계어로 번역되면 함수가 아니다. 이렇게 복잡하게 만든 이유를 설명하라. 다시 말해, 처음부터 함수를 안 쓰면 안되나요?
가능하지만 코드 관리와 재사용성이 떨어지고 객체지향의 장점을 사용할 수 없기 때문에 함수를 사용한다.
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
private:
```
클래스 내부에서만 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
double width;
```
삼각형의 폭을 저장하는 실수형 멤버 변수이다.
```
double height;
```
삼각형의 높이를 저장하는 실수형 멤버 변수이다.
```
public:
```
외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.
```
Triangle()
```
기본 생성자이다.
```
width = 1;
```
```
height = 1;
```
삼각형의 폭과 높이를 1로 초기화한다.
```
cout << "폭1,높이1인 삼각형 생성" << endl;
```
객체가 생성될 때 메시지를 출력한다.
```
Triangle(double w, double h)
```
폭과 높이를 받아 초기화하는 생성자이다.
```
width = w;
```
```
height = h;
```
입력받은 값으로 폭과 높이를 설정한다.
```
~Triangle()
```
객체가 소멸될 때 실행되는 소멸자이다.
```
cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
```
객체가 소멸될 때 메시지를 출력한다.
```
void setWidth(double w)
```
폭 값을 설정하는 멤버 함수이다.
```
width = w;
```
폭을 w 값으로 변경한다.
```
void setHeight(double h)
```
높이 값을 설정하는 멤버 함수이다.
```
height = h;
```
높이를 h 값으로 변경한다.
```
double getArea()
```
삼각형의 면적을 계산하는 멤버 함수이다.
```
return width * height / 2;
```
폭과 높이를 이용하여 삼각형의 면적을 계산한다.
```
int main()
```
프로그램이 시작되는 메인 함수이다.
```
Triangle tri;
```
Triangle 객체 tri를 생성한다.
```
tri.setWidth(3);
```
삼각형의 폭을 3으로 설정한다.
```
tri.setHeight(5);
```
삼각형의 높이를 5로 설정한다.
```
cout << "삼각형의 면적은 " << tri.getArea() << endl;
```
삼각형의 면적을 계산하여 출력한다.
```
return 0;
```
프로그램을 정상적으로 종료한다.
# 실행결과
<img width="238" height="108" alt="과제2" src="https://github.com/user-attachments/assets/b3257de7-0f71-4cd7-86a1-e2cf29df055b" />



# 실습과제 3 문제 2번

# 소스코드 설명

# 실행결과
<img width="238" height="219" alt="과제3 2" src="https://github.com/user-attachments/assets/83e6d466-bb69-444c-b20f-7b812b255697" />



# 실습과제 3 문제 3번

# 소스코드 설명

# 실행결과
<img width="302" height="106" alt="과제3 3" src="https://github.com/user-attachments/assets/94a7d4a9-c00d-4f24-8283-f5a1dfd0aded" />

# 실습과제 3 문제 7번

# 소스코드 설명

# 실행결과
<img width="253" height="93" alt="과제 3 7" src="https://github.com/user-attachments/assets/58dfdbf6-c19a-4b8c-8acd-27bafe85f538" />
