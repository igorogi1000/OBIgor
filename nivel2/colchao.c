#include <stdio.h>
#include <string.h>

#define MAX_TAM 300

int medidas[3];
int i;

int colchao1;
int colchao2;

int porta1;
int porta2;

char r = 'N';

int getMenorColchao(int limite) {
	int menor = MAX_TAM;
	
	for (i=0; i<3; i++) {
		if (medidas[i] > limite && medidas[i] < menor)
			menor = medidas[i];
	}
	return menor;
}

int main() {
	int a, b, c;
	int h, l;
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d", &h, &l);
	
	medidas[0] = a;
	medidas[1] = b;
	medidas[2] = c;
	
	colchao1 = getMenorColchao(0);
	colchao2 = getMenorColchao(colchao1);
	
	//printf("colchao1 = %d, colchao2 = %d\n", colchao1, colchao2);
	
	porta1 = (h < l) ? h : l;
	porta2 = (porta1 == h) ? l : h;
	
	if (colchao1 <= porta1 && colchao2 <= porta2)
		r = 'S';
	printf("%c", r);
}