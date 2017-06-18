#include <stdio.h>

int main() {
	int qtdPar=0, qtdImpar=0, qtdNegativo=0, qtdPositivo=0;
	
	int i;
	for (i=0; i<5; i++) {
		int x;
		scanf("%d", &x);
		
		if (x % 2 == 0)
			qtdPar++;
		else 
			qtdImpar++;
		
		if (x < 0)
			qtdNegativo++;
		
		else if (x > 0)
			qtdPositivo++;
	}
	
	printf("%d valor(es) par(es)\n", qtdPar);
	printf("%d valor(es) impar(es)\n", qtdImpar);
	printf("%d valor(es) positivo(s)\n", qtdPositivo);
	printf("%d valor(es) negativo(s)\n", qtdNegativo);
}