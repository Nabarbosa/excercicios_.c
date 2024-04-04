#include <stdio.h>
#include <locale.h>

#define DISCIPLINA 3
#define NOTAS 2

int main() {
	setlocale(LC_ALL,"");
	
	char disciplinas[DISCIPLINA][200];
	float soma = 0, notas[DISCIPLINA][NOTAS], media[DISCIPLINA];
	int i, j;
	
	for(i = 0; i < DISCIPLINA; i++){
		printf("Digite a %iª disciplina: ", i+1);
		scanf("%s",&disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("Digite a %iª nota: ", j+1);
			scanf("%f",&notas[i][j]);
			
			soma += notas[i][j];
		}
		
		media[i] = soma / j;
		soma = 0;
		
		printf("\n");
	}
	
	printf("\n === Exibindo Resultados === \n");
	
	printf("\n");
	
	for(i = 0; i < DISCIPLINA; i++){
		printf("Nome da Disciplina: %s \n", disciplinas[i]);
		
		for(j = 0; j < NOTAS; j++){
			printf("%iª nota: %.1f \n", j+1, notas[i][j]);
		}
		
		printf("Média na disciplina: %.1f \n", media[i]);
		
		printf("\n");
		
	}
	
	return 0;
}
