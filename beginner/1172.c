#include <stdio.h>
	
int main(void) {
	
	for (int i=0; i<10; i++) {
		int n;
		scanf("%d", &n);
		if (n <= 1)
			n = 1;
		
		printf("X[%d] = %d\n", i, n);
	}
}