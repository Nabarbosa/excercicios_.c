/*
Utilizando vetores, crie um programa que leia o nome de um aluno, 4 notas e calcule a
m�dia aritm�tica.
Verifique a situa��o do aluno considerando:
- M�dia igual ou maior que 7,0: Aprovado.
- M�dia entre 5,0 e 6,9: Recupera��o.
- M�dia menor que 5,0: Reprovado.

Mostre os dados do aluno como: nome, suas 4 notas, m�dia e situa��o conforme
solicitado acima.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM 4

int main(){
	setlocale(LC_ALL,"");
	
	char nome[200];
	int nota, media, i;
	float mediaFinal;
	
	printf("\nDigite o nome do aluno: ");
	scanf("%s",&nome);
	
	for(i = 1; i <= NUM; i++) {
		printf("Digite a sua %i� nota: ", i);
		scanf("%i",&nota);
		
		media += nota;
	}
	
	for(i = 0; i <= NUM; i++){
		printf("%i� N�mero inserido: %i\n", i+1, nota);
	}
	
	mediaFinal = media / NUM;
	
	printf("\nNome do aluno: %s", nome);
	printf("\nM�dia final: %2.f", mediaFinal);
	
	if(mediaFinal >= 7){
		printf("\n === Situa��o : Aprovado ===");
	} else if(mediaFinal >= 5){
		printf("\n === Situa��o : Recupera��o ===");
	} else {
		printf("\n === Situa��o : Reprovado ===");
	}
	
	return 0;
}
