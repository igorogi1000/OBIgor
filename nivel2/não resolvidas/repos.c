#include <stdio.h>
#include <string.h>

#define MAX_C 10000
#define MAX_N 1000

#define NOME 0
#define VERSAO 1

int c, n;
int i, j, k;

int programas[MAX_C][2];
int versoes[MAX_N][2];

int qtdVersoes = 0;


int programaIndex(int p) {
	for (i=0; i<c; i++) {
		if (programas[i][NOME] == p)
			return i;
	}
	return -1;
}

int versoesIndex(int p) {
	for (i=0; i<c; i++) {
		if (versoes[i][NOME] == p)
			return i;
	}
	return -1;
}


int main(void) {
	scanf("%d %d", &c, &n);
	
	for (k=0; k<c; k++) {
		memset(programas[k], 0, c);
		memset(versoes[k], 0, n);
	}
	
	for (k=0; k<c; k++) {
		int p, v;
		scanf("%d %d", &p, &v);
		programas[k][NOME] = p;
		programas[k][VERSAO] = v;
	}
	
	for (k=0; k<n; k++) {
		int p, v;
		scanf("%d %d", &p, &v);
		
		int pIndex = programaIndex(p);
		int vIndex = versoesIndex(p);
		
		if (vIndex == -1)
			vIndex = qtdVersoes;
		// && ((vIndex == -1) ? 1 : v > versoes[vIndex][VERSAO])
		if (v > programas[pIndex][VERSAO]) {
			versoes[vIndex][NOME] = p;
			versoes[vIndex][VERSAO] = v;
			qtdVersoes++;
		}
	}
	
	for (k=0; k<qtdVersoes; k++) {
		printf("%d %d\n", versoes[k][NOME], versoes[k][VERSAO]);
	}
	
}