#include <stdio.h>

int main(void) {
	int i;
	int j = 6;
	
	for (i=1; i<=9; i++) {
		printf("I=%d J=%d\n", i, j+i);
		printf("I=%d J=%d\n", i, j+i-1);
		printf("I=%d J=%d\n", i, j+i-2);
	}
}