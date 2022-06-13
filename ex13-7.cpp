#include<iostream>
#include<string>
using namespace std;

int fact(int n) {
	if (n < 1) throw to_string(n) + ": �ڿ����� �ƴմϴ�.";
	if (n == 1) return 1;
	return n * fact(n - 1);
}

int main() {
	int n, r;

	try {
		while (true) {
			cout << "�ڿ��� 2�� �Է� : ";
			cin >> n >> r;
			cout << comb(n, r) << endl;
		}
	}
	catch (const string& e) {
		cout << e << endl;
	}
}