#include<iostream>
using namespace std;

int fact(int n) {
	if (n == 1) return 1;
	return n * fact(n - 1);
}

int main() {
	int n;

	try {
		cout << "�ڿ����� �Է��ϼ��� : ";
		cin >> n;
		if (n <= 0) {
			throw n;
		}
		cout << n << "! = " << fact(n) << endl;
	}
	catch (int e) {
		cout << e << ": �ڿ����� �ƴմϴ�." << endl;
	}
}