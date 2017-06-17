#include <stdio.h>

int main(void) {
	int x,y,i;
	scanf("%d %d", &x, &y);
	int a, b;
	int soma = 0;
	
	if (x < y) {
		a = x;
		b = y;
	}
	
	else {
		b = x;
		a = y;
	}
	
	for (i=a; i<=b; i++) {
		soma += (i%13 != 0) ? i : 0;
	}
	
	printf("%d\n", soma);
	return 0;
}