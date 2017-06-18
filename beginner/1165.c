#include <stdio.h>

int isPrimo(int x) {
	int soma = 2;
	for (int j=2; j<x; j++) {
		if (x%j == 0)
			soma ++;
	}
	return soma > 2 ? 0 : 1;
}
	
int main(void) {
	int n;
	
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++) {
		int x;
		scanf("%d", &x);
		if (isPrimo(x))
			printf("%d eh primo\n", x);
		else
			printf("%d nao eh primo\n", x);
	}
}