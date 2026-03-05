// **********************************************
// 제 목 : 정수 4개의 평균을 구하는 프로그램
// 날 짜 : 2026년 3월 5일
// 작성자 : 2301417 석호영
// **********************************************

#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4;

    cout << "4개의 정수를 입력하세요: ";
    cin >> n1 >> n2 >> n3 >> n4;

    int sum = n1 + n2 + n3 + n4;
    double avg = sum / 4.0;

    cout << "평균: " << avg << endl;

    return 0;
}
