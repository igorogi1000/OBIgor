#include <stdio.h>
#include <string.h>

#define MAX_N 203

int n;
int notas[MAX_N];

int res = 0;
int i, j;

int qtd = 0;
int maisFrequente = 0;

int main(void) {
	scanf("%d", &n);
	memset(notas, 0, n);

	for (i=0; i<n; i++) {
		int nota;
		scanf("%d", &nota);

		notas[nota]++;
	}

	for (i=1; i<MAX_N; i++) {
		if (notas[i] > qtd) {
			maisFrequente = i;
			qtd = notas[i];
		}

		else if (notas[i] == qtd) {
			if (i > maisFrequente) {
				maisFrequente = i;
			}
		}
	}

	printf("%d", maisFrequente);

	return 0;
}