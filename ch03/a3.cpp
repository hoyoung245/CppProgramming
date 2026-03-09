// **********************************************
// 제 목 : C++2장-1
// 날 짜 : 2026년 3월 일
// 작성자 : 2301417 석호영
// **********************************************


// 실습과제2
#include <iostream>
using namespace std;

int main() {

    cout << "Name : hong gil dong" << endl;
    cout << "Address : gunsan daehakro 558" << endl;
    cout << "ID : 201012" << endl;
    cout << "Car : Benz" << endl;

    return 0;
}

// 실습과제3
#include <iostream>
using namespace std;

int main() {

    cout << "gunsandae \"honggildong\"" << endl;
    cout << "\"congratulation\"" << endl;
    cout << "100% \\chwieoblyul\\" << endl;

    return 0;
}

// 실습과제4
#include <iostream>
using namespace std;

int main() {

    cout << "*   *" << endl;
    cout << " * * " << endl;
    cout << "  *  " << endl;
    cout << " * * " << endl;
    cout << "*   *" << endl;

    return 0;
}

// 실습과제5
#include <iostream>
using namespace std;

int main() {

    for (int n = 1; n <= 4; n++) {

        for (int i = 0; i < n; i++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
