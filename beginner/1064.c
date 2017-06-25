#include <stdio.h>

double soma = 0;
int qtd = 0;

int main(void) {
	int i;
	
	for (i=0; i<6; i++) {
		double x;
		scanf("%lf", &x);
		
		if (x > 0) {
			soma += x;
			qtd++;
		}
	}
	
	double res = soma/qtd;
	
	printf("%d valores positivos\n", qtd);
	printf("%.1lf\n", res);
	
	return 0;
}