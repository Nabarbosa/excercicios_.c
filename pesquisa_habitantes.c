	/*
Foi feita uma pesquisa entre os habitantes de uma região.
Foram coletados os dados de idade, sexo (M/F) e salário.
Faça um algoritmo que informe:

a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salário a partir de R$ 5.000,00.

Crie um menu com duas opções.

Código | Descrição
1 | Adicionar pessoa
2 | Exibir resultados e sair

O final da leitura de dados se dará com quando o usuário digitar o número código 2.
	*/
	
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	int idade, maiorIdade = 0, menorIdade = 999, quantidadeDeSalario = 0, mulheres5K = 0, opcao = 0;
	char sexo;
	float salario, somaSalario = 0, media;

    do {
    	
    	printf("Código \t Descrição \n");
    	printf("1 \t Adicionar pessoa \n");
    	printf("2 \t Exibir resultados e sair \n");
    	printf("\nDigite a opção desejada: ");
    	scanf("%i",&opcao);
		
		switch(opcao) {
			case 1:
				printf("\nDigite a idade: ");
				scanf("%i",&idade);	
				
				fflush(stdin);
				printf("\nDigite o sexo - M ou F: ");
				scanf("%c",&sexo);
				
				printf("\nDigite o salário: ");
				scanf("%f",&salario);
				system("cls || clear");
		 
				sexo = toupper(sexo);
		
				if (idade > maiorIdade) {
				maiorIdade = idade;
				} 
		
				if (idade < menorIdade) {
				menorIdade = idade;
				}
		
				quantidadeDeSalario++;
				somaSalario += salario;
		
				if(sexo == 'F' && salario >= 5000) {
				mulheres5K++;
				}
		
				break;
			case 2:
				media = somaSalario / quantidadeDeSalario;
				
				printf("\n=== Exibindo Resultados ===\n");
				printf("\nMédia salárial dos grupo: R$ %.2f \n", media);
				printf("\nMaior Idade: %i \n", maiorIdade);
				printf("\nMenor Idade: %i \n",menorIdade);
				printf("\nQuantidade de mulheres com salário acima de 5 mil: %i \n", mulheres5K);
				break;
			default:
				printf("Opção inválida. \n");
	}
} while (opcao != 2);
	
return 0;

}
