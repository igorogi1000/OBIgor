#include <stdio.h>
#include <string.h>

#define TAM 1000001

int numeros[TAM];
int res = 0;
int i;

int main() {
	memset(numeros, 0, TAM);
	
	int n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		int vi;
		scanf("%d", &vi);
		
		if (numeros[vi] > 0)
			continue;
		res++;
		numeros[vi]++;
	}
	
	printf("%d", res);
}