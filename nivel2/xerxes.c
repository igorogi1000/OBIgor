#include <stdio.h>

int n;
int d=0, x=0;
int i;

void batalha(int dN, int xN) {
	int xA = dN+1;
	int xB = dN+2;
	if (xA > 4)
		xA -= 5;
	if (xB > 4)
		xB -= 5;

	if (xN == xA || xN == xB)
		d++;
	else
		x++;
}

int main(void) {
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		int D, X;
		scanf("%d %d", &D, &X);

		batalha(D, X);
	}

	if (x > d)
		printf("xerxes\n");
	else
		printf("dario\n");

	return 0;
}