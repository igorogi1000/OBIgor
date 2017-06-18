#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {
	int a, n;
	scanf("%d %d", &a, &n);
	
	while (n <= 0) {
		scanf("%d", &n);
	}
	
	int soma = 0;
	for (int i=0; i<n; i++) {
		soma += i + a;
	}
	
	printf("%d\n", soma);
}