/*
Crie um programa que leia 5 números inteiros, utilizando um laço de repetição.

Após solicitar os números para o usuário, informe qual é o menor número e o maior número
informado.
*/

#include <stdio.h>
#include <locale.h>

#define NUM 5

int main(){
	setlocale(LC_ALL,"");
	
	int numero[NUM], maiorNumero, menorNumero, i;
	
	for(i = 0; i < NUM; i++) {
		printf("Digite o %iº número: ", i+1);
		scanf("%i",&numero[i]);
	}
	
	for(i = 0; i < NUM; i++) {
		printf("O %iº número: %i\n", i+1, numero[i]);
		
		if (numero[i] > maiorNumero) {
		maiorNumero = numero[i];
		} else {
		menorNumero = numero[i];
		}
	}
	
	printf("\nMaior número: %i", maiorNumero);
	printf("\nMenor número: %i", menorNumero);
}
