#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
	setlocale(LC_ALL,"");
	
	float nota = 0, media = 0, soma = 0;
	int contador = 0;
	char opcao;
	
	do {
		printf("Digite sua nota: ");
		scanf("%f",&nota);
		
		// soma = soma + nota;
		soma += nota;
		
		// contador = contador + 1;
		contador++;
		
		fflush(stdin);
		
		printf("Deseja digitar mais uma nota? ");
		scanf("%c",&opcao);
		
		opcao = toupper(opcao);// Converte para maiusculo.
			
	} while (opcao != 'N');
	
	media = soma / contador;
	
	printf("\n === Exibindo resultados === \n");
	printf("\nMedia: %.1f", media);
	printf("\nO bloco foi repetido %i vezes", contador);
	
	return 0;
}
