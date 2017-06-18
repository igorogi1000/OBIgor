#include <stdio.h>
#include <string.h>

#define TAM_Q 15
#define ES 0
#define DS 1
#define EI 2
#define DI 3

int n, i, j;
int quadrado[TAM_Q][TAM_Q];
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

int percorrer2(int tipo) {
	switch(tipo) {
		case 0:
			return percorrer(0, 0, n-1, 0);
		
		case 1:
			return percorrer(0, 0, 0, n-1);
			
		case 2:
			return percorrer(0, 0, n-1, n-1);
			
		case 3:
			return percorrer(n-1, 0, n-1, n-1);
			
		case 4:
			return percorrer(0, n-1, n-1, n-1);
	}
}

void testarQuadrado() {
	int R1, r;
	for (j=0; j<5; j++) {
		r = percorrer2(j);
		if (j == 0)
			R1 = r;
		else if (r != R1)
			resultado = -1;
		else
			resultado = r;
	}
}

int main(void) {
	scanf("%d", &n);
	int l, c;
	for (l=0; l<n; l++) {
		for (c=0; c<n; c++) {
			int atual;
			scanf("%d", &atual);
			quadrado[l][c] = atual;
		}
	}

	testarQuadrado();
	printf("%d", resultado);
}