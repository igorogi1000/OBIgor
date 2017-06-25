#include <stdio.h>
#include <string.h>

#define MAX_LC 150

int l, c;
int i, j;

int atualX, atualY;
int antX = -1, antY = -1;
int finX, finY;

char tabuleiro[MAX_LC][MAX_LC];

int sub(int n) {
	return (n > 0) ? 1 : 0;
}

int sum(int n, int max) {
	return (n < max-1) ? 1 : 0;
}

int isH(int l, int c) {
	return (tabuleiro[l][c] == 'H') ? 1 : 0;
}

int goProximo() {
	// printf("antX = %d, atualX = %d\n", antX, atualX);
	// printf("antY = %d, atualY = %d\n", antY, atualY);
	/*
	o 
	H <
	H
	
	o 
	H 
	H <
	*/
	if (atualX+1 < c)
		if (isH(atualY, atualX+1) && (antX < atualX))
			atualX ++;
	
	/*	
	v
	HHo	

	 v
	HHo
	*/
	
	if (atualX > 0)
		if (isH(atualY, atualX-1) && (antX > atualX)) {
			atualX --;
		}
		
	/*
	o 
	H <
	H
	
	o 
	H 
	H <
	*/
	if (atualY+1 < l)
		if (isH(atualY+1, atualX) && (antY > atualY))
			atualY ++;
	
	/*
	H
	H <
	o 
	
	H <
	H 
	o 
	*/
	if (atualY > 0)
		if (isH(atualY-1, atualX) && (antY < atualY))
			atualY --;
		
	if (antX == atualX && antY == atualY) {
		printf("FIM DA PUTA\n");
		return 0;
	}
	antX = atualX;
	antY = atualY;
	return 1;
}

int main(void) {
	scanf("%d %d", &l, &c);
	
	for (i=0; i<l; i++) {
		memset(tabuleiro[i], '.', c + 10);
	}
	
	for (i=0; i<l; i++) {
		scanf("%*c");
		for (j=0; j<c; j++) {
			char ch;
			scanf("%c", &ch);
			tabuleiro[i][j] = ch;
			
			if (ch == 'o') {
				atualX = j;
				atualY = i;
			}
		}
	}
	
	while (1) {
		printf("%d %d\n", atualY+1, atualX+1);
		if (!goProximo())
			break;
	}
	
	printf("%d %d", atualY+1, atualX+1);
	return 0;
}