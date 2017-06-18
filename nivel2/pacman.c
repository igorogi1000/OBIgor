#include <stdio.h>

#define MAX_N 100

char tabuleiro[MAX_N][MAX_N];

int cont = 0;
int maior = 0;

int n;
int l, c;

int main(void) {
	scanf("%d", &n);
	
	for (l=0; l<n; l++) {
		scanf("%*c");
		for (c=0; c<n; c++) {
			char atual;
			scanf("%c", &atual);
			tabuleiro[l][c] = atual;
		}
	}
	
	/*for (l=0; l<n; l++) {
		for (c=0; c<n; c++) {
			printf("%c ", tabuleiro[l][c]);
		}
		printf("\n");
	}*/
	
	int somar = 1;
	int iniciar = 0;
	int objetivo = n;
	
	for (l=0; l<n; l++) {
		for (c=iniciar; c!=objetivo; c+=somar) {
			if (tabuleiro[l][c] == 'o')
				cont++;
			else if (tabuleiro[l][c] == 'A')
				cont = 0;
			if (cont > maior)
				maior = cont;
		}
		
		if (objetivo == n) {
			objetivo = -1;
			iniciar = n-1;
		}
		
		else {
			objetivo = n;
			iniciar = 0;
		}
		somar *= -1;
	}
	
	printf("%d", maior);
}