#include <stdio.h>
#include <stdlib.h>

void cabecalho (){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
	int primeiroNumero, segundoNumero;
	float soma, subtracao, divisao, multiplicacao;
	
	cabecalho();
	printf("Digite o primeiro numero: ");
	scanf("%i",&primeiroNumero);
	
	cabecalho();
	printf("Digite o segundo numero: ");
	scanf("%i",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	subtracao = primeiroNumero - segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	
	cabecalho();
	printf("\n=== RESULTADOS ===\n");
	printf("\nPrimeiro numero:%i", primeiroNumero);
	printf("\nSegundo numero:%i", segundoNumero);
	printf("\nSoma:%.f", soma);
	printf("\nSubtracao:%.f", subtracao);
	printf("\nDivisao:%.2f", divisao);
	printf("\nMultiplicacao:%.2f",multiplicacao);
	
	return 0;
}
