//Elabore um algoritmo para resolver a seguinte questão:
//As maçãs custam R$ 1,30 cada se forem compradas menos de uma
//dúzia, e R$ 1,00 se forem compradas pelo menos 12.
//Escreva um programa que leia o número de maçãs compradas,
//calcule e escreva o custo total da compra.

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
	int quantidade;
	float preco, total;
	
	cabecalho();
	printf("Digite a quantidade de maçãs compradas: ");
	scanf("%i",&quantidade);
	
	if (quantidade < 12) {
		preco = 1.30;
	}
	if (quantidade >= 12) {
		preco = 1.00;
	}
	
	total = quantidade * preco;
	
	cabecalho();
	printf("\nQuantidade de Maçãs: %i", quantidade);
	printf("\nTotal a pagar: %.1f", total);
	
	return 0;
}
