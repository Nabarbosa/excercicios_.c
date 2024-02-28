#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}

int main() {
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota;
	float media;
	
	cabecalho();
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	cabecalho();
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	
	cabecalho();
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	
	cabecalho();
	printf("Digite sua terceira nota: ");
	scanf("%f",&terceiraNota);
	
	cabecalho();
	printf("Digite sua quarta nota: ");
	scanf("%f",&quartaNota);
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	
	cabecalho();
	printf("\n=== Exibir Resultados ===\n");
	printf("\nNome:%s", nome);
	printf("\nIdade:%i ", idade);
	printf("\nPrimeira nota:%.2f", primeiraNota);
	printf("\nSegunda nota:%.2f", segundaNota);
	printf("\nTerceira nota:%.2f", terceiraNota);
	printf("\nQuarta nota:%.2f", quartaNota);
	printf("\nMedia:%.2f ", media);
	
	return 0;
	
}

