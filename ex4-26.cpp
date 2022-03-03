#include<stdio.h>

int main() {
	int n;

	scanf("%d" & n);
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("* ");
		}
		else {
			printf("%d ", i);
		}
	}
}