#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	
	int i, j;
	j = 0;
	for(i=(x%2==0)?x+1:x; j<6; i+=2) {
		printf("%d\n", i);
		j++;
	}
}