#include <stdio.h>

int main(void) {
	int nBotas;
	int tamanhos [10000];
	char lados [10000];

	int resultado = 0;

	scanf("%d%*c", &nBotas);

	int i, j;

	for (i=0; i<nBotas; i++) {
		int t;
		scanf("%d%*c", &t);
		tamanhos[i] = t;

		char lado;
		scanf("%c%*c", &lado);
		lados[i] = lado;
	}

	for (i=0; i<nBotas; i++) {
		int qtdD = 0;
		int qtdE = 0;
		for (j=i+1; j<nBotas; j++) {
			if (tamanhos[i] == tamanhos[j] && lados[i] != lados[j]) {
				qtdD = lados[i] == 'D' ? qtdD + 1 : qtdD;
				qtdE = lados[i] == 'E' ? qtdD + 1 : qtdD;
				if (qtdD > qtdE)
					resultado = qtdE;
				else
					resultado = qtdD;
			}
		}
	}

	printf("%d", resultado);

	return 0;
}