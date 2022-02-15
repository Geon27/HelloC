#include<stdio.h>

int main() {
	double weight, height;

	printf("체중(kg) 입력 : ");
	scanf("%lf", &weight);
	printf("키(m) 입력 : ");
	scanf("%lf", &height);

	printf("BMI: %f\n", weight / (height * height));
}