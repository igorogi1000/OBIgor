#include <stdio.h>

int qtdPos=0;
int somaPos=0;
int i;

int main(void) {
	for (i=0; i<6; i++) {
		double n;
		scanf("%lf", &n);
		
		if (n > 0) {
			qtdPos++;
			somaPos += n;
		}
	}
	
	if (qtdPos == 0)
		qtdPos = 1;
	printf("%d valores positivos\n", qtdPos);
	printf("%.1lf\n", somaPos/qtdPos);
	
	return 0;
}