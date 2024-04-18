/*
Utilizando vetores, crie um programa que leia o nome de um aluno, 4 notas e calcule a
média aritmética.
Verifique a situação do aluno considerando:
- Média igual ou maior que 7,0: Aprovado.
- Média entre 5,0 e 6,9: Recuperação.
- Média menor que 5,0: Reprovado.

Mostre os dados do aluno como: nome, suas 4 notas, média e situação conforme
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
		printf("Digite a sua %iª nota: ", i);
		scanf("%i",&nota);
		
		media += nota;
	}
	
	for(i = 0; i <= NUM; i++){
		printf("%iº Número inserido: %i\n", i+1, nota);
	}
	
	mediaFinal = media / NUM;
	
	printf("\nNome do aluno: %s", nome);
	printf("\nMédia final: %2.f", mediaFinal);
	
	if(mediaFinal >= 7){
		printf("\n === Situação : Aprovado ===");
	} else if(mediaFinal >= 5){
		printf("\n === Situação : Recuperação ===");
	} else {
		printf("\n === Situação : Reprovado ===");
	}
	
	return 0;
}
