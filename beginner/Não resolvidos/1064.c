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
			printf("somaPos = %d\n", somaPos);
			printf("qtdPos = %d\n", qtdPos);
		}
	}
	
	if (qtdPos == 0)
		qtdPos = 1;
	
	double res = somaPos/qtdPos * 1.0;
	int resInt = res;
	int decInt = (res-resInt)*10;
	printf("%d valores positivos\n", qtdPos);
	printf("%d.%d\n", resInt, decInt);
	
	return 0;
}