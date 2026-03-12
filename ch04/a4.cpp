// **********************************************
// 제 목 : C++2장-2
// 날 짜 : 2026년 3월12일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2
#include <iostream>
using namespace std;

int main() {

    int x, y;

    cout << "정수 x를 입력 하시오: ";
    cin >> x;

    y = x * x + 2 * x - 5;

    cout << "x=" << x << " 일때 y의 값은 " << y << "입니다." << endl;

    return 0;
}

// 실습과제3
#include <iostream>
using namespace std;

int main() {

    int n;
    char name[50];
    char address[100];

    cout << "학번을 입력하시오: ";
    cin >> n;

    cin.ignore();

    cout << "이름을 입력하시오: ";
    cin.getline(name, 50);

    cout << "주소를 입력하시오: ";
    cin.getline(address, 100);

    cout << "1.학번:" << n << endl;
    cout << "2.이름:" << name << endl;
    cout << "3.주소:" << address << endl;

    return 0;
}

// 실습과제4
#include <iostream>
using namespace std;

int main() {

    double a, sum = 0;

    cout << "실수 5개를 입력하세요: ";

    for (int i = 0; i < 5; i++) {
        cin >> a;

        if (a > 0)
            sum += a;
    }

    cout << "양수 합은: " << sum << "입니다" << endl;

    return 0;
}

// 실습과제5
#include <iostream>
using namespace std;

int main() {

    char text[100];

    cout << "빈칸 없이 문자열을 입력하세요>>";
    cin >> text;

    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i] << " ";
    }

    return 0;
}

// 실습과제6

