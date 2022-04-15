#include<stdio.h>

struct Point {
	int x, y;

	void swapXY() {
		int tmp = x;
		x = y;
		y = tmp;
	}
};

int main(){
	Point pos = { 3, 4 };

	pos.swapXY();

	printf("(%d, %d)\n", pos.x, pos.y);
}