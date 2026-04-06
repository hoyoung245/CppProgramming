// **********************************************
// 제 목 : C++4장-2
// 날 짜 : 2026년 4월 6일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제3 **********************************************

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "입력할 정수의 개수를 입력하세요: ";
    cin >> n;

    if (n <= 0) return -1;

    int* p = new int[n];

    cout << n << "개의 정수를 입력 하시오.\n";
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) sum += p[i];

    cout << "평균값은 " << sum / n << "입니다.\n";

    delete[] p;
    return 0;
}

// 실습과제4 **********************************************

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "입력할 실수의 개수를 입력하세요: ";
    cin >> n;

    if (n <= 0) return -1;

    double* p = new double[n];

    cout << n << "개의 실수를 입력 하시오.\n";
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    double max = p[0];
    for (int i = 1; i < n; i++) {
        if (p[i] > max) max = p[i];
    }

    cout << "최대값은 " << max << "입니다.\n";

    delete[] p;
    return 0;
}

// 실습과제5 **********************************************

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "저장할 문자열의 크기를 입력하세요: ";
    cin >> n;

    char* str = new char[n + 1];

    cout << "문자열을 입력하시오: ";
    cin.ignore();
    cin.getline(str, n + 1);

    cout << "입력한 문자열은 " << str << "입니다.\n";

    delete[] str;
    return 0;
}
