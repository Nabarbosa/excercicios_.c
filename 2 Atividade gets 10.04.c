#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define NOME_BANDAS 2
#define INTEGRANTES 2
#define CARACTER 400

int main() {
	setlocale(LC_ALL,"");
	
	char bandasMusicais[NOME_BANDAS][CARACTER];
	char integrantesBandas[INTEGRANTES][NOME_BANDAS][CARACTER];
	int i, j;
	
	for(i = 0; i < NOME_BANDAS; i++) {
		printf("\nDigite o nome da %iª banda: ", i+1);
		gets(bandasMusicais[i]);
		
		for(j = 0; j < INTEGRANTES; j++) {
			printf("\nDigite o nome do %iº integrante da banda: ", j+1);
			gets(integrantesBandas[j][i]);
			
		}
	}
	
	printf("\n ===== Exibindo Resultados ===== \n");
	
	for(i = 0; i < NOME_BANDAS; i++) {
		printf("\nNome da %iª Banda: %s\n", i+1, bandasMusicais[i]);
		
		for(j = 0; j < INTEGRANTES; j++) {
			printf("\nNome do %iº integrante da banda: %s\n", j+1, integrantesBandas[j][i]);
		}
	}
	
	return 0;
}
