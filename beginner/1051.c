#include <stdio.h>

int main(void) {
	int n;
	int menor;
	int pos;
	scanf("%d", &n);
	
	for (int i=0; i<n; i++) {
		int x;
		scanf("%d", &x);
		
		if (!i) {
			menor = x;
			pos = i;
		}
		if (x < menor) {
			menor = x;
			pos = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
}