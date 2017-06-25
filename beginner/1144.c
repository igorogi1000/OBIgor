#include <stdio.h>

int main(void) {
	int sub = 1;
	int sum1 = 1;
	int sum2 = 2;
	int a, b, c, i;
	b = 1;
	
	int n = 5;
	
	for (a = 1; a <= n; a++) {
		c = a*b;
		if (a*a != b) {
			c -= sub;
			sub++
		}
		printf("%d %d %d\n", a, b, c);
		b++;
		c = a*b;
		printf("%d %d %d\n", a, b, c);
		b += sum2;
		sum2 += 2;
	}
}