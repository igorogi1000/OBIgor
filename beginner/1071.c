#include <stdio.h>

int main() {
	int x, y;
	
	scanf("%d %d", &x, &y);
	
	int soma = 0;
	int i;
	
	for (i=(y%2==0)?y+1:y+2; i<x; i+=2) {
		soma+=i;
	}
	
	printf("%d\n", soma);
}