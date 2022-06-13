#include<iostream>
#include<string>
using namespace std;

int fact(int n) {
	if (n < 1) throw to_string(n) + ": 자연수가 아닙니다.";
	if (n == 1) return 1;
	return n * fact(n - 1);
}

int main() {
	int n, r;

	try {
		while (true) {
			cout << "자연수 2개 입력 : ";
			cin >> n >> r;
			cout << comb(n, r) << endl;
		}
	}
	catch (const string& e) {
		cout << e << endl;
	}
}