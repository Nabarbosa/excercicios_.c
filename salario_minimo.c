//Fa�a um algoritmo que solicite do usu�rio o valor do
//sal�rio de um usu�rio, calcule quantos sal�rios
//m�nimos esse usu�rio ganha e imprima na tela o resultado.

//(Base para o sal�rio m�nimo R$ 1.412,00).
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
