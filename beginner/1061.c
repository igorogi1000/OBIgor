#include <stdio.h>

struct data {
	int dia, hora, min, seg;
};

struct data hoje;
struct data evento;

int dia;
int h;
int min;
int seg;

void variacao() {
	dia = evento.dia - hoje.dia;
	h = evento.hora - hoje.hora;
	min = evento.min - hoje.min;
	seg = evento.seg - hoje.seg;
	
	if (seg < 0) {
		seg += 60;
		min--;
	}	
	
	if (min < 0) {
		min += 60;
		h--;
	}	

	if (h < 0) {
		h += 24;
		dia--;
	}		
}

int main(void) {
	scanf("%*c%*c%*c%d", &hoje.dia);
	scanf("%d%*c%*c", &hoje.hora);
	scanf("%d%*c%*c", &hoje.min);
	scanf("%d%*c", &hoje.seg);
	
	scanf("%*c%*c%*c%d", &evento.dia);
	scanf("%d%*c%*c", &evento.hora);
	scanf("%d%*c%*c", &evento.min);
	scanf("%d%*c", &evento.seg);
	
	variacao();
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, h, min, seg);
	return 0;
}