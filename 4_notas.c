//Escrever um programa de computador que solicite do usuario 4 notas e,ao final, apresenta a m�dia.
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int nota, media, i;
	float mediaFinal;
	
	for(i = 1; i <= 4; i++){
		printf("Digite a sua %i� nota: ", i);
		scanf("%i",&nota);
		
		//media = media + nota
		media += nota;
		
	}
	
	mediaFinal = media / 4;
		
	printf("\nM�dia final: %2.f", mediaFinal);
	
	return 0;
}
