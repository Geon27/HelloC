#include<iostream>
using namespace std;

double f1(double x) {
	return x * x / 10;
}
double f2(int n) {
	return (double)n * n / 10;
}

template<typename func_t>
void printFnVal(func_t f, int st, int en) {
	for (int i = st; i <= en; i++) {
		cout << f(i) << endl;
	}
}

int main() {
	printFnVal(f1, 0, 10);
	printFnVal(f2, 0, 10);
}