#include <stdio.h>
#define QTD 5

int cartas[QTD];
int i;

int main(void) {
	for (i=0; i<QTD; i++) {
		int x;
		scanf("%d", &x);
		cartas[i] = x;
	}	
	
	char resp = 'N';
	
	int anterior = 0;
	for (i=0; i<QTD; i++) {
		if (anterior < cartas[i]) {
			// printf("%d < %d\n", anterior, cartas[i]);
			resp = 'C';
		}
		else {
			resp = 'N';
			break;
		}
		anterior = cartas[i];
	}
	
	anterior = 14;
	
	if (resp == 'N') {
		for (i=0; i<QTD; i++) {
			if (anterior > cartas[i]) {
				resp = 'D';
			}
			else {
				resp = 'N';
				break;
			}
			anterior = cartas[i];
		}
	}
	
	printf("%c", resp);
}