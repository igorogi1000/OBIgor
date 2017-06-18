#include <stdio.h>

int main(void) {
	int x, y, i, j;
	
	scanf("%d %d", &x, &y);
	
	int atual = 1;
	for (i=0; i<y/x; i++) {
		for (j=0; j<x; j++) {
			printf("%d", atual);
			if (j != x-1) {
				printf(" ");
			}
			atual++;
		}
		printf("\n");
	}
	
	return 0;
}