#include<stdio.h>
#include<string.h>

int main() {
	int a;

	printf("���� �Է� : ");
	scanf("%d", &a);

	char sa[10];
	sprintf(sa, "%d", a);

	int len = strlen(sa);
	printf("%d��(��) %d�ڸ� ���Դϴ�.\n", a, len);
}