#include <stdio.h>
#include <locale.h>

#define ALUNOS 4
#define NOTAS 3

int main() {
	setlocale(LC_ALL,"");
	
	char alunos[ALUNOS][200];
	float notas[ALUNOS][NOTAS], media[ALUNOS];
	int i, j;
	int soma = 0;
	
	for(i = 0; i < ALUNOS; i++) {
		printf("Digite o nome do %iº aluno: ", i+1);
		scanf("%s,",&alunos[i]);
		
		for(j = 0; j < NOTAS; j++) {
			printf("Digite a %iª nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");
		
	}
	
	printf("\n === Exibindo Resultados === \n");
	
	for(i = 0; i < ALUNOS; i++) {
		printf("\n%iº aluno: %s \n", i+1, alunos[i]);
		
		for(j = 0; j < NOTAS; j++) {
			printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("Média do aluno: %.1f \n", media[i]);
		
		printf("\n");

	}
	
	return 0;
}
