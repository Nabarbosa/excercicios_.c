/* Crie um algoritmoque receba:
- Nome de três bandas musicais;
- cinco integrantes pra cada banda.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NOME_BANDAS 3
#define INTEGRANTES 5
#define CARACTER 400

int main() {
	setlocale(LC_ALL,"");
	
	char bandasMusicais[NOME_BANDAS][CARACTER];
	char integrantesBandas[INTEGRANTES][NOME_BANDAS][CARACTER];
	int i, j;
	
	for(i = 0; i < NOME_BANDAS; i++) {
		printf("\nDigite o nome da %iª banda: ", i+1);
		scanf("%s",&bandasMusicais[i]);
		
		for(j = 0; j < INTEGRANTES; j++) {
			printf("\nDigite o nome do %iº integrante da banda: ", j+1);
			scanf("%s",&integrantesBandas[j][i]);
			
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
