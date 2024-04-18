/*
Crie um programa que leia 5 n�meros inteiros, utilizando um la�o de repeti��o.

Ap�s solicitar os n�meros para o usu�rio, informe qual � o menor n�mero e o maior n�mero
informado.
*/

#include <stdio.h>
#include <locale.h>

#define NUM 5

int main(){
	setlocale(LC_ALL,"");
	
	int numero[NUM], maiorNumero, menorNumero, i;
	
	for(i = 0; i < NUM; i++) {
		printf("Digite o %i� n�mero: ", i+1);
		scanf("%i",&numero[i]);
	}
	
	for(i = 0; i < NUM; i++) {
		printf("O %i� n�mero: %i\n", i+1, numero[i]);
		
		if (numero[i] > maiorNumero) {
		maiorNumero = numero[i];
		} else {
		menorNumero = numero[i];
		}
	}
	
	printf("\nMaior n�mero: %i", maiorNumero);
	printf("\nMenor n�mero: %i", menorNumero);
}
