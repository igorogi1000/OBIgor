#include <stdio.h>
#include <math.h>

int main() {
	double salarioOriginal;
	double salarioFinal;
	int percentualAumento;
	
	scanf("%lf", &salarioOriginal);
	
	if (salarioOriginal <= 400)
		percentualAumento = 15;
	
	else if (salarioOriginal <= 800)
		percentualAumento = 12;
	
	else if (salarioOriginal <= 1200)
		percentualAumento = 10;
	
	else if (salarioOriginal <= 2000)
		percentualAumento = 7;
	
	else 
		percentualAumento = 4;
	
	salarioFinal = salarioOriginal + salarioOriginal * percentualAumento/100.0;
	
	printf("Novo salario: %.2lf\n", salarioFinal);
	printf("Reajuste ganho: %.2lf\n", salarioFinal - salarioOriginal);
	printf("Em percentual: %d %\n", percentualAumento);
}