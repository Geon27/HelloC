#include<stdio.h>

const double PI = 3.14159265358979;

double getArea(double r) {
	return PI * r * r;
}

int main() {
	printf("%f", getArea(10));
}