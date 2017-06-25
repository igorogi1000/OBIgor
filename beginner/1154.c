#include <stdio.h>

int main(void) {
	double soma = 0;
	int qtd = 0;
	while (1) {
		int age;
		scanf("%d", &age);
		
		if (age < 0)
			break;
		
		soma += age;
		qtd++;
	}
	
	printf("%.2lf\n", soma/qtd);
}