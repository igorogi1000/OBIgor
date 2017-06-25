#include <stdio.h>

int f(int n) {
	if (n > 1)
		return n * f(n-1);
	return n;
}

int main(void) {
	int a;
	scanf("%d", &a);
	
	printf("%d\n", f(a));
}