#include <stdio.h>

int main(void) {
	int h0, min0, h, min;
	int deltaH, deltaMin;
	
	scanf("%d %d %d %d", &h0, &min0, &h, &min);
	
	deltaH = h - h0;
	deltaMin = min - min0;
	
	if (deltaH <= 0)
		deltaH += 24;
	
	if (deltaMin < 0) {
		deltaMin += 60;
		deltaH--;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", deltaH, deltaMin);
	return 0;
}