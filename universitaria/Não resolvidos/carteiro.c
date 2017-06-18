#include <stdio.h>
#include <stdlib.h>

#define MAX_N 45010
#define MAX_M 45010

int casas[MAX_N];
int encomendas[MAX_M];

int n, m;
int tempo = 0;
int i, j, k;

int main(void) {
	scanf("%d %d", &n, &m);
	
	for (i=0; i<n; i++) {
		int c;
		scanf("%d", &c);
		casas[i] = c;
		encomendas[c] = i;
	}
	
	int indexAnterior = 0;
	
	for (j=0; j<m; j++) {
		int e;
		scanf("%d", &e);
		
		//índice da casa
		int index = encomendas[e];
		
		//a variação de índices dá o valor do tempo
		tempo += abs(index - indexAnterior);
		indexAnterior = index;
	}
	
	printf("%d", tempo);
}