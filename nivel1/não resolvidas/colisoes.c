#include <stdio.h>
#include <string.h>

struct ret {
	int x0, y0, x1, y1;
};

struct ret r1;
struct ret r2;
int r = 0;

int col(int a0, int a1, int b0, int b1) {
	int resp = 0;
	if ((b0 <= a1 && b0 >= a0) || (b1 <= a1 && b1 >= a0))
		resp = 1;
	else if ((a0 <= b1 && a0 >= b0) || (a1 <= b1 && a1 >= b0))
		resp = 1;
	return resp;
}

int main(void) {
	scanf("%d %d %d %d", &r1.x0, &r1.y0, &r1.x1, &r1.y1);
	scanf("%d %d %d %d", &r2.x0, &r2.y0, &r2.x1, &r2.y1);
	
	if (col(r1.x0, r1.x1, r2.x0, r2.x1) && col(r1.y0, r1.y1, r2.y0, r2.y1))
		r = 1;
	printf("%d", r);
}