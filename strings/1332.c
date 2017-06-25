#include <stdio.h>
#include <string.h>

#define MAX 100000

int sizeOf(char *string) {
	
	for (int j=0; j<MAX; j++) {
		if (string[j] != 0)
			return j+1;
	}
}

void readLine(char *guardar) {
	for (int j=0; j<MAX; j++) {
		char ch;
		scanf("%c", &ch);
		
		if (ch == '\n')
			ch = 0;
		guardar[j] = ch;
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	int r;
	
	int dois = 0;
	int um = 0;
	
	for (int i=0; i<n; i++) {
		char palavra[10];
		readLine(palavra);
		
		r = sizeOf(palavra);
		
		if (r == 5)
			printf("3\n");
		
		else if (r == 3) {
			if (palavra[0] == 't')
				dois++;
			if (palavra[1] == 'w')
				dois++;
			if (palavra[2] == 'o')
				dois++;
				
			if (palavra[0] == 'o')
				um++;
			if (palavra[1] == 'n')
				um++;
			if (palavra[2] == 'e')
				um++;
			
			if (dois > um)
				printf("2\n");
			
			else
				printf("2\n");
		}
	}
	
}