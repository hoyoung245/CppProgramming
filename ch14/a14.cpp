// **********************************************
// 제 목 : C++5장-1
// 날 짜 : 2026년 5월 6일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
#include <string>
using namespace std;

string GetLatterString(string s1, string s2);

int main() {
    string s1("hello");
    string s2("world");
    string res;

    res = GetLatterString(s1, s2);
    cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}

string GetLatterString(string s1, string s2) {
    if (s1 > s2)
        return s1;
    else
        return s2;
}

// 실습과제3 **********************************************

#include <iostream>
#include <string>
using namespace std;

string GetLatterString(string* s1, string* s2);

int main() {
    string s1("hello");
    string s2("world");
    string res;

    res = GetLatterString(&s1, &s2);
    cout << "사전에서 뒤에 나오는 문자열은 " << res << "입니다." << endl;
}

string GetLatterString(string* s1, string* s2) {
    if (*s1 > *s2)
        return *s1;
    else
        return *s2;
}

// 실습과제4 **********************************************

#include <iostream>
#include <string>
using namespace std;

void SwapString(string& s1, string& s2);

int main() {
    string s1("hello");
    string s2("world");

    cout << "호출전 s1:" << s1 << " s2:" << s2 << endl;
    SwapString(s1, s2);
    cout << "호출후 s1:" << s1 << " s2:" << s2 << endl;
}

void SwapString(string& s1, string& s2) {
    string tmp = s1;
    s1 = s2;
    s2 = tmp;
}
// 실습과제5 **********************************************

#include <iostream>
#include <string>
using namespace std;

string GetMaxString(string arr[], int size);

int main() {
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "이름 >> ";
        getline(cin, names[i]);
    }

    string res = GetMaxString(names, 5);
    cout << "사전에서 가장 뒤에 나오는 문자열은 " << res << endl;
}

string GetMaxString(string arr[], int size) {
    string max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}
