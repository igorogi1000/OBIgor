#include <stdio.h>

int readScore() {
	double d;
	scanf("%lf", &d);
	if (d >= 0 && d <= 10)
		return d;
	return -1;
}

int main(void) {
	
	double a;
	double b;
	
	a = readScore();
	
	while (a == -1) {
		printf("nota invalida\n");
		a = readScore();
	}
	
	b = readScore();
	
	while (b == -1) {
		printf("nota invalida\n");
		b = readScore();
	}
	
	printf("media = %.2lf\n", (a + b) / 2.0);
}