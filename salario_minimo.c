//Faça um algoritmo que solicite do usuário o valor do
//salário de um usuário, calcule quantos salários
//mínimos esse usuário ganha e imprima na tela o resultado.

//(Base para o salário mínimo R$ 1.412,00).
#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	system("cls || clear");
	printf("\n=== SENAI ===\n");
	fflush(stdin);
}
int main(){
//Declarando variaveis.
	float salarioMinimo = 1412.00, salarioInformado, quantidadeSalarios;
	
//Solicitando dados.
	cabecalho();	
	printf("Digite o salario: ");
	scanf("%f",&salarioInformado);

//Calculando dados.
	
	quantidadeSalarios = salarioInformado / salarioMinimo;
	
//Exibindo dados.
	cabecalho();
	printf("\nQuantidade de salarios:%.1f", quantidadeSalarios);
	
	return 0;
}
