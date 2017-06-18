#include <stdio.h>
#include <string.h>
#include <math.h>
	
int main(void) {
	int qtd;
	
	scanf("%d", &qtd);
	
	printf("0 ");
	
	int atual = 1;
	int anterior = 0;
	
	for (int i=1; i<qtd; i++) {
		printf("%d", atual);
		if (!(i == qtd-1))
			printf(" ");
		else 
			printf("\n");
		int a = atual;
		atual = atual + anterior;
		anterior = a;
	}
}