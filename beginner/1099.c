#include <stdio.h>

int main(void) {
	int i, j, k;
	int n;
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		int x, y, a, b;
		scanf("%d %d", &x, &y);
		
		a = (x < y) ? x : y;
		b = (a == x) ? y : x;
		
		int soma = 0;
		for (j=(a%2==0) ? a+1 : a+2; j<b; j+=2) {
			soma += j;
		}
		printf("%d\n", soma);
	}
	
	return 0;
}