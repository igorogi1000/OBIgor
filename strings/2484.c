#include <stdio.h>

char palavra[110];

int main(void) {
	char ch;
	int size = 0;
	while (1) {
		for (i=0; i<110, i++) {
			if (scanf("%c", &ch) == EOF)
				break;
			palavra[i] = ch;
			if (ch == '\n') {
				palavra[i] = 0;
				break;
			}
			size++;
		}
		
		for (i=0; scanf("%c", &ch) != EOF, i++) {
		}
	}
}