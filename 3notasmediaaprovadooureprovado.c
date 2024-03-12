#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int nota, media, i;
	float mediaFinal;
	
	for(i = 1; i <= 3; i++) {
		printf("Digite a sua %iª nota: ", i);
		scanf("%i",&nota);
		
		media += nota;
	}
	
	mediaFinal = media / 3;
	
	printf("\nMédia final: %2.f", mediaFinal);
	
	if(mediaFinal >= 7){
		printf("\n === Situação : Aprovado ===");
	} else if(mediaFinal >= 4){
		printf("\n === Situação : Recuperação ===");
	} else {
		printf("\n === Situação : Reprovado ===");
	}
	
	return 0;
}
