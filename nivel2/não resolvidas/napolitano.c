#include <stdio.h>
#include <string.h>

#define MAX 1000000
int resultado = 0;
int intacto[MAX];
int final[MAX];
int length = 0;
int i, j;

int numValue(char c) {
	int r = 0;
	
	switch(c) {
		case 'I':
			r = 1;
			break;
			
		case 'V':
			r = 5;
			break;
		
		case 'X':
			r = 10;
			break;
		
		case 'L':
			r = 50;
			break;
		
		case 'C':
			r = 100;
			break;
		
		case 'D':
			r = 500;
			break;
		
		case 'M':
			r = 1000;
			break;
	}
	return r;
}

int main() {
	for (i=0; i<MAX; i++) {
		char atual;
		scanf("%c", &atual);
		
		
		if (atual == '\n') {
			break;
		}
		intacto[i] = numValue(atual);
		final[i] = numValue(atual);
		length++;
	}
	//memset(final, 0, length);
	
	for (i=0; i<length-1; i++) {
		for (j=i+1; j<length; j++) {
			int papa = intacto[i];
			int proximo = intacto[j];
			
			if (papa < proximo) {
				printf("%d < %d\n", intacto[i], intacto[j]);
				final[j] -= papa;
				final[i] = 0;
				break;
			}
		}
	}
	
	for (i=0; i<length; i++) {
		resultado += final[i];
	}
	
	printf("%d", resultado);
}