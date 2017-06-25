#include <stdio.h>

int main(void) {
	int n;
	
	for (int i=0; i<n; i++) {
		int x, y;
		int soma = 0;
		scanf("%d %d", &x, &y);
		
		int a = (x%2==0) ? x+1 : x;
		
		for (int j=0; j<y; j++) {
			soma += a;
			a += 2;
		}
		
		printf("%d\n", soma);
	}
}