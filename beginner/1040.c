#include <stdio.h>

int pA = 2;
int pB = 3;
int pC = 4;
int pD = 1;

int main(void) {
	int pSoma = pA + pB + pC + pD;
	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	a *= pA;
	b *= pB;
	c *= pC;
	d *= pD;
	
	double media = (a + b + c + d) / pSoma;
	
	printf("Media: %.1lf\n", media);
	
	if (media < 5)
		printf("Aluno reprovado.\n");
	
	else if (media <= 6.9) {
		printf("Aluno em exame.\n");
		double exame;
		scanf("%lf", &exame);
		
		printf("Nota do exame: %.1lf\n", exame);
		double mediaF = (exame + media) / 2;
		
		if (mediaF >= 5)
			printf("Aluno aprovado.\n");
		else 
			printf("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", mediaF);
	}
	
	else
		printf("Aluno aprovado.\n");
}