//Crie funções em linguagem C que receba 2 números e
//retorne a soma, subtração, divisão e a multiplicação destes
//dois números informados.
//Obs.: Crie uma função para cada operação.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int somar(int n1, int n2) {
	int soma;
	soma = n1 + n2;
	return soma;
}

int subtrair(int n1, int n2) {
	int subtrai;
	subtrai = n1 - n2;
	return subtrai;
}

int multiplicar(int n1, int n2) {
	int multiplica;
	multiplica = n1 * n2;
	return multiplica;
}

float divisaor(float n1, float n2) {
	float divide;
	divide = n1 / n2;
	return divide;
}

int main() {
	setlocale(LC_ALL,"");
	
	int primeiroNumero, segundoNumero, soma, subtracao, multiplicacao;
	float divisao;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%i",&segundoNumero);
	
	soma = somar(primeiroNumero, segundoNumero);
	subtracao = subtrair(primeiroNumero, segundoNumero);
	multiplicacao = multiplicar(primeiroNumero, segundoNumero);
	divisao = divisaor(primeiroNumero, segundoNumero);
	
	printf("\n === Resultados === \n");
	printf("\nSoma: %i\n", soma);
	printf("\nSubtração: %i\n", subtracao);
	printf("\nMultiplicação: %i\n", multiplicacao);
	printf("\nDivisão: %.1f\n", divisao);
	
	return 0;
}
