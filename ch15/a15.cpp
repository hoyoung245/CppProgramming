// **********************************************
// 제 목 : C++5장-2
// 날 짜 : 2026년 5월 10일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include<iostream> // 입출력 사용
using namespace std; // std 네임스페이스 사용

// 함수 선언
void add2(int& value);

int main(void)
{
    int number; // 정수형 변수 선언

    cout << "정수를 입력하세요 : "; // 입력 안내문 출력
    cin >> number; // 사용자로부터 정수 입력

    add2(number); // number를 함수에 전달

    cout << "2만큼 증가한 값 : " << number << endl; // 결과 출력

    return 0; // 프로그램 종료
}

// number 값을 2 증가시키는 함수
void add2(int& value)
{
    value += 2; // 전달받은 값을 2 증가
}


// 실습과제3 **********************************************

#include<iostream>
using namespace std;

void swap(int& a, int& b);

int main()
{
    int x, y;

    cout << "정수x를 입력 하시오: ";
    cin >> x;

    cout << "정수y를 입력 하시오: ";
    cin >> y;

    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;

    swap(x, y);

    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;

    return 0;
}

void swap(int& a, int& b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}
