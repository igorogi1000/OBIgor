#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
#include <math.h>

//#define TAM 1000001

/*
acredito que eu interpretei errado...
Em nenhum lugar diz que o Tarzan está indo de cipó pra cipó,
o que parece é que na verdade é uma rede de cipós e o programa 
tem que informar se tem algum cipó muito longe que não dá para
chegar de nenhum outro cipó
*/

//a hipotenusa é usada para calcular a distancia real percorrida pelo cipó
double hipotenusa(int c1, int c2) {
	return sqrt(c1 * c1 + c2 * c2);
}

void testar() {
	
}

int main() {
	//resposta final
	char res = 'S';
	
	//número de cipós
	int n;
	
	//distância máxima do cipó
	int d;
	
	int i;
	
	//x e y anteriores
	int xOld;
	int yOld;
	
	scanf("%d %d", &n, &d);
	
	for (i=0; i<n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);
		
		if (i != 0) {
			//se o movimento for diagonal
			if (xOld != x && yOld != y) {
				
				//calcular o movimento diagonal e testar se é maior que o limite
				double h = hipotenusa(abs(x-xOld), abs(y-yOld));
				if (h > d) {
					printf("hipotenusa(%d, %d) = %.1lf\n", x, y, h); ////////////
					res = 'N';
				}
			}
			
			//se o movimento for maior que o limite
			else if (abs(x - xOld + y - yOld) > d) {
				res = 'N';
			}
		}
		
		xOld = x;
		yOld = y;
	}
	
	printf("%c", res);
}