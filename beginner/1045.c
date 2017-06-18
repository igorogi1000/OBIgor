#include <stdio.h>
#include <string.h>

#define MAX 100000
double a, b, c;
int i, j, k;

void decrescente() {
	double min = a;
	double mid = b;
	double max = c;
	int sarrei[MAX];
	memset(sarrei, 0, MAX);
	
	sarrei[a] = 1;
	sarrei[b] = 1;
	sarrei[c] = 1;
	
	int t = 1;
	for (k=1; k<MAX; k++) {
		if (t == 1 && sarrei[k]) {
			min = k;
			t++;
		}
		else if (t == 2 && sarrei[k]) {
			mid = k;
			t++;
		}
		else if (t == 3 && sarrei[k]) {
			max = k;
			break;
		}
	}
	
	a = max;
	b = mid;
	c = min;
}

int main(void) {
	scanf("%lf %lf %lf", &a, &b, &c);
	decrescente();
	printf("%lf %lf %lf", a, b, c);
}