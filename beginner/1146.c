#include <stdio.h>

int main(void) {
	while (1) {
		int a;
		scanf("%d", &a);
		
		if (a == 0)
			break;
		for (int i=1; i<a; i++) {
			printf("%d ", i);
		}
		
		printf("%d\n", a);
	}
}