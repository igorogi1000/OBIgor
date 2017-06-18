#include <stdio.h>
#include <string.h>

#define TAM_Q 15
#define QTD_R 100

int n, i, j;
int quadrado[TAM_Q][TAM_Q];
int somas[QTD_R];
int qtdSomas = 0;
int resultado;

int percorrer(int iniX, int iniY, int finX, int finY) {
	int somarX;
	int somarY;
	int soma = 0;
	
	if (iniX == finX)
		somarX = 0;
	else if (iniX < finX)
		somarX = 1;
	else 
		somarX = -1;
		
	if (iniY == finY)
		somarY = 0;
	else if (iniY < finY)
		somarY = 1;
	else 
		somarY = -1;
	
	for (i=0; i<n; i++) {
		soma += quadrado[iniY][iniX];
		iniX += somarX;
		iniY += somarY;
	}
	
	return soma;
}

int main(void) {
	scanf("%d", &n);
	memset(somas, 0, n * 2 + 5);
	int l, c;
	for (l=0; l<n; l++) {
		for (c=0; c<n; c++) {
			int atual;
			scanf("%d", &atual);
			quadrado[l][c] = atual;
			somas[qtdSomas] += atual;
		}
		qtdSomas++;
	}

	for (c=0; c<n; c++) {
		for (l=0; l<n; l++) {
			somas[qtdSomas] += quadrado[l][c];
		}
		qtdSomas++;
	}
	
	int lc;
	
	for (lc=0; lc<n; lc++) {
		somas[qtdSomas] += quadrado[lc][lc];
		qtdSomas++;
	}
	
	somas[qtdSomas] += percorrer(n-1, 0, 0, n-1);
	
	int soma1 = somas[0];
	for (i=0; i<qtdSomas; i++) {
		if (somas[i] == soma1)
			resultado = soma1;
		else 
			resultado = -1;
	}
	
	printf("%d", resultado);
}