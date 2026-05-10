// **********************************************
// 제 목 : C++5장-2
// 날 짜 : 2026년 5월 10일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include<iostream>
using namespace std;

void add2(int& value);

int main(void)
{
    int number;

    cout << "정수를 입력하세요 : ";
    cin >> number;

    add2(number);

    cout << "2만큼 증가한 값 : " << number << endl;

    return 0;
}

void add2(int& value)
{
    value += 2;
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
