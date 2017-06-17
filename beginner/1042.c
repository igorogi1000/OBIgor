#include <stdio.h>

int merda[3];
int a, b, c;
int i;

int main(void) {
	int x, y, z;
	a = 100000;
	b = 100000;
	c = 100000;
	
	scanf("%d %d %d", &x, &y, &z);
	merda[0] = x;
	merda[1] = y;
	merda[2] = z;
	
	for (i=0; i<3; i++) {
		if (merda[i] < a)
			a = merda[i];
	}
	
	for (i=0; i<3; i++) {
		if (merda[i] < b && merda[i] > a)
			b = merda[i];
	}
	
	for (i=0; i<3; i++) {
		if (merda[i] < c && merda[i] > b)
			c = merda[i];
	}
	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("\n");
	printf("%d\n", merda[0]);
	printf("%d\n", merda[1]);
	printf("%d\n", merda[2]);
	return 0;
}