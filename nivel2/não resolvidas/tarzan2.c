#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_N 1000
#define X 0
#define Y 1

//coordenadas das arvores onde estão os cipós
int arvores[MAX_N][2];

//lista de numeros em que ja foi encontrado um cipó próximo
int excluir[MAX_N];

//"tamanho" do array
int qtdExcluidos = 0;

//resposta final
char res = 'N';

//número de cipós
int n;

//distância máxima do cipó
int d;

int i, j;

//a hipotenusa é usada para calcular a distancia real percorrida pelo cipó
double hipotenusa(int c1, int c2) {
	//esses dois ifs são em caso de movimento não diagonal
	if (c1 == 0)
		return c2;
	if (c2 == 0)
		return c1;
	
	return sqrt(c1 * c1 + c2 * c2);
}

int isExcluido(int num) {
	int k;
	int resultado = 0;
	for (k=0; k<qtdExcluidos; k++) {
		if (excluir[k] == num)
			resultado = 1;
	}
	
	return resultado;
}

void excluirNum(int num) {
	excluir[qtdExcluidos] = num;
	qtdExcluidos++;
}

int main() {	
	scanf("%d %d", &n, &d);
	
	for (i=0; i<n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		arvores[i][X] = x;
		arvores[i][Y] = y;
	}
	
	for (i=0; i<n-1; i++) {
		res = 'N';
		for (j=i+1; j<n; j++) {
			if (isExcluido(i) || isExcluido(j)) {
				res = 'S';
				break;
			}
			int deltaX = abs(arvores[i][X] - arvores[j][X]);
			int deltaY = abs(arvores[i][Y] - arvores[j][Y]);
			double h  = hipotenusa(deltaX, deltaY);
			
			if(h < d) {
				res = 'S';
				excluirNum(i);
				excluirNum(j);
			}				
		}
	}
	printf("%c", res);
}