#include <stdio.h>
#include <string.h>

#define MAX_N 10
#define MAX_REI 8

#define DIMENSAO_TABULEIRO 9

const int PEAO = 0;
const int TORRE = 1;
const int BISPO = 2;
const int RAINHA = 3;
const int REI = 4;

const int HORIZONTAL  = 0;
const int VERTICAL  = 1;
const int DIAGONAL  = 2;

const int PECA = 0;
const int L = 1;
const int C = 2;

struct Rei {
	int possibilidades[MAX_REI][2];
	int l, c;

	int isAmeacado = 0;
};

int n;
int pecasPretas[MAX_N][3];
int qtdPecasPretas = 0;
struct Rei rei;

int i;
char resposta[3];

int charToPeca(char ch) {
	int res = -1;
	switch(ch) {
		case 'P':
			res = PEAO;
			break;
		case 'T':
			res = TORRE;
			break;
		case 'R':
			res = BISPO;
			break;
		case 'W':
			res = REI;
			break;
		default:
			break;
	}
	return res;
}

int charToCol(char ch) {
	return ch - 96;
}

void addPeca(int peca, int l, int c) {
	pecasPretas[qtdPecasPretas][PECA] = peca;
	pecasPretas[qtdPecasPretas][L] = l;
	pecasPretas[qtdPecasPretas][C] = c;
	qtdPecasPretas++;
}

void addRei(int l, int c) {
	rei.l = l;
	rei.c = c;

	rei.isAmeacado = 0;
}


void setResposta(char r) {
	strcpy(resposta, (r == 'S') ? "SIM" : "NAO");
}

void init() {
}

int main(void) {
	while (scanf("%d", &n) != EOF) {
		init();x
		for (i=0; i<n+1; i++) {
			char p;
			char col;
			int linha;

			scanf("%*c");
			scanf("%c", &p);
			scanf("%c", &col);
			scanf("%d", &linha);

			if (i == n) 
				addRei(linha, charToCol(col));
			else
				addPeca(charToPeca(p), linha, charToCol(col));
		}
	}

	return 0;
}