// **********************************************
// 제 목 : C++4장-4
// 날 짜 : 2026년 4월 17일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, ss;
	int num = 1;
	while (true) {
		cout << "문자열 입력: ";
		getline(cin, s, '\n');

		if (s == "quit") break;
		ss += '<' + to_string(num) + '>' + s;
		cout << "이어진 문자열: " << ss << endl;
		num++;
	}
	return 0;
}
// 실습과제3 **********************************************

#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int cnt=0;
	cout << "문자열 입력: ";
	getline(cin, s, '\n');
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == 'a') 
			cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다.";
	return 0;
}
