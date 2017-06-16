#include <stdio.h>

int main(void) {
	int totalPos;
	int discoPos;
	int aviaoPos;

	int resultado;

	scanf ("%d %d %d", &totalPos, &discoPos, &aviaoPos);

	resultado = totalPos - aviaoPos + discoPos;
	while (resultado >= totalPos)
		resultado -= totalPos;

	printf("%d", resultado);
	return 0;
}