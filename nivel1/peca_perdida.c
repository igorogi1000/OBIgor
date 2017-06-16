#include <stdio.h>
#include <string.h>

int pecas[1001];
int r;
int n;
int i;


int main(void) {
	scanf("%d", &n);
	memset(pecas, 0, n);
	
	for(i=0; i<n-1;i++) {
		int atual;
		scanf("%d", &atual);
		pecas[atual] = 1;
	}	
	
	for(i=1; i<=n;i++) {
		if (pecas[i] == 0) {
			r = i;
			break;
		}
	}
	
	printf("%d", r);
}