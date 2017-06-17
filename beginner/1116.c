#include <stdio.h>

int main(void) {
	int i;
	int n;
	scanf("%d", &n);
	
	for (i=0; i<n; i++) {
		int x, y;
		scanf("%d %d", &x, &y);

		if (y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1lf\n", 1.0*x/y);
	}
	
	return 0;
}