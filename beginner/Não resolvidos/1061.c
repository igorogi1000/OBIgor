#include <stdio.h>

int main(void) {
	int dia0, h0, min0, seg0, dia, h, min, seg;
	int deltaDia, deltaH, deltaMin, deltaSeg;
	
	scanf("%*c%*c%*c%*c");
	scanf("%d", &dia0);
	scanf("%d", &h0);
	scanf("%*c%*c%*c");
	scanf("%d", &min0);
	scanf("%*c%*c%*c");
	scanf("%d", &seg0);
	scanf("%*c");
	
	scanf("%*c%*c%*c%*c");
	scanf("%d", &dia);
	scanf("%d", &h);
	scanf("%*c%*c%*c");
	scanf("%d", &min);
	scanf("%*c%*c%*c");
	scanf("%d", &seg);
	scanf("%*c");
	
	deltaDia = dia - dia0;
	deltaH = h - h0;
	deltaMin = min - min0;
	deltaSeg = seg - seg0;
	
	if (deltaH <= 0) {
		deltaH += 24;
		deltaDia--;
	}
	
	if (deltaMin < 0) {
		deltaMin += 60;
		deltaH--;
	}

	printf("%d dia(s)\n", deltaDia);
	printf("%d hora(s)\n", deltaH);
	printf("%d minuto(s)\n", deltaMin);
	printf("%d segundo(s)\n", deltaSeg);
	return 0;
}