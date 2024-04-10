#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define QUANTIDADE_DISCIPLINAS 3
#define QUANTIDADE_NOTAS 2
#define CARACTER 200

int main() {
	setlocale(LC_ALL,"");
	
	char disciplinas[QUANTIDADE_DISCIPLINAS][CARACTER];
	int notas[QUANTIDADE_DISCIPLINAS][QUANTIDADE_NOTAS];
	int i, j, soma = 0;
	float media[QUANTIDADE_DISCIPLINAS];
	
	for(i = 0; i < QUANTIDADE_DISCIPLINAS; i++) {
		printf("Informe o nome da %iª disciplina: ", i+1);
		scanf("%s",&disciplinas[i]);
		
		for(j = 0; j < QUANTIDADE_NOTAS; j++) {
			printf("Digite a %iª nota: ", j+1);
			scanf("%i",&notas[i][j]);
			
			soma += notas[i][j];
				
		}
		
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");	
		
	}
	
	printf("\n ==== Exibindo Resultados ==== \n");
	
	printf("\n");
	
	for(i = 0; i < QUANTIDADE_DISCIPLINAS; i++) {
		printf("\n%iª Disciplina informada: %s", i+1, disciplinas[i]);
		
		for(j = 0; j < QUANTIDADE_NOTAS; j++) {
			printf("\n%iª nota: %i", j+1, notas[i][j]);
		}
		
		printf("\nMédia na disciplina: %.1f", media[i]);
		
		printf("\n");
		
		if(media[i] >= 7){
			printf("\n Situação do aluno...\n\n === Aprovado === \n");
		} else if(media[i] >= 5){
			printf("\n Situação do aluno...\n\n === Recuperação === \n");
		} else {
			printf("\n Situação do aluno...\n\n === Reprovado === \n");
		}
		
		printf("\n");
		
	}
	
	return 0;
}
