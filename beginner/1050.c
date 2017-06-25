#include <stdio.h>
#include <string.h>

int main(void) {
	char lugares[72][100];
	int i;
	
	for (i=0; i<72; i++)
		strcpy(lugares[i], "DDD nao cadastrado");
	strcpy(lugares[61], "Brasilia");
	strcpy(lugares[71], "Salvador");
	strcpy(lugares[11], "Sao Paulo");
	strcpy(lugares[21], "Rio de Janeiro");
	strcpy(lugares[32], "Juiz de Fora");
	strcpy(lugares[19], "Campinas");
	strcpy(lugares[27], "Vitoria");
	strcpy(lugares[31], "Belo Horizonte");
	
	int ddd;
	scanf("%d", &ddd);
	
	if (ddd >= 72)
		ddd = 0;
	printf("%s\n", lugares[ddd]);
	return 0;
}