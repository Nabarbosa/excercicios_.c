#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin); // onlineGDB -> setbuf(stdin 0);
}
int main(){
	setlocale(LC_ALL, "");
	char nome[300];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media;
	
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
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	cabecalho();
	printf("\nNome:%s", nome);
	printf("\nIdade:%i", idade);
	printf("\nMedia:%.2f\n", media);
	
	if (media >= 7){
		printf("\n== SITUAÇÃO : APROVADO ==");
	}
	else{
		printf("\n== SITUAÇÃO - REPROVADO ==");
	}
	
	return 0;
	
}
