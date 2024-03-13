#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota, soma = 0, media;
	int i;
	char resultado[200];
	
	for(i = 1; i <= 3; i++) {
		printf("Digite a %iª nota: ", i);
		scanf("%f",&nota);
		
		soma += nota;
	}
	
	media = soma / 3;
	
	if(media >= 7) {
		strcpy(resultado, "APROVADO!");
	} else if(media >= 5){
		strcpy(resultado, "RECUPERAÇÃO!");
	} else {
		strcpy(resultado, "REPROVADO!");
	}
	
	printf("\n === Exibindo resultados === \n ");
	printf("Média: %.1f \n", media);
	printf("Resultado: %s \n", resultado);
	return 0;
}
