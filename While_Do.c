#include <stdio.h>

float nota, soma = 0, media;
int i;

for (i = 1; i <= 2; i++){
	do {
		printf("Digite a %i� nota: ", i);
		scanf("%f",&nota);
	} while(nota < 0 || nota > 10);
	
	soma += nota;
}

media = soma / 2;

printf("M�dia: %.1f \n", media);

return 0;

}
