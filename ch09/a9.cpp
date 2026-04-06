// **********************************************
// 제 목 : C++3장-5
// 날 짜 : 2026년 3월30일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;

class Triangle {
private:
    double width;
    double height;

public:
    Triangle() { 
        width = 1; 
        height = 1; 
        cout << "폭1,높이1인 삼각형 생성" << endl;
    }

    Triangle(double w, double h) { 
        width = w; 
        height = h; 
    }

    ~Triangle() { 
        cout << "폭" << width << ",높이" << height << "인 삼각형 소멸" << endl;
    }

    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    double getArea() { return width * height / 2; }
};

int main() {
    Triangle tri;
    tri.setWidth(3);
    tri.setHeight(5);
    cout << "삼각형의 면적은 " << tri.getArea() << endl;
    return 0;
}

// 실습과제3 문제 2번 **********************************************

#include <iostream>
using namespace std;

class Coffee {
private:
    int coffee, sugar, milk, water;

public:
    Coffee() {
        coffee = 10;
        sugar = 0;
        milk = 0;
        water = 0;
    }

    Coffee(int c, int s, int m, int w) {
        coffee = c;
        sugar = s;
        milk = m;
        water = w;
    }

    void show() {
        cout << "coffee ";
        for(int i=0;i<coffee;i++) cout << "*";
        cout << endl;

        cout << "sugar ";
        for(int i=0;i<sugar;i++) cout << "*";
        cout << endl;

        cout << "milk ";
        for(int i=0;i<milk;i++) cout << "*";
        cout << endl;

        cout << "water ";
        for(int i=0;i<water;i++) cout << "*";
        cout << endl;
    }
};

int main() {
    Coffee espresso;
    Coffee americano(5,0,0,10);
    Coffee cappucchino(5,1,5,2);
    Coffee mySweet(3,7,5,5);

    espresso.show();
    cout << endl;
    mySweet.show();
}

// 실습과제3 문제 3번 **********************************************

#include <iostream>
using namespace std;

class Account {
private:
    string owner;
    int balance;

public:
    Account(string name) {
        owner = name;
        balance = 0;
    }

    void deposit(int money) {
        balance += money;
    }

    int withdraw(int money) {
        if(balance >= money) {
            balance -= money;
            return money;
        }
        else {
            int temp = balance;
            balance = 0;
            return temp;
        }
    }

    int inquiry() {
        return balance;
    }

    string getOwner() {
        return owner;
    }
};

int main() {
    Account a("황수희");
    a.deposit(20000);
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;

    int money = a.withdraw(15000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;

    money = a.withdraw(8000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
}

// 실습과제3 문제 7번 **********************************************

#include <iostream>
using namespace std;

class Storage {
private:
    double data[10];
    int count;

public:
    Storage() {
        count = 0;
    }

    void put(double value) {
        if(count < 10) {
            data[count] = value;
            count++;
        }
    }

    void dump() {
        for(int i=0;i<count;i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    double getAvg() {
        double sum = 0;
        for(int i=0;i<count;i++) {
            sum += data[i];
        }
        return sum / count;
    }
};

int main() {
    Storage a;
    a.put(36.7);
    a.put(36.9);
    a.put(36.4);

    a.dump();
    cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
}


