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
	int primeiroNumero, segundoNumero, menorValor, maiorValor;
	float soma, media, produto;
	
	cabecalho();
	printf("digite o primeiro n�mero: ");
	scanf("%i",&primeiroNumero);
	
	cabecalho();
	printf("digite o segundo n�mero: ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	media = (primeiroNumero + segundoNumero) / 2;
	produto = primeiroNumero * segundoNumero;
	
	if (primeiroNumero > segundoNumero){
		primeiroNumero == maiorValor;
		segundoNumero == menorValor;
	}
	else{
		segundoNumero == maiorValor;
		primeiroNumero == menorValor;
	}
	if (primeiroNumero == segundoNumero){
		printf("\nN�meros iguais!");
	}
	
	printf("\nPrimeiro n�mero:%i", primeiroNumero);
	printf("\nSegundo n�mero:%i", segundoNumero);
	printf("\nSoma:%.1f", soma);
	printf("\nM�dia:%.1f", media);
	printf("\nProduto:%.1f", produto);
	printf("\nMaior valor:%.1i", maiorValor);
	printf("\nMenor valor:%.1i", menorValor);
	
	return 0;
}
