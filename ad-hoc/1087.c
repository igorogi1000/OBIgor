#include <stdio.h>
#include <stdlib.h>

int a, b, c, d;

int main(void) {
	
	while (1) {
		int qX, qY, fX, fY;
		scanf("%d %d %d %d", &qX, &qY, &fX, &fY);
		int r = 2;
		if (qX + fX + qY + fY == 0)
			break;
		if (qX == fX && qY == fY)
			r = 0;
		else if ((qX == fX || qY == fY) || (abs(qX - fX) == abs(qY - fY)))
			r = 1;
		
		printf("%d\n", r);
	}
}