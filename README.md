# 소스코드 설명

```
#include <iostream>
```

* 입출력을 위한 헤더파일 iostream을 포함

```
using namespace std;
```

* std 네임스페이스를 사용하여 cout, cin 등을 간단하게 사용

```
int main()
```

* 메인 함수 시작

```
int n1, n2, n3, n4;
```

* 정수 4개를 저장할 변수 선언

```
cout << "4개의 정수를 입력하세요: ";
```

* 사용자에게 정수 입력 안내 메시지 출력

```
cin >> n1 >> n2 >> n3 >> n4;
```

* 사용자로부터 정수 4개 입력 받음

```
int sum = n1 + n2 + n3 + n4;
```

* 입력된 정수의 합 계산

```
double avg = sum / 4.0;
```

* 평균 계산 (소수점 계산을 위해 4.0으로 나눔)

```
cout << "평균: " << avg << endl;
```

* 계산된 평균을 화면에 출력

```
return 0;
```

* 프로그램 정상 종료

# 실행결과

<img width="1111" height="324" alt="과제1" src="https://github.com/user-attachments/assets/06c2005c-9f6b-4164-8588-6af059066e33" />
