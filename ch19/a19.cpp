// **********************************************
// 제 목 : C++6장-3
// 날 짜 : 2026년 5월 20일
// 작성자 : 2301417 석호영
// **********************************************

// 실습과제2 **********************************************

#include <iostream>
using namespace std;

class MyMath {
public:
    static int GetMax(int arr[], int size) {
        int max = arr[0];

        for(int i = 1; i < size; i++) {
            if(arr[i] > max)
                max = arr[i];
        }

        return max;
    }

    static int GetMin(int arr[], int size) {
        int min = arr[0];

        for(int i = 1; i < size; i++) {
            if(arr[i] < min)
                min = arr[i];
        }

        return min;
    }
};

int main() {
    int x[5] = {20, 30, -5, 2, -30};

    cout << "최대값은 : " << MyMath::GetMax(x, 5) << endl;
    cout << "최소값은 : " << MyMath::GetMin(x, 5) << endl;

    return 0;
}

// 실습과제3 **********************************************

#include <iostream>
using namespace std;

class Triangle {
private:
    static int numOfTriangle;

public:
    Triangle() {
        numOfTriangle++;
    }

    ~Triangle() {
        numOfTriangle--;
    }

    static int getNumofTriangle() {
        return numOfTriangle;
    }
};

int Triangle::numOfTriangle = 0;

int main() {
    Triangle* tri1 = new Triangle[5];

    cout << "생성된 삼각형의 개수 : "
        << Triangle::getNumofTriangle() << endl;

    delete[] tri1;

    Triangle tri2[15];

    cout << "생성된 삼각형의 개수 : "
        << Triangle::getNumofTriangle() << endl;

    return 0;
}
// 실습과제4-1 ********************************************
#include <iostream>
using namespace std;

int add(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int add(int arr[], int size, int value) {
    int sum = value;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };

    int c = add(a, 5);
    int d = add(b, 3, c);

    cout << c << endl;
    cout << d << endl;

    return 0;
}
// 실습과제4-1 *********************************************

#include <iostream>
using namespace std;

int add(int arr[], int size, int value = 0) {
    int sum = value;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int a[] = { 1,2,3,4,5 };
    int b[] = { 6,7,8,9,10 };

    int c = add(a, 5);
    int d = add(b, 3, c);

    cout << c << endl;
    cout << d << endl;

    return 0;
}
// 실습과제4-2 *********************************************

#include <iostream>
using namespace std;

void printMatrix() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void printMatrix(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << '*';
        }
        cout << endl;
    }
}

void printMatrix(int row, int col, char ch) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    printMatrix();
    printMatrix(2, 5, 'a');
    printMatrix(1, 10);

    return 0;
}
// 실습과제4-2 *********************************************

#include <iostream>
using namespace std;

void printMatrix(int row = 2, int col = 2, char ch = '*') {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    printMatrix();
    printMatrix(2, 5, 'a');
    printMatrix(1, 10);

    return 0;
}


