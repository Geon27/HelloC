#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "�����ڰ� ȣ��Ǿ����ϴ�." << endl;
	}
	~MyClass() {
		cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
	}
};

MyClass globalobj;

void testLocalobj() {
	cout << "=== testLocalobj �Լ� ���� ===" << endl;
	// MyClass localobj;
	cout << "=== testLocalobj �Լ� ���� ===" << endl;
}

int main() {
	cout << "=== main �Լ� ���� ===" << endl;
	testLocalobj();
	cout << "=== main �Լ� �� ===" << endl;
}