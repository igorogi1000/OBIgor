#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	for (int i=1; i<=n; i++) {
		printf("%d %.0lf %.0lf\n", i, pow(i, 2), pow(i, 3));
	}
}