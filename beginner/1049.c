#include <stdio.h>
#include <string.h>

#define MAX_1 13
#define MAX_2 9
#define MAX_3 11

char t1[MAX_1];
char t2[MAX_2];
char t3[MAX_3];
int i;

int saoIguais(char *s1, char *s2) {
	return (strcmp(s1, s2) == 0) ? 1 : 0;
}

int printarResultado() {
	char resultado[20];
	if (saoIguais(t1, "vertebrado")) {
		if (saoIguais(t2, "ave")) {
			if (saoIguais(t3, "carnivoro"))
				strcpy(resultado, "aguia");
			else if (saoIguais(t3, "onivoro"))
				strcpy(resultado, "pomba");
		}
		
		else if (saoIguais(t2, "mamifero")) {
			if (saoIguais(t3, "onivoro"))
				strcpy(resultado, "homem");
			else if (saoIguais(t3, "herbivoro"))
				strcpy(resultado, "vaca");
		}
	}
	
	else if (saoIguais(t1, "invertebrado")) {
		if (saoIguais(t2, "inseto")) {
			if (saoIguais(t3, "hematofago"))
				strcpy(resultado, "pulga");
			else if (saoIguais(t3, "herbivoro"))
				strcpy(resultado, "lagarta");
		}
		
		else if (saoIguais(t2, "anelideo")) {
			if (saoIguais(t3, "hematofago"))
				strcpy(resultado, "sanguessuga");
			else if (saoIguais(t3, "onivoro"))
				strcpy(resultado, "minhoca");
		}
	}
		
	printf("%s\n", resultado);
}

int main() {
	for (i=0; i<MAX_1; i++) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n') {
			t1[i]= 0;
			break;
		}
		t1[i] = ch;
	}
	
	for (i=0; i<MAX_2; i++) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n') {
			t2[i]= 0;
			break;
		}
		t2[i] = ch;
	}
	
	for (i=0; i<MAX_3; i++) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n') {
			t3[i]= 0;
			break;
		}
		t3[i] = ch;
	}
	
	printarResultado();
}