#include <stdio.h>
#include <string.h>

#define MAX_IDADE 100
#define MAX_N 501
#define MAX_M 60001

int idades[MAX_N];
int relacoes[MAX_N][MAX_N];
int gerentesDe[MAX_N][MAX_N];
int qtdGerentes[MAX_N];

int testar[MAX_N];
int qtdTestar = 0;
int maisNovo=100;

int nEmpregados;
int nRelacoes;
int nInstrucoes;

//int testar[MAX_N];

void init() {
	int a;
	int b;
	
	for (a=0; a<MAX_N; a++) {
		idades[a] = 0;
		
		for (b=0; b<MAX_N; b++) {
			relacoes[a][b] = 0;
		}
	}
}

void criarEmpregado(int nome, int idade) {
	idades[nome] = idade;	
}

void criarRelacao(int g, int e) {
	relacoes[g][e] = 1;
	relacoes[e][g] = -1;
	
	gerentesDe[e] = g;
}

int pergunta(int e) {
	
}

void alterarTestar(int e) {
	int t[nEmpregados+1];
	
	memset(testar, 0, nEmpregados+1);
	
	
}

void trocar(int e1, int e2) {
	
}

void saidaTeste() {
	for (int g=1; g<=nEmpregados; g++) {
		printf("\t%d gerencia:\n", g);
		for (int e=1; e<=nEmpregados; e++) {
			if (relacoes[g][e] == 1)
				printf("\t\t%d\n", e);
		}
		printf("\n");
	}
}

int main() {
	init();	
	
	//primeira linha
	scanf("%d %d %d", &nEmpregados, &nRelacoes, &nInstrucoes);
	
	//recebendo idades
	for (int i=1; i<=nEmpregados; i++) {
		int idade;
		scanf("%d", &idade);
		criarEmpregado(i, idade);
	}
	
	//recebendo relações
	for (int i=0; i<nRelacoes; i++) {
		int g, e;
		scanf("%d %d", &g, &e);
		criarRelacao(g, e);
	}
	
	//recebendo instruções
	for (int i=0; i<nInstrucoes; i++) {
		char instr;
		scanf("%*c%c", &instr);
		
		//troca
		if (instr == 'T') {
			int a, b;
			scanf("%d %d", &a, &b);
			trocar(a, b);
		}
		
		
		//pergunta
		else {
			int e;
			scanf("%d", &e);
			int p = pergunta(e);
			
			//saidaTeste();
			if (p == -1)
				printf("*\n");
			else
				printf("%d\n", p);
		}
		
	}
}