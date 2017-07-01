#include <stdio.h>
#include <string.h>

#define MAX_N 1009

int n;
int alturas[MAX_N];
int qtd = 0;
char res = 'N';
int i;
int main(void) {
	scanf("%d", &n);
	
	memset(alturas, 0, n+1);

	for (i=1; i<=n; i++) {
		int ai;
		scanf("%d", &ai);
		alturas[i] = ai;
	}

	for (i=1; i<n; i++) {
		int atual = alturas[i];
		int anterior = alturas[i-1];
		int proximo = alturas[i+1];
		if (atual > proximo && atual > anterior)
			qtd++;
	}

	if (qtd > 1)
		res = 'S';
	printf("%c", res);
	return 0;
}