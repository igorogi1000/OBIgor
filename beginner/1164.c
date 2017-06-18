#include <stdio.h>

int isPerfeito(int x) {
	int soma = 0;
	for (int j=1; j<x; j++) {
		if (x%j == 0)
			soma += j;
	}
	return (soma == x) ? 1 : 0;
}
	
int main(void) {
	int n;
	
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++) {
		int x;
		scanf("%d", &x);
		if (isPerfeito(x))
			printf("%d eh perfeito\n", x);
		else
			printf("%d nao eh perfeito\n", x);
	}
}