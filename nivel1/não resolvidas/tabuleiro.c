#include <stdio.h>
#include <string.h>

#define MAX_N 103

int n;
int tabuleiro[MAX_N][MAX_N];

int res = 0;
int i, j;
int main(void) {
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			int t;
			scanf("%d", &t);	
			tabuleiro[i][j] = t;
		}
	}

	for (i=1; i<n; i++) {
		for (j=1; j<n; j++) {
			tabuleiro[i][j] = (tabuleiro[i-1][i-1] + tabuleiro[i-1][i] + tabuleiro[i][i-1] > 1) ? 0 : 1;
		}
	}

	res = tabuleiro[n-1][n-1];

	printf("%d\n", res);

	return 0;
}