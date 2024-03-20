#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
	float nota[4], soma = 0, media;
	int i;
	
	for (i = 0; i < 3; i++) {
		printf("Digite sua %i� nota: ", i+1);
		scanf("%f",&nota[i]);
		
		soma += nota[i];
	}
	
	printf("\n=== Exibindo notas === \n");
	for (i = 0; i < 3; i++) {
		printf("%i� nota - %.1f\n", i+1, nota[i]);
	}
	
	media = soma / i;
	
	if(media >= 7) {
		printf("\n=== Aprovado ===\n");
	} else if (media >= 5) {
		printf("\n=== Recupera��o ===\n");
	} else {
		printf("\n=== Reprovado ===\n");
	}
	
	printf("\nM�dia: %.1f\n", media);
	
	return 0;
}
