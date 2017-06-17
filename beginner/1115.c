#include <stdio.h>
#include <string.h>

int quadrante(int x, int y) {
	int q;
	if (x == 0 || y == 0)
		return 0;
	if (x > 0)
		q = (y > 0) ? 1 : 4;
	else 
		q = (y > 0) ? 2 : 3;
	return q;
}

int main(void) {
	char palabras[5][20];
	
	strcpy(palabras[1], "primeiro");
	strcpy(palabras[2], "segundo");
	strcpy(palabras[3], "terceiro");
	strcpy(palabras[4], "quarto");
	
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);
		int r = quadrante(x, y);
		if (r == 0)
			break;
		printf("%s\n", palabras[r]);
	}
	
	return 0;
}