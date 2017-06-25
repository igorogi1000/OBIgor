#include <stdio.h>

#define TAM 10000

char texto[TAM];
int tam;
int i;

void removerTodos(char ch) {
	for (i=0; i<tam; i++) {
		if (texto[i] == ch) {
			texto[i] = 0;
		}
	}
}

void removerPrimeiro(char ch) {
	for (i=0; i<tam; i++) {
		if (texto[i] == ch) {
			texto[i] = 0;
			break;
		}
	}
}

void removerDe(int ini, int length) {
	for (i=ini; i<=ini+length; i++) {
		texto[i] = 0;
	}
}

void removerEspacos() {
	removerTodos('\t');
	for (i=1; i<tam; i++) {
		if (texto[i] == ' ' && texto[i-1] == ' ')
			texto[i] = 0;
	}
}

void br(int col) {
	removerDe(col, 4);
	texto[col] = '\n';
}

void hr(int col) {
	removerDe(col, 4);
	
}

int main(void) {
	
	return 0;
}