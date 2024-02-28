//Faça um algoritmo que solicite do usuário um valor
//qualquer e mostre na tela com um reajuste de 10%.

#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system("cls || clear");//limpar terminal.
	printf("\n=== SENAI ===\n");
	fflush(stdin);//limpar cache.
}
int main(){
	float numero, reajuste = 1.1, reajusteTotal;
	
	cabecalho();
	printf("Digite um numero: ");
	scanf("%f",&numero);
	
	reajusteTotal = numero * 1.1;
	
	cabecalho();
	printf("\nNumero:%.2f", numero);
	printf("\nReajuste:%.2f", reajuste);
	printf("\nTotal:%.2f", reajusteTotal);
	
	return 0;
}

