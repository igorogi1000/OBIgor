#include <stdio.h>
#include <string.h>

#define MAX_N 100000

int alturas[MAX_N];
int n, i;

int main(void) {
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		int a;
		scanf("%d", &a);
		alturas[i] = a;
	}
	
	printf("%d %d", atualY+1, atualX+1);
	return 0;
}