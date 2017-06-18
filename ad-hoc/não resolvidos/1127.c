#include <stdio.h>
#include <stdlib.h>

//M = quantidade de notas da música original
#define MAX_M 100000

//T = quantidade de notas do possível plágio
#define MAX_T 10000

int m, t;
int i, j, k;

int original[MAX_M];
int plagio[MAX_T];

int chToNota(char ch) {
	int nota = ch - 65;
	if (ch != 'A') {
		nota++;
	}
	if (ch >= 68) {
		nota ++;
	}
	
	if (ch >= 69) {
		nota ++;
	}
	
	if (ch == 71) {
		nota ++;
	}
}

int simboloValor(char ch) {
	int valor = 0;
	if (ch == '#')
		valor = 1;
	else if (ch == 'b')
		valor = -1;
	return valor;
}

int isNota(char ch) {
	return (ch >= 65 && ch <= 71);
}

int ciclo(int v) {
	return (v > 8) ? v-8 : v;
}	

char intervalosIguais() {
	int variacao = -1;
	char res;
	
	int o, p;
	for (o=0; o<m-t; o++) {
		res = 'N';
		for (p=0; p<t; p++) {
			printf("variacao = %d\noutra merda = %d\n", variacao, ciclo(abs(original[o+p] - plagio[p])));
			if (variacao == -1)
				variacao = ciclo(abs(original[o+p] - plagio[p]));

			else if (variacao != ciclo(abs(original[o+p] - plagio[p]))) {
				break;
			}
			else {
				res = 'S';
			}
		}
		if (res == 'S')
			return res;
	}
	return res;
}

int lerNota() {
	char nota = ' ';
	char efeito;
	
	while (!isNota(nota)) {
		scanf("%c", &nota);
	}
	
	scanf("%c", &efeito);
	efeito = simboloValor(efeito);
	
	return nota + efeito;
}

int main(void) {
	
	while (1) {
		scanf("%d %d", &m, &t);
		
		if (m + t == 0)
			break;
		
		for (i=0; i<m; i++) {
			original[i] = lerNota();
		}
		
		for (i=0; i<t; i++) {
			plagio[i] = lerNota();
		}
		
		printf("%c\n", intervalosIguais());
	}
}