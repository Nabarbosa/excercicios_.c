#include <stdio.h>
#include <locale.h>

#define SIZE 6
#define STRING 200

int main() {
	setlocale(LC_ALL,"");
	
	int idades[SIZE], i;
	char nomes[SIZE][STRING];
	
	printf("\n === Solicitando dados === \n");
	for(i = 0; i < SIZE; i++) {
		printf("\nDigite o %iº nome: ", i+1);
		scanf("%s",&nomes[i]);

		printf("Digite a %iº idade: ", i+1);
		scanf("%i",&idades[i]);
	}
	
	printf("\n === Exibindo resultados === \n");
	for(i = 0; i < SIZE; i++) {
		printf("%iº Pessoa \n Nome - %s\n Idade - %i\n\n", i+1, nomes[i], idades[i]);
	}
	
	return 0;
}
