#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "생성자가 호출되었습니다." << endl;
	}
	~MyClass() {
		cout << "소멸자가 호출되었습니다." << endl;
	}
};

// MyClass globalobj;

void testLocalobj() {
	cout << "=== testLocalobj 함수 시작 ===" << endl;
	MyClass localobj;
	cout << "=== testLocalobj 함수 종료 ===" << endl;
}

int main() {
	cout << "=== main 함수 시작 ===" << endl;
	testLocalobj();
	cout << "=== main 함수 끝 ===" << endl;
}