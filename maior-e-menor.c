#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
	setlocale(LC_ALL,"");
	int primeiroNumero, segundoNumero, menorValor = 0, maiorValor = 0;
	float soma, media, produto;
	
	cabecalho();
	printf("digite o primeiro número: ");
	scanf("%i",&primeiroNumero);
	
	cabecalho();
	printf("digite o segundo número: ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	media = (primeiroNumero + segundoNumero) / 2;
	produto = primeiroNumero * segundoNumero;
	
	if (primeiroNumero > segundoNumero) {
		maiorValor = primeiroNumero;
		menorValor =segundoNumero;
	}
	if (segundoNumero > primeiroNumero){ 
		maiorValor = segundoNumero;
		menorValor = primeiroNumero;
	}
	if (primeiroNumero == segundoNumero){
		printf("\nNúmeros iguais!");
	}
	
	printf("\nPrimeiro número:%i", primeiroNumero);
	printf("\nSegundo número:%i", segundoNumero);
	printf("\nSoma:%.1f", soma);
	printf("\nMédia:%.1f", media);
	printf("\nProduto:%.1f", produto);
	printf("\nMaior valor:%.1i", maiorValor);
	printf("\nMenor valor:%.1i", menorValor);
	
	return 0;
}
