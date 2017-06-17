#include <stdio.h>

int n, i;
int qtdC = 0;
int qtdR = 0;
int qtdS = 0;

void somarAoChar(char c, int qtd) {
	switch(c) {
		case 'C':
			qtdC += qtd;
			break;
		case 'R':
			qtdR += qtd;
			break;
		case 'S':
			qtdS += qtd;
			break;
	}
}

int main(void) {
	scanf("%d", &n);
	
	for (i=1; i<=n; i++) {
		int qtdAtual;
		char chAtual;
		
		scanf("%d%*c%c", &qtdAtual, &chAtual);
		somarAoChar(chAtual, qtdAtual);
	}
	
	int total =  qtdC + qtdR + qtdS;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", qtdC);
	printf("Total de ratos: %d\n", qtdR);
	printf("Total de sapos: %d\n", qtdS);
	printf("Percentual de coelhos: %.2lf %%\n", 1.0*qtdC/total*100);
	printf("Percentual de ratos: %.2lf %%\n", 1.0*qtdR/total*100);
	printf("Percentual de sapos: %.2lf %%\n", 1.0*qtdS/total*100);
	
	return 0;
}