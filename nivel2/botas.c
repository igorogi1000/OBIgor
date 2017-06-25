#include <stdio.h>
#include <string.h>

int main(void) {
	int n, i;
	int qtd = 0;
	
	int dir[100];
	int esq[100];
	
	scanf("%d", &n);
	memset(dir, 0, 100);
	memset(esq, 0, 100);
	
	for (i=0; i<n; i++) {
		int t;
		char lado;
		
		scanf("%d", &t);
		scanf("%*c%c", &lado);
		
		if (lado == 'E')
			esq[t]++;
		else
			dir[t]++;
	}
	
	for (i=30; i<100; i++) {
		qtd += (dir[i] > esq[i]) ? esq[i] : dir[i];
	}
	
	printf("%d", qtd);
	
	return 0;
}