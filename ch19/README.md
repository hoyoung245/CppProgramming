# 실습과제 1

# static 멤버변수는 클래스 선언부에 선언하고 외부에서다시 선언하는 이유를 설명하라.
static 멤버변수는 클래스 안에서는 선언만 되고 실제 메모리가 생성되지 않으므로, 클래스 외부에서 다시 정의하여 메모리를 할당해야 한다.
# static 멤버함수의 클래스 구현부에 static 키워드를 붙이면 안되는 이유를 설명하라
static 멤버함수는 클래스 선언부에서 이미 static 속성이 결정되므로, 구현부에서 다시 static을 붙이면 중복 지정 오류가 발생한다.
```
```

# 실습과제 2

# 소스코드 설명

```
#include <iostream>

```

표준 입출력을 사용하기 위해 iostream 헤더파일을 포함한다.

```
using namespace std;

```

std 네임스페이스를 사용하여 std:: 없이 cout, endl 등을 사용한다.

```
class MyMath

```

배열의 최대값과 최소값을 구하는 기능을 가진 클래스를 선언한다.

```
public:
```

외부에서 사용할 수 있는 멤버를 선언하는 접근 지정자이다.

```
static int GetMax(int arr[], int size)

```
배열에서 가장 큰 값을 찾는 static 함수이다.

```
int max = arr[0];

```
배열의 첫 번째 값을 최대값으로 초기화한다.

```
for(int i = 1; i < size; i++)

```
배열의 두 번째 요소부터 마지막 요소까지 반복한다.

```
if(arr[i] > max)

```
현재 배열 값이 max보다 큰지 비교한다.

```
max = arr[i];

```
더 큰 값이 발견되면 max 값을 변경한다.

```
return max;

```
최종 최대값을 반환한다.

```
static int GetMin(int arr[], int size)

```
배열에서 가장 작은 값을 찾는 static 함수이다.

```
int min = arr[0];

```
배열의 첫 번째 값을 최소값으로 초기화한다.

```
if(arr[i] < min)

```
현재 배열 값이 min보다 작은지 비교한다.

```
min = arr[i];

```
더 작은 값이 발견되면 min 값을 변경한다.

```
return min;

```
최종 최소값을 반환한다.

```
int main()

```
프로그램이 시작되는 메인 함수이다.

```
int x[5] = {20, 30, -5, 2, -30};

```
정수형 배열 x를 선언하고 값을 초기화한다.

```
MyMath::GetMax(x, 5)

```
클래스명으로 static 함수를 호출하여 배열의 최대값을 구한다.

```
cout << "최대값은 : " << MyMath::GetMax(x, 5) << endl;

```
배열의 최대값을 출력한다.

```
MyMath::GetMin(x, 5)

```
클래스명으로 static 함수를 호출하여 배열의 최소값을 구한다.
```
cout << "최소값은 : " << MyMath::GetMin(x, 5) << endl;

```
배열의 최소값을 출력한다.

```
return 0;
```
프로그램을 정상적으로 종료한다.


# 실행결과
<img width="215" height="88" alt="2" src="https://github.com/user-attachments/assets/507a41bc-6ff7-405b-8a89-25d0eb7993f7" />


# 실습과제 3

# 소스코드 설명


# 실행결과
<img width="253" height="92" alt="3" src="https://github.com/user-attachments/assets/f4721469-92df-43ca-b4ae-53fc04ec5ba4" />


# 실습과제 3

# 소스코드 설명


# 실행결과

# 실습과제 4 - 1

# 소스코드 설명


# 실행결과

# 실습과제 4 - 2

# 소스코드 설명


# 실행결과

# 실습과제 4 - 3

# 소스코드 설명


# 실행결과
