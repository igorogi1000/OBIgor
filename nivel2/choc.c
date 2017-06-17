#include <stdio.h>

int n, i;
int soma = 0;

int main(void) {
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		int I;
		scanf("%d", &I);
		soma += I;
	}
	soma -= n;
	printf("%d\n", soma);
}