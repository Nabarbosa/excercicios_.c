#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL,"");
	
	//Declarando vari�veis.
	char nome[200];
	char conceito;
	float primeiraNota, segundaNota, media;
	
	//Soicitando dados para o usu�rio.
	cabecalho();
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	
	cabecalho();
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	cabecalho();
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	//Calculando m�dia.
	media = (primeiraNota + segundaNota) / 2;
	
	//Verificando conceito.
	if (media >= 9) {
		conceito = 'A';
	}else if (media >= 7.5){
		conceito = 'B';
	}else if (media >= 6){
		conceito = 'C';
	}else if (media >= 4){
		conceito = 'D';
	}else {
		conceito = 'E';
	}
	
	//Exibindo dados para o usu�rio.
	cabecalho();
	printf("Primeira nota: %.1f \n", primeiraNota);
	printf("Segunda nota: %.1f \n", segundaNota);
	printf("M�dia: %.1f \n", media);
	printf("Conceito: %c \n", conceito);
	
	if (conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("Situa��o do aluno: Aprovado.");
	} else {
		printf("Situa��o do aluno: Reprovado.");
	}
	
	return 0;
}

