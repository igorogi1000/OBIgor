#include <stdio.h>

int main(void) {
	int i, j, k;
	i = 1;
	j = 7;
	
	for (k=1; k<=15; k++) {
		printf("I=%d J=%d\n", i, j);
		if (k-1 % 3 == 0)
			i+=2;
		if (j <= 5)
			j = 7;
		else
			j--;
	}
	
	return 0;
}