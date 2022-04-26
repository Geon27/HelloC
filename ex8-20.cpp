#include<stdio.h>
#include<string.h>

int main() {
	int a;

	printf("정수 입력 : ");
	scanf("%d", &a);

	char sa[10];
	sprintf(sa, "%d", a);

	int len = strlen(sa);
	printf("%d은(는) %d자리 수입니다.\n", a, len);
}