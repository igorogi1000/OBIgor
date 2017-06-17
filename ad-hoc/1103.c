#include <stdio.h>

int a, b, c, d;

int main(void) {
	while (1) {
		int h0, min0, h, min, dH, dMin;
		scanf("%d %d %d %d", &h0, &min0, &h, &min);
		
		if (h0 + min0 + h + min == 0)
			break;
		dH = h -  h0;
		dMin = min -  min0;
		
		if ((dH < 0) || (dH == 0 && dMin < 0))
			dH += 24;
		
		if (dMin < 0) {
			dH--;
			dMin += 60;
		}
		
		printf("%d\n", dH*60 + dMin);
	}
}