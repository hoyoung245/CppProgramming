// **********************************************
// 제 목 : C++5장-3
// 날 짜 : 2026년 5월 11일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
#include <string>

using namespace std;

void Uppercase(string& s);

int main() {
    string s1("hello");

    cout << "변환전 문자열 " << s1 << endl;

    Uppercase(s1);

    cout << "변환후 문자열 " << s1 << endl;

    return 0;
}

void Uppercase(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
}
// 실습과제3 **********************************************

#include<iostream> // 입출력 사용
using namespace std; // std 네임스페이스 사용

// swap 함수 선언
void swap(int& a, int& b);

int main()
{
    int x, y; // 두 정수 변수 선언

    cout << "정수x를 입력 하시오: "; // x 입력 안내
    cin >> x; // x 입력

    cout << "정수y를 입력 하시오: "; // y 입력 안내
    cin >> y; // y 입력

    // swap 함수 호출 전 값 출력
    cout << "swap함수 호출 전 x=" << x << ", y=" << y << endl;

    swap(x, y); // 두 변수 값 교환

    // swap 함수 호출 후 값 출력
    cout << "swap함수 호출 후 x=" << x << ", y=" << y << endl;

    return 0; // 프로그램 종료
}

// 두 정수 값을 교환하는 함수
void swap(int& a, int& b)
{
    int temp; // 임시 변수 선언

    temp = a; // a 값을 temp에 저장
    a = b; // b 값을 a에 저장
    b = temp; // temp 값을 b에 저장
}

    temp = a;
    a = b;
    b = temp;
}

// 실습과제4 **********************************************

#include<iostream> // 입출력 사용
using namespace std; // std 네임스페이스 사용

// 함수 선언
void get_parts(double number, int& integerPart, double& decimalPart);

int main()
{
    double number; // 실수 저장 변수
    int integerPart; // 정수부 저장 변수
    double decimalPart; // 소수부 저장 변수

    cout << "실수를 입력하시오 : "; // 입력 안내
    cin >> number; // 실수 입력

    // 정수부와 소수부 계산 함수 호출
    get_parts(number, integerPart, decimalPart);

    // 정수부 출력
    cout << "정수부 : " << integerPart << endl;

    // 소수부 출력
    cout << "소수부 : " << decimalPart << endl;

    return 0; // 프로그램 종료
}

// 정수부와 소수부를 구하는 함수
void get_parts(double number, int& integerPart, double& decimalPart)
{
    integerPart = (int)number; // 정수부 저장
    decimalPart = number - integerPart; // 소수부 계산
}
