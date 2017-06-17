#include <stdio.h>

int pA = 2;
int pB = 3;
int pC = 5;


int main(void) {
	int pTotal = pA + pB + pC;
	int n;
	int i, j;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		double mediaAtual = 0;
		double a, b, c;
		scanf("%lf %lf %lf", &a, &b, &c);
		mediaAtual += a*pA + b*pB + c*pC;
		
		mediaAtual /= pTotal;
		printf("%.1lf\n", mediaAtual);
	}
	
	return 0;
}