#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	int x = (a < b) ? a : b;
	int y = (x == a) ? b : a;
	
	for (int i=x+1; i<y; i++) {
		if (i % 5 == 2 || i % 5 == 3)
			printf("%d\n", i);
	}
}