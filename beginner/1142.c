#include <stdio.h>
#include <string.h>
#include <math.h>

int qtdFuel[4];

int main(void) {
	memset(qtdFuel, 0, 4);

	while (1) {
		int tipo;
		scanf("%d", &tipo);
		if (tipo == 4)
			break;
		else if (!(tipo <= 3 && tipo >= 1))
			continue;
		qtdFuel[tipo]++;
	}
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", qtdFuel[1], qtdFuel[2], qtdFuel[3]);
}